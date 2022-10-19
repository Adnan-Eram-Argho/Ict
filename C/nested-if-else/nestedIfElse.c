#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float a, b, c;
    printf("enter 3 number");
    scanf("%f%F%F", &a, &b, &c);
    if (a > b)
    {
        if (c > a)
        {
            printf("c %f is large", c);
        }
        else
        {
            printf("a%fis large", a);
        }
    }
    else
    {
        if (b > c)
        {
            printf("b lis large");
        }
        else
        {
            printf("c is  large");
        }
    }
    return 0;
}
