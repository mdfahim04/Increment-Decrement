#include<stdio.h>

int main()
{

    int a = 5, b, c;
    printf("Enter the initial value :");

    b = ++a;
    printf("\nAfter pre-increment (++a):\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    c = a++;
    printf("\nAfter post-increment (a++):\n");
    printf("Value of a = %d\n", a);
    printf("Value of c = %d\n", c);

    return 0;

}
