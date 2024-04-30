// with arguments and with return value
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = sum(a, b);
    printf("The sum of Number is %d",c);
    return 0;
}