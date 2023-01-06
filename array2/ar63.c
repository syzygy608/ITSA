#include <stdio.h>

int main()
{
    // matrix add
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            scanf("%d", &arr[i][j]);
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0, num; j < m; ++j)
        {
            scanf("%d", &num);
            printf("%d%c", arr[i][j] + num, " \n"[j == m - 1]);
        }
    }
}