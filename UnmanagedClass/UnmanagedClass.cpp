#include "stdafx.h"

UnmanagedClass::UnmanagedClass(){};
UnmanagedClass::~UnmanagedClass(){};

void UnmanagedClass::showImage(){
    Image = imread("C:/opencv248/sources/samples/winrt/OcvImageProcessing/OcvImageProcessing/Assets/Lena.png");
    imshow("Image", Image);
    waitKey();
}



