#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    while(scanf("%s", str) != -1)
    {
        int len = strlen(str), flag = 1;
        for(int i = 0; i < len / 2; ++i)
        {
            if(str[i] != str[len - i - 1])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            puts("YES");
        else
            puts("NO");
    }
}