#include "images_change.h"
#include "widget.h"
#include "ui_widget.h"
#include "widget.h"
#include "ui_widget.h"

Images_Change::Images_Change()
{
    index = -1;
}


char* Images_Change::NextImage()
{
    if( index  >= (IMAGE_MAXNUM - 1))
    {
        index = 0;
    }
    else
    {
        index++;
    }

    return (char *)(images[index]);
}


char* Images_Change::NextImage2()
{
    if( index  >= (IMAGE_MAXNUM - 1))
    {
        index = 0;
    }
    else
    {
        index++;
    }

    return (char *)(images2[index]);
}
