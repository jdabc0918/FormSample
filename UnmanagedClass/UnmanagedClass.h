#ifndef _UNMANAGED_CLASS_H_
#define _UNMANAGED_CLASS_H_

class UnmanagedClass{
public:
    UnmanagedClass();
    ~UnmanagedClass();

    static void mouseCallback(int event, int x, int y, int flags, void* param);
    int launchViewer(std::string _img_fname);
private:
    Mat Image;
    string viewerWinName;
    bool viewer_launch_flag;
};

#endif