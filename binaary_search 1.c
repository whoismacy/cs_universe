#include<stdio.h>
#include<stdbool.h>
int main()
{   int n, elements[n], i, desired_element;
    printf("Enter the number of elements in your desired array");
    scanf("%d", &n);
    printf("Enter the element you'd like to look for.");
    scanf("%d", &desired_element);
    printf("Enter the desired elements in ascending order");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &elements[n]);
    }
    while (true)
    {
        int low = 0;
        int high = n-1;
        int middle_element = (low + high) / 2;

        if (low > high)
        {
            printf("ERROR!!");
            break;
        }
        else if( elements[middle_element] == desired_element)
        {
            printf("The element was found at position %d", middle_element + 1);
            break;
        }
        else if(elements[middle_element] > desired_element)
        {
            high = middle_element -1;
            low = 0;
        }
        else if(elements[middle_element] < desired_element)
        {
            low = middle_element + 1;
            high = n -1;
        }
    
    }

    return 0;
}