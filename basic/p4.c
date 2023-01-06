#include <stdio.h>

int main()
{
    // parking fee 
    // 停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，\
    // 超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    int minutes = h2 * 60 + m2 - (h1 * 60 + m1);
    minutes /= 30;
    int money = 0;
    if(minutes <= 2 && minutes)
        money = minutes * 30;
    else if(minutes < 8)
        money = 30 * 4 + (minutes - 4) * 40;
    else 
        money = 30 * 4 + 40 * 4 + (minutes - 8) * 60;
    printf("%d\n", money);
    return 0;
}