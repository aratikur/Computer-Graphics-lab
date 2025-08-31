#include <graphics.h>
#include <conio.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm, (char*)"");
    rectangle(100, 200, 300, 400);
    getch();
    closegraph();
}