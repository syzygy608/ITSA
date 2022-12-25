#include <stdio.h>

int main()
{
    double a;
    while(scanf("%lf", &a) != -1)
        printf("%.1lf\n", a * 1.6);
    return 0;
}