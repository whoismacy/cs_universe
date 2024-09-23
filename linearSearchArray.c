#include <stdio.h>
#include <stdbool.h>
int main(){
    int num[];
    int n, element, i;
    bool flag = false;

    printf("Enter the amount of numbers you would like to have: \n");
    scanf("%d", &n);
    printf("Key in the elements:\n");
    for (i=0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Key in the element you would love to search for.\n");
    scanf("%d", &element);
    for(i=0; i < n ; i++)
    {
        if (i == element)
        {
            flag = true;
            break;
        }
        i ++;
    }
    if (flag == true)
    {
        printf("The number is present.\n");
    }
    else
    {
        printf("The number is not present in the array.\n");
    }

    return 0;
}
