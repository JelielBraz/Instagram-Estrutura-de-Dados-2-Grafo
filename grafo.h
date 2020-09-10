#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no No;
typedef struct grafo Grafo;


Grafo* criarGrafo(int n);
void addAresta(Grafo* grafo, int origem, int dest);
No* criarNo(int v);
void mostrarGrafo(Grafo* grafo);


void populaNoInstagram(Grafo* grafo, int no, int idade, char *nome, char *nome_usuario);
void mostraPerfil(Grafo* grafo, int no);


void maiorNumeroSeguidores(Grafo* grafo);
void menorNumeroSeguidores(Grafo* grafo);

int numeroSeguindo(Grafo* grafo, int n_perfil);
int numeroDeSeguidores(Grafo* grafo, int no);

void pessoasQueSeguemMaisVelhas(Grafo *grafo);
int segueSomenteMaisVelhos(No* no, int idadePerfilObservado, Grafo *grafo);

int getIdateNo(Grafo* grafo, int no);
