#include <stdio.h>
#include <math.h>
int binary_search(int arrays[], int start, int element, int end);
int main()
{
    int arrays[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start = 0;
    int element = 8;
    int end = 9;
    int a = binary_search(arrays, start, element, end);
    printf("%d\n", a);
    return 0;
}
int binary_search(int arrays[], int start, int element, int end)
{
    // zero-indexed
    // purpose of the function is to return the value of the given element if it is in the array.
    if (start  > end )
    {
        return -1;
    }

    int mid = start + (start - end) / 2;

    if (arrays[mid] == element)
    {
        return mid;
    }
    else if(arrays[mid] > element)
    {
        return binary_search(arrays, start, element, end - 1);
    }
    else
    {
        return binary_search(arrays, start + 1 , element, end);
    }
}