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
        cout << "UnmanagedClass::launchViewer error : ���ł�OpenCV Viewer���N�����Ă��܂��B " << _img_fname << endl;
        return -1;
    }

    else{
        
        //�摜�̃��[�h
        Image = imread(_img_fname);
        if (Image.empty()){
            cout << "UnmanagedClass::launchViewer error : cannot open file " << _img_fname << endl;
            return -1;
        }
        resize(Image, Image, Size(), 0.5, 0.5);

        //�E�B���h�E���쐬
        namedWindow(viewerWinName, CV_WINDOW_AUTOSIZE);
        cout << "OpenCV Viewer���N�����܂��B" << endl;
        cout << "�R�}���h�w���v�F" << endl;
        cout << "   ESC -> �I���B" << endl;

        //�R�[���o�b�N��ݒ�
        setMouseCallback(viewerWinName, mouseCallback, (void *)&Image);

        //Main loop
        while (1){

            viewer_launch_flag = true;

            imshow(viewerWinName, Image);

            int key = cv::waitKey(10);

            if ((char)key == 27){  //ESC�ŏI��
                viewer_launch_flag = false;
                destroyWindow(viewerWinName);
                cout << "OpenCV Viewer���I�����܂��B" << endl;
                break;
            }
        }
    }

    return 0;

}


