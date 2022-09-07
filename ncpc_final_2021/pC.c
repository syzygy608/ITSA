#include <stdio.h>  
#include <string.h>
  
#define max(a, b) (((a)>(b))?(a):(b))

int arr[20005], dp[20005];

int main()  
{  
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        memset(dp, 0, sizeof(int) * (n + 1));
        for(int i = 1; i <= n; ++i)
            scanf("%d", arr + i);
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= i; ++j)
                if(arr[i] > arr[j - 1])
                    dp[i] = max(dp[i], dp[j - 1] + 1);
        int ans = 0;
        for(int i = 1; i <= n; ++i)
            ans = max(ans, dp[i]);
        printf("%d\n", ans);
    }    
    return 0;  
}  