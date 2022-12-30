#include <stdio.h>
  
int main()  
{  
    // give back coin
    int n, a[3];
    scanf("%d,%d,%d,%d", &n, &a[0], &a[1], &a[2]);
    int paid = a[0] * 15 + a[1] * 20 + a[2] * 30;
    if(n < paid)
        puts("0");
    else
    {
        int arr[3] = {0}, coin[3] = {1, 5, 50}, keep = n - paid, idx = 2;
        while(keep)
        {
            if(keep >= coin[idx])
            {
                arr[idx] += keep / coin[idx];
                keep %= coin[idx];
            }
            idx--;
        }
        for(int i = 0; i < 3; ++i)
            printf("%d%c", arr[i], ",\n"[i == 2]);
    }
    return 0;  
}  