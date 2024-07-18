#include "../lib/Ponto/Ponto.c"

int main() {
    Ponto *p, *q;
    float d, x,y;
    p = novo_ponto(5,10);
    q = novo_ponto(20,-3);
    acessar_coords(p,&x,&y);
    printf("coords Ponto p: X = %f, Y= %f\n", x,y);
    printf("distancia entre p e q vale: %f \n", distancia(p,q));

    return 0;
}