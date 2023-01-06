#include <stdio.h>

int main()
{
    // matrix mul
    int n, m, k;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            scanf("%d", &arr[i][j]);
    scanf("%d %d", &m, &k);
    int brr[m][k], ans[n][k];
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < k; ++j)
            scanf("%d", &brr[i][j]);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < k; ++j)
        {
            ans[i][j] = 0;
            for(int h = 0; h < m; ++h)
                ans[i][j] += arr[i][h] * brr[h][j];
            printf("%d%c", ans[i][j], " \n"[j == k - 1]);
        }
    }
}