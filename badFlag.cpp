#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    bar(100, 100, 400, 250);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(250, 175, 40);
    floodfill(250, 175, RED);
    getch();
    closegraph();
}