#include <stdio.h>
  
int main()  
{  
    // calculate weight
    double a;
    int gender;
    while(scanf("%lf %d", &a, &gender) != -1)
        printf("%.1lf\n", (gender == 1) ? (a - 80) * 0.7 : (a - 70) * 0.6);
    return 0;  
}  