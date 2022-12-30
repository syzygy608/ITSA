#include <stdio.h>
  
int main()  
{  
    // encode number
    int arr[4] = {0};
    for(int i = 0, num; i < 4; ++i)
    {
        scanf("%1d", &num);
        if(i < 2)
            arr[i + 2] = (num + 7) % 10;
        else
            arr[i - 2] = (num + 7) % 10;
    }
    for(int i = 0; i < 4; ++i)
        printf("%d", arr[i]);
    putchar('\n');
    return 0;  
}  