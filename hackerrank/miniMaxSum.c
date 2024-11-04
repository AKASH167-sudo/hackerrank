#include <stdio.h>

void miniMaxSum(int arr_count, int* arr)
{
    long long min = 0;
    long long max = 0;

    for(int i = 0; i < arr_count; i++)
    {
        max += arr[i];
    }

    int max_value = arr[0];

    for(int i = 1; i < arr_count; i++)
    {
        if(arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    min = max - max_value;

    int min_value = arr[0];

    for(int i = 1; i < arr_count; i++)
    {
        if(arr[i] < min_value)
        {   
            min_value = arr[i];
        }
    }

    max = max - min_value;

    printf("%d %d\n", min, max);
}
