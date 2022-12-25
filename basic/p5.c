#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d", &a) != -1)
    {
        if(a < 0)
        {
            a = -a;
            a ^= 0b11111111;
            a++;
        }
        int idx = 0;
        int table[10] = {0};
        while(a)
        {
            table[idx++] = a % 2;
            a >>= 1;
        }
        for(int i = 7; i >= 0; --i)
            printf("%d", table[i]);
        putchar('\n');
    }
    return 0;
}