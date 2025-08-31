#include <graphics.h>
#include <conio.h>
int main(){
   int gd = DETECT, gm;
   initgraph(&gd,&gm, (char*)"");
   for(int i =0; i<400; i++){
    cleardevice();
    // car body
    rectangle(50+i,200, 150+i, 250);
    // while
    circle(50+i,260,10);
    circle(150+i,260,10);
    delay(10);

   }
   getch();
   closegraph();

}