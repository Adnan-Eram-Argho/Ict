#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    float a, b, c;
    printf("enter three numbers");
    scanf("\n %f%f%f", &a, &b, &c);
    float sum = a + b + c;
    printf("\n sum %f", sum);
    float gor = sum / 3;
    printf("\n gor %f", gor);

    return 0;
}
