#include <graphics.h>
#include <conio.h>
int main(){
    int gd= DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    // home base
    rectangle(200,200,400,400);
    // trinagle
    line(200,200,300,100);
    line(300,100,400,200);
    // door
    rectangle(270,300,330,400);
    // left window
    rectangle(220,220,260,260);
    // right window
     rectangle(340,220,380,260);
    getch();
    closegraph();
}