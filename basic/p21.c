#include <stdio.h>
  
int main()  
{  
    // find maximum and minimum
    double mx, mn, num;
    for(int i = 0; i < 10; ++i)
    {
        scanf("%lf", &num);
        if(!i)
        {
            mx = num;
            mn = num;
        }
        if(num > mx)
            mx = num;
        else if(num < mn)
            mn = num;
    }
    printf("maximum:%.2lf\nminimum:%.2lf\n", mx, mn);
    return 0;  
}  