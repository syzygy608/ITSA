#include <stdio.h>

int main()
{
    // maximum in array
    int arr[9];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            scanf("%d%*c", &arr[j + i * 3]);
    int sum = 0;
    for(int i = 0; i < 3; ++i)
    {
        int mx = -1000000000, idx = -1;
        for(int j = 0; j < 9; ++j)
        {
            if(arr[j] > mx)
            {
                mx = arr[j];
                idx = j;
            }
        }
        arr[idx] = -1000000000;
        sum += mx;
    }
    printf("%d\n", sum);
}