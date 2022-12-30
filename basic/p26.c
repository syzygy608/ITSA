#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // digit sum sort
    int n;
    scanf("%d", &n);
    int sum[n], arr[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        int tmp = arr[i];
        sum[i] = 0;
        while(tmp)
        {
            sum[i] += tmp % 10;
            tmp /= 10;
        }
    }
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = 0; j < n - i - 1; ++j)
        {
            if(sum[j] > sum[j + 1])
            {
                int tmp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            else if(sum[j] == sum[j + 1] && arr[j] > arr[j + 1])
            {
                int tmp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for(int i = 0; i < n; ++i)
        printf("%d%c", arr[i], " \n"[i == n - 1]);
    return 0;
}