#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while ( u > 0)
    {
        if ( u < v)
        {
            temp = u;
            u = v;
            v = temp;
        }

        u = u - v;
    }

    return v;

}

int main()
{
    int x = 78;
    int y = 190;

    printf("The GCD of %i %i is %i", x, y, gcd(x, y));

    return 0;
}
