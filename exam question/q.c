#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm,errCode;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    errCode=graphresult();
    if(errCode!=grOk)
    {
        printf("\ngraphics initilization failure!!");
        exit(1);
    }
    setcolor(RED);
    circle(50,50,75);
    circle(50,50,125);
    closegraph();
    return 0;
}