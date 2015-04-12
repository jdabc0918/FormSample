#include "stdafx.h"

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

        break;

    case cv::EVENT_LBUTTONDOWN:

        break;

    case cv::EVENT_LBUTTONUP:

        break;
    }
    
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

        //ウィンドウを作成
        namedWindow(viewerWinName, CV_WINDOW_AUTOSIZE);
        cout << "OpenCV Viewerを起動します。" << endl;
        cout << "コマンドヘルプ：" << endl;
        cout << "   ESC -> 終了。" << endl;

        //コールバックを設定
        setMouseCallback(viewerWinName, mouseCallback, (void *)&Image);

        //Main loop
        while (1){

            viewer_launch_flag = true;

            imshow(viewerWinName, Image);

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


