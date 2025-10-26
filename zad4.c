#include <stdio.h>

int main() {
int a, b, c;

printf("Podaj trzy liczby:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if (a >= b && a >= c)
printf("Najwieksza liczba to %d\n", a);
else if (b >= a && b >= c)
printf("Najwieksza liczba to %d\n", b);
else
printf("Najwieksza liczba to %d\n", c);

return 0;
}