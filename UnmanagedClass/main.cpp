// UnmanagedClass.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
    UnmanagedClass uClass;
    
    string img_fname = "C:/opencv248/sources/samples/winrt/OcvImageProcessing/OcvImageProcessing/Assets/Lena.png";

    uClass.launchViewer(img_fname);

    return 0;
}

