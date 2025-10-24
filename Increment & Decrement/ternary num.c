#include<stdio.h>

int main()
{

    int num1, num2, min;

    printf(" Enter the two number : ");
    scanf("%d %d", &num1, & num2);

    //if you want to find the maximum number then you should only changed the sign//

    min = (num1 < num2) ? num1 : num2;

    printf("%d\n", min);
    return 0;

}


