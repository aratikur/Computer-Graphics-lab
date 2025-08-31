#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int i;

    initgraph(&gd, &gm, "");

    for (i = 0; i < 400; i++) {
        cleardevice();

        // Car body
        rectangle(50+i, 200, 150+i, 250);
        rectangle(70+i, 170, 130+i, 200);

        // Wheels
        circle(70+i, 260, 10);
        circle(130+i, 260, 10);

        delay(20);
    }

    getch();
    closegraph();
    return 0;
}
