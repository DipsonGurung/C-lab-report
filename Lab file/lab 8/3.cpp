#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    circle(300, 200, 50);

    getch();
    closegraph();
    return 0;
}

