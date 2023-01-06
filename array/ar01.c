#include <stdio.h>
#include <string.h>

int main()
{
    // reverse 1D-arrays;
    char str[10000];
    char arr[101][200];
    int cnt = 0;
    while(fgets(str, 99999, stdin))
    {
        int idx = 0;
        char *token = strtok(str, " \n");
        while(token != NULL)
        {
            strcpy(arr[idx], token);
            idx++;
            token = strtok(NULL, " \n");
        }
        for(int i = idx - 1; i > -1; --i)
            printf("%s%c", arr[i], " \n"[i == 0]);
    }
}