#include <graphics.h>
#include <conio.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*) "");
    int x1 = 100, y1=100;
    int x2=300, y2=200;
    int dx= abs(x2-x1);
    int dy= abs(y2-y1);
    int sx=(x1<x2)?1:-1;
    int sy=(y1<y2)?1:-1;
    int err= dx-dy;
    while (true)
    {
        putpixel(x1, y1, WHITE);
        if(x1==x2 && x1==y2){
            break;
        }
        int e2= 2*err;
        if(e2>-dy){
            err-=dy;
            x1+=sx;
        }
        if(e2<dx){
            err+=dx;
            y1+=sy;
        }
    }
    
    getch();
    closegraph();
}