#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d", &a) != -1)
    {
        char flag = 1;
        for(int i = 2; i * i <= a; ++i)
        {
            if(a % i == 0)
            {
                flag = 0;
                break;
            }
        }
        (flag) ? puts("YES") : puts("NO");
    }
    return 0;
}