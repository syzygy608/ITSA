#include <stdio.h>
#include <string.h>

int main()
{
    // array element more than half
    char str[10000];
    int arr[101];
    int cnt = 0;
    while(fgets(str, 99999, stdin))
    {
        int idx = 0;
        char *token = strtok(str, " \n");
        while(token != NULL)
        {
            sscanf(token, "%d", &arr[idx]);
            idx++;
            token = strtok(NULL, " \n");
        }
        int cnt = 0, flag = 0;  
        for(int i = 0; i < idx; ++i)  
        {  
            for(int j = 0; j < idx; ++j)  
                if(arr[i] == arr[j])  
                    cnt++;  
            if(cnt > idx / 2)  
            {  
                printf("%d\n", arr[i]);  
                flag = 1;  
                break;  
            }  
            else  
                cnt = 0;  
        }  
        if(!flag)  
            printf("NO\n");  
    }
}