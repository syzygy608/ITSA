#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int n;
    scanf("%d ", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n - 1; ++i)
        for(int j = 0; j < n - 1 - i; ++j)
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    for(int i = 0; i < n; ++i)
        printf("%d\n", arr[i]);
}