#include <stdio.h>
#include <string.h>

int main()
{
    // array size and average
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
        double sum = 0;
        for(int i = idx - 1; i > -1; --i)
            sum += (double)arr[i];
        printf("Size: %d\nAverage: %.3lf\n", idx, sum / (double)idx);
    }
}