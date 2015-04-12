// ManagedClass.h

#pragma once

#include <msclr/marshal_cppstd.h>

using namespace System;

#include "UnmanagedClass.h"

namespace ManagedClass {

	public ref class mClass
	{
    internal:
        UnmanagedClass* umClass;
    public:
        mClass();
        ~mClass();
        !mClass();

        int launchViewer(System::String^ _img_fname);
        int showSelectedAreaInfo();
         
        //convert System::String to std::string
        std::string cvtString(System::String^ _Str);
        
	};
}
