#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    // count char
    char str[100000];
    int cnt[26] = {0};
    while(fgets(str, 100000, stdin))
    {
        memset(cnt, 0, sizeof(cnt));
        for(char *ptr = str; *ptr != '\n'; ++ptr)
        {
            char temp = tolower(*ptr);
            if(temp >= 'a' && temp <= 'z')
                cnt[temp - 'a']++;
        }
        for(int i = 0; i < 26; ++i)
            printf("%d%c", cnt[i], " \n"[i == 25]);
    }
}