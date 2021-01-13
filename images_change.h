#ifndef IMAGE_CHANGE_H
#define IMAGE_CHANGE_H

#define IMAGE_MAXNUM  (7)
class Images_Change
{
public:
    Images_Change();
    char *NextImage();
    char *NextImage2();

    const char* images[IMAGE_MAXNUM] =
    {"/home/xiaoqiang/QT/ImageVideoDspDemo/Image/1.jpg",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/2.jpg",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/3.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/4.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/dog.gif",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/horse.gif",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/7.gif",
    };

    const char* images2[IMAGE_MAXNUM] =
    {"/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s0.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s1.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s2.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s3.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s4.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s5.png",
     "/home/xiaoqiang/QT/ImageVideoDspDemo/Image/s6.png",
    };

    int  index;
};




#endif // IMAGE_CHANGE_H
