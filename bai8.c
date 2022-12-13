#include <stdio.h>

int timmax(int x, int y)
{
    if (x >= y)

        return x;

    else
        return y;
}

int main(int argc, char const *argv[])
{
    int a = 5, b = 20;

    int max = timmax(a,b);
    printf("So lon nhat trong 2 so la: %d", max);
    
    return 0;
}
