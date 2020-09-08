#include "grafo.h"


struct no{
    int vertice;
    char *nome;
    int idade;
    char *nome_usuario;
    struct no *prox;
};

struct grafo{
    int num_vertices;
    No *vetor_lista_adj;
};


void addAresta(Grafo* grafo, int origem, int dest){
    No* novoNo = criarNo(dest);
    if(grafo->vetor_lista_adj[origem].vertice == NULL){
        grafo->vetor_lista_adj[origem].vertice = origem;
    }
    novoNo->prox = grafo->vetor_lista_adj[origem].prox;
    grafo->vetor_lista_adj[origem].prox = novoNo;
}
No* criarNo(int v){
    No* novoNo = (No*) malloc(sizeof(No));
    if(!novoNo){
        printf("ERROR NO \n");
        exit(EXIT_FAILURE);
    }
    novoNo->vertice = v;
    novoNo->prox = NULL;
    return novoNo;
}

void mostrarGrafo(Grafo* grafo){
    for(int i=0; i<grafo->num_vertices; i++){
        No* no_aux = &grafo->vetor_lista_adj[i];
        printf("\n%d\t",i);
        no_aux = no_aux->prox;
        while(no_aux != NULL){
            printf("-> %d ", no_aux->vertice);
            no_aux = no_aux->prox;
        }
    }
    printf("\n");
}

Grafo* criarGrafo(int n){
    Grafo* grafo = (Grafo*) malloc(sizeof(Grafo*));

    if(!grafo){
        printf("ERROR GRAFO \n");
        exit(EXIT_FAILURE);
    }

    grafo->num_vertices = n;
    grafo->vetor_lista_adj = (No*) malloc(n * sizeof(No));

    if(!grafo->vetor_lista_adj){
        printf("ERROR LISTA ADJ \n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < n; i++){
        grafo->vetor_lista_adj[i].vertice = NULL;
        grafo->vetor_lista_adj[i].prox = NULL;
    }

    return grafo;
}


void populaNoInstagram(Grafo* grafo, int no, int idade, char *nome,char *nome_usuario) {
    No* no_edit = &grafo->vetor_lista_adj[no];
    no_edit->idade = idade;
    no_edit->nome = nome;
    no_edit->nome_usuario = nome_usuario;
}

void mostraPerfil(Grafo* grafo, int no) {
    No* get_no = &grafo->vetor_lista_adj[no];
    int idade = get_no->idade;
    printf("O nome é: %s\n A idade é de %d. \n e o nome de usuário é %s\n\n", get_no->nome, idade, get_no->nome_usuario);
    printf("Jeliel brazzz %d", get_no->vertice);
}

int numeroSeguindo(Grafo* grafo, int n_perfil) {
    int populacao = grafo->num_vertices;
    int no;
    int numero_seguindo =0;

    for (no=0; no<populacao; no++) {
        No* get_no = &grafo->vetor_lista_adj[no];
        while (get_no->prox != NULL) {
            if (get_no->vertice == n_perfil) {
                numero_seguindo++;
            }
            get_no = get_no->prox;
        }
    }

    return numero_seguindo;
}

void maiorNumeroSeguidores(Grafo* grafo){
    int no_popular = NULL;
    int populacao = grafo->num_vertices;
    int no;
    int qtd_seguidores_popular;

    for (no=0; no<populacao; no++) {
        No* get_no = &grafo->vetor_lista_adj[no];
        int seguidores = numeroSeguindo(grafo, get_no->vertice);
        if (no_popular == NULL) {
            no_popular = no;
            qtd_seguidores_popular = seguidores;
        } else if (seguidores > qtd_seguidores_popular) {
            no_popular = no;
            qtd_seguidores_popular = seguidores;
        }
    }
    printf("\n O Perfil mais popular tem %d seguidores\n", qtd_seguidores_popular);
    mostraPerfil(grafo, no_popular);
    printf("\n \n \n");



}
//
//void menorNumeroSeguidores(Grafo* grafo){
//
//}

int numeroSeguidores(Grafo* grafo, int no) {
    int numeroDeSegidores = 0;
    No* get_no = &grafo->vetor_lista_adj[no];
    while (get_no->prox != NULL) {
        numeroDeSegidores++;
        get_no = get_no->prox;
    }
    return numeroDeSegidores;
}