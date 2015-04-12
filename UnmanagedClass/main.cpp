// UnmanagedClass.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
    UnmanagedClass uClass;
    
    string img_fname = "C:/opencv248/sources/samples/winrt/OcvImageProcessing/OcvImageProcessing/Assets/Lena.png";

    uClass.launchViewer(img_fname);

    return 0;
}

