// これは メイン DLL ファイルです。

#include "stdafx.h"

#include "ManagedClass.h"

ManagedClass::mClass::mClass()
{
    this->umClass = new UnmanagedClass();
}

ManagedClass::mClass::~mClass()
{
    this->!mClass();
}

ManagedClass::mClass::!mClass()
{
    delete this->umClass;
}

void ManagedClass::mClass::showImage()
{
    this->umClass->showImage();
}