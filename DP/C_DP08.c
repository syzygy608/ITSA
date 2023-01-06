#include <stdio.h>
#include <string.h>
  
#define min(a, b) (((a)<(b))?(a):(b))

int main()  
{  
    // charge ways
    int n;
    scanf("%d", &n);
    int dp[n + 1], arr[] = {1, 5, 10, 50};
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j <= n; ++j)
            if(j - arr[i] >= 0)
                dp[j] += dp[j - arr[i]];
    printf("%d\n", dp[n]);
    return 0;  
}  