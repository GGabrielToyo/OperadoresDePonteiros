#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Entidade.h"

void imprimir_lista (int *ptr_a, int *ptr_b, int **ptr_p, int val)
{
    int i;

    printf("\t\t\tFUNÇÃO IMPRIMIR_LISTA()\n");
    printf("\t\t\t-----------------------\n");

    /* a) */    printf("\ta) ptr_p[0][2]: %d\n", ptr_p[0][2]);
    /* b) */    printf("\tb) ptr_a[4]: %d [ERRO] Possível erro de execução por invasão de memória\n", ptr_a[4]);
    /* c) */    printf("\tc) **ptr_p + 3: %d\n", **ptr_p + 3);
    /* d) */    printf("\td) *(ptr_b + 1) + val: %d\n", *(ptr_b + 1) + val);
    /* e) */    printf("\te) ptr_p[0]: %x\n", ptr_p[0]);
    /* f) */    printf("\tf) ++(*ptr_b): %d\n", ++(*ptr_b));
    /* g) */    printf("\tg) *(ptr_p - 1): %x [ERRO] Possível erro de execução por invasão de memória\n", *(ptr_p - 1));
    /* h) */    printf("\th) *(ptr_b + 1) * 2: %d\n", *(ptr_b + 1) * 2);
    /* i) */    printf("\ti) &(*ptr_p): %x\n", &(*ptr_p));
    /* j) */    printf("\tj) *(&ptr_b[1] - 2) + 3: %d\n",  *(&ptr_b[1] - 2) + 3);
    /* k) */    printf("\tk) ptr_b[1] == *(ptr_a + 1): %d\n", ( ptr_b[1] == *(ptr_a + 1) ));
    /* l) */    printf("\tl) *ptr_p - (*ptr_b - 6): %x\n", *ptr_p - (*ptr_b - 6));
    /* m)*/     printf("\tm) val * *ptr_b: %d\n", val * *ptr_b);
    /* n) */    printf("\tn) ptr_b + ptr_a[1] - 5: %x\n", ptr_b + ptr_a[1] - 5);
    /* o) */    printf("\to) **(&ptr_b + 1): %d [ERRO] Possível erro de execução por invasão de memória\n", **(&ptr_b + 1));
    printf("\n");

    return 0;
}

void restaura_valores (int *ptr_a, int *ptr_b, int **ptr_p, int val)
{
    int i;

    printf("\t\t\tFUNÇÃO RESTAURA_VALORES()\n");
    printf("\t\t\t-------------------------\n");

    printf("\t\t\t\t***DADOS***\n");
    for (i = 0; i < 4; i++)
    {
        ptr_a[i] = 2*i + 1;
        printf("\tptr_a[%i] = %d\n ", i, ptr_a[i]);
    }
    printf("\n");

    val = ptr_b[1];

    printf("\tprt_a = %x\n", ptr_a);
    printf("\tprt_b = %x\n", ptr_b);
    printf("\tprt_p = %x\n", ptr_p);
    printf("\n\n");

    return 0;
}

void imprimir_segunda_lista (int *ptr_a, int *ptr_b, int **ptr_p, int val)
{
    int i;

    printf("\t\t\tFUNÇÃO IMPRIMIR_SEGUNDA_LISTA()\n");
    printf("\t\t\t-------------------------------\n");

    /* a) */    printf("\ta) ptr_b[2]: %d\n", ptr_b[2]);
    /* b) */    printf("\tb) *(&ptr_a[3] + 1): %d\n", *(&ptr_a[3] + 1));
    /* c) */    printf("\tc) *ptr_b + 3: %d\n", *ptr_b + 3);
    /* d) */    printf("\td) ptr_b[1] + val : %d\n", ptr_b[1] + val);
    /* e) */    printf("\te) *ptr_p: %x\n", *ptr_p);
    /* f) */    printf("\tf) ++(**ptr_p) %d\n", ++(**ptr_p));
    /* g) */    printf("\tg) *(&ptr_b - 1): %x\n", *(&ptr_b - 1));
    /* h) */    printf("\th) ptr_a[2] * 2: %d\n", ptr_a[2] * 2);
    /* i) */    printf("\ti) &(ptr_b): %x\n", &ptr_b);
    /* j) */    printf("\tj) *(ptr_b - 1) + 3: %d\n", *(ptr_b - 1) + 3);
    /* k) */    printf("\tk) *(ptr_b + 1) == ptr_a[1]: %d\n", *(ptr_b + 1) == ptr_a[1] );
    /* l) */    printf("\tl) ptr_p[0] -  (ptr_b[0] - 6): %x\n",ptr_p[0] -  (ptr_b[0] - 6));
    /* m)*/     printf("\tm) val * ptr_b[0]: %d\n", val * ptr_b[0]);
    /* n) */    printf("\tn) ptr_b + ptr_b[0] - 5: %x\n", ptr_b + ptr_b[0] - 5);
    /* o) */    printf("\to) *(ptr_p[1]): %d\n", *(ptr_p[1]));
    printf("\n");

    return 0;
}


