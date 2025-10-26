#include <stdio.h>

int main()
{
int a, b;

printf("Podaj dwie liczby:\n");
scanf("%d", &a);
scanf("%d", &b);

printf("Suma = %d\n", a + b);
printf("Roznica = %d\n", a - b);
printf("Iloczyn = %d\n", a * b);

if (b != 0) {
printf("Iloraz = %d\n", a / b);
printf("Reszta z dzielenia = %d\n", a % b);
} else {
printf("Nie mozna dzielic przez zero!\n");
}

return 0;
}zad2