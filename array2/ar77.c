#include <stdio.h>

int main()
{
    // matrix rotate
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = n * m; i > 0; --i)
        printf("%d%c", i, " \n"[i % m == 1]);
}