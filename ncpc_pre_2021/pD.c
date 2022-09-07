#include <stdio.h>

int main()
{
    int y1, y2, x1,x2;
    while(scanf("%d %d %d %d", &y1, &y2, &x1, &x2) != -1)
    {
        if(y1 == y2 && y2 == x1 && x1 == x2 && x2 == 0)
            break;
        int pt_x, pt_y;
        scanf("%d %d", &pt_x, &pt_y);
        if(x1 <= pt_x && pt_x <= x2)
        {
            if(pt_y <= y2)
                puts("IN");
            else
                puts("OUT");
        }
        else
        {
            if(y1 <= pt_y && pt_y <= y2)
                puts("IN");
            else
                puts("OUT");
        }
    }
    return 0;
}