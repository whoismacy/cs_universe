#include <stdio.h>
//Using Euclid's algorithm to find the largest possible square tile 
//Given the Dimension's of a rectangle

void tiling_solver(int length, int width)
{
    while(length > 0)
    {
        if(length < width)
        {
            int temp = width;
            width = length;
            length = temp;
        }

        length = length - width;
    }

    printf("The largest square tile that can be installed to fit the rectangle is a %i X %i tile", width, width);

}

int main()
{
    tiling_solver(15, 800);
    return 0;
}


