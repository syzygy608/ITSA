#include <stdio.h>
#include <string.h>
  

int main()  
{  
    // 計算梯形面積
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) != -1)
        printf("Trapezoid area:%.1f\n", (a + b) * c / 2.0);
    return 0;  
}  