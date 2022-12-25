#include <stdio.h>

int f(int a)
{
    if(a == 0 || a == 1)
        return a + 1;
    return f(a - 1) + f(a / 2);
}

int main()
{
    int a;
    while(scanf("%d", &a) != -1)
        printf("%d\n", f(a));
    return 0;
}