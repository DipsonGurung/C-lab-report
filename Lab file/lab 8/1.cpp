#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(100, 100, 300, 100);

    getch();
    closegraph();
    return 0;
}

