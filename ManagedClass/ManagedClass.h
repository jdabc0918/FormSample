// ManagedClass.h

#pragma once

using namespace System;

#include "../UnmanagedClass/UnmanagedClass.h"

namespace ManagedClass {

	public ref class mClass
	{
    internal:
        UnmanagedClass* umClass;
    public:
        mClass();
        ~mClass();
        !mClass();

        void showImage();
	};
}
