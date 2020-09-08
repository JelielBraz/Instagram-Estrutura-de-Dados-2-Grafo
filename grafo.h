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


int numeroSeguidores(Grafo* grafo, int no);
