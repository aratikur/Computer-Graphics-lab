#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    line(100,300,400,300);
    getch();
    closegraph();
}