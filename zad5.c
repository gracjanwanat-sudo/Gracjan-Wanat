#include <stdio.h>

int main() {
char znak;
int kod;

printf("Podaj znak lub kod ASCII:\n");

if (scanf("%d", &kod) == 1) {
znak = kod;
} else {
scanf("%c", &znak);
znak = getchar();
}

if ((znak >= 'A' && znak <= 'Z') || (znak >= 'a' && znak <= 'z'))
printf("'%c' to litera alfabetu.\n", znak);
else
printf("'%c' nie jest litera alfabetu.\n", znak);

return 0;
}