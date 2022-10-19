#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float n = 3;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (pow(i, 2));
    }
    printf("%f", sum);
    return 0;
}
