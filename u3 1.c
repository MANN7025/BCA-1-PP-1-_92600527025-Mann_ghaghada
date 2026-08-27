#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if (a > b)
        printf("Maximum = %d\n", a);
    else
        printf("Maximum = %d\n", b);

    if (a == b)
        printf("Both are equal\n");
    else
        printf("Both are not equal\n");

    getch();
}