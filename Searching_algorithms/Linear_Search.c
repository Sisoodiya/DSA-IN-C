// C code to linearly search x in arr[].

#include <stdio.h>

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int x = 12;
    int N = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, N, x);
    (result == -1)
        ? printf("Element not found\n")
        : printf("Element found at index %d\n", result);
    return 0;
}
