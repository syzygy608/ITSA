#include <stdio.h>
  
int main()  
{  
    int a;  
    scanf("%d", &a);
    if(2 < a && a < 6)  
        puts("Spring");
    else if(a > 5 && a < 9)  
        puts("Summer");  
    else if(a > 8 && a < 12)  
        puts("Autumn");  
    else  
        puts("Winter");  
    return 0;  
}  