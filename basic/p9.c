#include <stdio.h>

int main()
{
    // 輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。
    int a;
    while(scanf("%d", &a) != -1)
    {
        int sum = 0;
        for(int i = 3; i <= a; ++i)
            if(i % 3 == 0)
                sum += i;
        printf("%d\n", sum);
    }
    return 0;
}