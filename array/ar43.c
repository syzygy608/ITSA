#include <stdio.h>

int power(int m, int n)
{
    int res = 1;
    while(n)
    {
        if(n & 1)
            res *= m;
        m *= m;
        n >>= 1;
    }
    return res;
}
int main()
{
    // m^n
    int m, n;
    while(scanf("%d %d", &m, &n) != -1)
        printf("%d\n", power(m, n));
}