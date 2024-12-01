//
// Created by anass on 01/12/2024.
//

#include "Funzioni.h"

int SommaPariConpresi(int a, int b) {
    int somma = 0;

    if (a > b) {
        int ValoreDi_a = a;
        int ValoreDi_b = b;
        a = ValoreDi_b;
        b = ValoreDi_a;
    }

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            somma += i;
        }
    }
    return somma;
}
