#include <stdio.h>
  
int main()  
{  
    // 計算元素中所有元素的立方和。
    int arr[6];
    long long int sum = 0;
    for(int i = 0, num; i < 6; ++i)
    {
        scanf("%d", &num);
        sum += num * num * num;
    }
    printf("%lld\n", sum);
    return 0;  
}  