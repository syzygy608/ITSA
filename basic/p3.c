#include <stdio.h>

int main()
{
    // in or out for the circle
    int a, b;
    while(scanf("%d %d", &a, &b) != -1)
    {
        if(a * a + b * b <= 10000)
            puts("inside");
        else
            puts("outside");
    }
    return 0;
}