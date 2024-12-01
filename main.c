#include <stdio.h>
#include "Funzioni.h"

int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("La somma dei numeri pari tra %d e %d e': %d", num1, num2, SommaPariConpresi(num1, num2));
    return 0;
}
