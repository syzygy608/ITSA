#include <stdio.h>

#define cmin(a,b) ((a)<(b))?(a):(b)
#define cmax(a,b) ((a)>(b))?(a):(b)

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int nx = 2000, mx = -1, ny = 2000, my = -1;
        while(n--)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            nx = cmin(nx, x);
            mx = cmax(mx, x);
            ny = cmin(ny, y);
            my = cmax(my, y);
        }
        printf("%d\n", (mx - nx) * (my - ny));
    }
}