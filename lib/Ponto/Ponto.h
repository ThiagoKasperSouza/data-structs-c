typedef struct ponto Ponto;

// cria novo ponto
Ponto* novo_ponto(float x, float y);

// libera ponto
void excluir_ponto(Ponto* p); 

// acessa valores de um ponto
void acessar_coords(Ponto* p, float *x, float *y);

// atrubui novas coords a um ponto
void atribuir_coords(Ponto*, float x, float y);

// calcula distancia entre dois pontos
float distancia(Ponto* p1, Ponto* p2);