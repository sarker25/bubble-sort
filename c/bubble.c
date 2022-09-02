#include <stdio.h>

int main()
{
    int arr[] = {3, 4, 5, 78, 67, 342};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int swap = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
            count++;
        }
        if (swap == 0)
        {
            break;
        }
    }
    printf("after sort\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n%d\n", count);
    return 0;
}