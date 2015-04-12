// これは メイン DLL ファイルです。

#include "stdafx.h"

#include "ManagedClass.h"

//cvtString
std::string ManagedClass::mClass::cvtString(System::String^ _Str)
{
    msclr::interop::marshal_context context;
    std::string standardString = context.marshal_as<std::string>(_Str);

    return standardString;
}

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

int ManagedClass::mClass::launchViewer(System::String^ _img_fname)
{
    return this->umClass->launchViewer(cvtString(_img_fname));
}