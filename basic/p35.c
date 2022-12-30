#include <stdio.h>
  
void swap(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main()  
{  
    // buy gift
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        int T, m, k;
        scanf("%d %d %d", &T, &m, &k);
        int arr[k];
        for(int j = 0; j < k; ++j)
            scanf("%d", &arr[j]);
        for(int j = 0; j < k - 1; ++j)
            for(int l = 0; l < k - 1 - j; ++l)
                if(arr[l] > arr[l + 1])
                    swap(&arr[l], &arr[l + 1]);
        int sum = 0, cnt = 0;
        for(int j = 0; j < k && sum + arr[j] <= T && cnt < m; ++j, ++cnt)
            sum += arr[j];
        if(cnt >= m)
            printf("%d\n", sum);   
        else
            printf("Impossible\n");
    }
    return 0;  
}  