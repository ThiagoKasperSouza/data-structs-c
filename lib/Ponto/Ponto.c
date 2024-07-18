#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./Ponto.h"

struct ponto {
    float x;
    float y;
};


Ponto* novo_ponto(float x, float y) {
    /*
        Cria ponteiro alocando nele o tamanho da struct ponto definida no .h
        se estiver com espaço, atribuir valores atributados ao ponteiro
    */
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;

}

// libera ponto
void excluir_ponto(Ponto* p) {
    free(p);
}

// recupera, por referência valores de um ponto
void acessar_coords(Ponto* p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}

// atrubui novas coords a um ponto
void atribuir_coords(Ponto* p, float x, float y) {
    p->x = x;
    p->y = y;
}

// calcula distancia entre dois pontos
float distancia(Ponto* p1, Ponto* p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt((dx*dx) - (dy*dy));
}