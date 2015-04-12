#include "stdafx.h"

bool UnmanagedClass::drawing_box = false;
bool UnmanagedClass::drawed_box = false;
Rect UnmanagedClass::box = Rect(0, 0, 0, 0);
Rect UnmanagedClass::dBox = Rect(0, 0, 0, 0);

UnmanagedClass::UnmanagedClass()
{
    viewerWinName = "OpenCV Viewer";
    viewer_launch_flag = false;
};

UnmanagedClass::~UnmanagedClass(){};

void UnmanagedClass::mouseCallback(int event, int x, int y, int flags, void* param){

    cv::Mat* image = static_cast<cv::Mat*>(param);

    switch (event){
    case cv::EVENT_MOUSEMOVE:
        if (drawing_box){
            box.width = x - box.x;
            box.height = y - box.y;
        }
        break;

    case cv::EVENT_LBUTTONDOWN:
        drawing_box = true;
        dBox = Rect(0, 0, 0, 0);
        box = Rect(x, y, 0, 0);
        break;

    case cv::EVENT_LBUTTONUP:
        drawing_box = false;
        if (box.width < 0){
            box.x += box.width;
            box.width *= -1;
        }
        if (box.height < 0){
            box.y += box.height;
            box.height *= -1;
        }
        dBox = box;
        //draw_box(image, dBox);
        break;
    }
    
}
void UnmanagedClass::draw_box(cv::Mat* img, cv::Rect rect){
    cv::rectangle(*img, cv::Point2d(box.x, box.y), cv::Point2d(box.x + box.width, box.y + box.height),
        cv::Scalar(0xff, 0x00, 0x00));
}

int UnmanagedClass::launchViewer(std::string _img_fname)
{
    if (viewer_launch_flag == true){
        cout << "UnmanagedClass::launchViewer error : すでにOpenCV Viewerを起動しています。 " << _img_fname << endl;
        return -1;
    }

    else{
        
        //画像のロード
        Image = imread(_img_fname);
        if (Image.empty()){
            cout << "UnmanagedClass::launchViewer error : cannot open file " << _img_fname << endl;
            return -1;
        }
        resize(Image, Image, Size(), 0.5, 0.5);
        Mat temp = Image.clone();

        //ウィンドウを作成
        namedWindow(viewerWinName, CV_WINDOW_AUTOSIZE);
        cout << "OpenCV Viewerを起動します。" << endl;
        cout << "コマンドヘルプ：" << endl;
        cout << "   ESC -> 終了。" << endl;

        //コールバックを設定
        setMouseCallback(viewerWinName, mouseCallback, (void *)&Image);

        //Main loop
        viewer_launch_flag = true;
        while (1){

            Image.copyTo(temp);

            draw_box(&temp, dBox);

            if (drawing_box) {
                draw_box(&temp, box);
            }

            imshow(viewerWinName, temp);

            int key = cv::waitKey(10);

            if ((char)key == 27){  //ESCで終了
                viewer_launch_flag = false;
                destroyWindow(viewerWinName);
                cout << "OpenCV Viewerを終了します。" << endl;
                break;
            }
        }
    }

    return 0;

}

int UnmanagedClass::showSelectedAreaInfo()
{
    Mat ROI = Image(dBox);
    if (ROI.empty()){
        cout << "UnmanagedClass::showSelectedAreaInfo error : no area is selected." << endl;
        return -1;
    }
    else{
        imshow("ROI", ROI);
        waitKey();
        return 0;
    }
}


