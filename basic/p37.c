#include <stdio.h>
  
int main()  
{  
    // 18 la
    int cnt[10] = {0}, sum = 0;
    for(int i = 0; i < 4; ++i)
    {
        int num;
        scanf("%d", &num);
        cnt[num]++;
        sum += num;
    }
    int score = 0;
    for(int i = 0; i < 10; ++i)
    {
        if(cnt[i] == 4)
        {
            puts("WIN");
            return 0;
        }
        else if(cnt[i] == 2)
            score = (sum - 2 * i > score) ? sum - 2 * i : score;
    }
    if(score)
        printf("%d\n", score);
    else
        puts("R");
    return 0;  
}  