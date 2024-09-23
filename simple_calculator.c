#include <stdio.h>

int main()
{
    int a, b;
    char choice;

    printf("______________________________________________________\n\n");
    printf("******* Welcome to the simple C calculator ***********\n");
    printf("----------- Operations Include; * + - / --------------\n\n");
    printf("______________________________________________________\n");

    printf("Input the arithmetic number followed by a single space and lastly the operation you would like to accomplish.\n");

    while(scanf("%i %i %c",&a, &b, &choice) != EOF)
    {
        switch(choice)
        {
            case '+':
                printf("Result == %i\n", a + b);
                break;
            case '-':
                printf("Result == %i\n", a - b);
                break;
            case '*':
                printf("Reuslt == %i\n", a * b);
                break;
            case '/':
                if( b == 0)
                {
                    printf("Cannot divide a number by zero.\n");
                }
                else
                {
                    return a / b;
                }
                break;
           default:
                printf("Kindly rerun the program while following the right instructions\n");
                break;

        }

        printf("Input the arithmetic number followed by a single space and lastly the operation you would like to accomplish\n");
        printf("Use CTRL + D to escape".);

       
    }

    return 0;

}


