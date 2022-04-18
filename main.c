#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Entidade.h"

int main()
{
    setlocale(LC_ALL,"");
    int i;
    int *ptr_b;
    int *ptr_a;
    int **ptr_p;
    int val = 55;


    ptr_a = (int*) malloc(4 * sizeof(int));
    ptr_b = &ptr_a[1];
    ptr_p = &ptr_b;

    printf("\t\t\t\t\t*****OPERADORES DE PONTEIROS EM C*****\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
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

    printf("\n");

    imprimir_lista(ptr_a, ptr_b, ptr_p, val);
    restaura_valores(ptr_a, ptr_b, ptr_p, val);
    imprimir_segunda_lista(ptr_a, ptr_b, ptr_p, val);

    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}
