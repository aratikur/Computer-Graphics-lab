#include <graphics.h>
#include <conio.h>
#include <cmath>
void DDA(int x0, int y0, int x1, int y1)
{
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xinc = dx / (float)steps;
    float Yinc = dy / (float)steps;
    float X = x0;
    float Y = y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(X), round(Y), WHITE);
        X += Xinc;
        Y += Yinc;
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
    DDA(100, 100, 400, 100);
    getch();
    closegraph();
}