#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[10000];
    int cnt = 0, arr[26] = {0};
    while(scanf("%s", str) != -1)
    {
        cnt++;
        for(char *ptr = str; *ptr != '\0'; ++ptr)
            arr[tolower(*ptr) - 'a']++;
    }
    printf("%d\n", cnt);
    for(int i = 0; i < 26; ++i)
        if(arr[i])
            printf("%c : %d\n", 'a' + i, arr[i]);
    return 0;
}