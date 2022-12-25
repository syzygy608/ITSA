#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d", &a) != -1)
    {
        int sum = 0;
        for(int i = 3; i <= a; ++i)
            if(i % 3 == 0)
                sum += i;
        printf("%d\n", sum);
    }
    return 0;
}