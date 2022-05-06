#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main()
{
    int x;
    arvAVL *raiz;

    raiz = cria_arvAVL();



    x = insere_arvAVL(raiz, 150);
    x = remove_arvAVL(raiz, 150);


    if(vazia_arvAVL(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A arvore possui elementos.");
    }
    printf("\n");

    x = altura_arvAVL(raiz);
    printf("Altura da arvore : %d\n", x);

    x = totalNO_arvAVL(raiz);
    printf("Total de nos na arvore : %d\n", x);

    printf("Consulta em pre Ordem : \n");
    preOrdem_arvAVL(raiz);
    printf("Consulta em Ordem : \n");
    emOrdem_arvAVL(raiz);
    printf("Consulta em pos Ordem : \n");
    posOrdem_arvAVL(raiz);

    printf("\nBusca na Arvore Binaria: \n");
    if(consulta_arvAVL(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento nao encontrado...");
    }

}
