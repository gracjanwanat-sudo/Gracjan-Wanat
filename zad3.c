#include <stdio.h>


int main() {

    int a, b;


    printf("Podaj dwie liczby:\n");

    scanf("%d", &a);

    scanf("%d", &b);


    if (a > b)

        printf("Wieksza liczba to %d\n", a);

    else if (b > a)

        printf("Wieksza liczba to %d\n", b);

    else

        printf("Liczby sa rowne\n");


    return 0;
}