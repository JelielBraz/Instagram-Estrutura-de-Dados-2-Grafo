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
    get_no = get_no->prox;
    int idade = get_no->idade;
    printf("O nome é: %s\n A idade é de %d. \n e o nome de usuário é %s\n\n", get_no->nome, idade, get_no->nome_usuario);
}

int numeroSeguindo(Grafo* grafo, int n_perfil) {
    int populacao = grafo->num_vertices;
    int no;
    int numero_seguindo =0;

    for (no=0; no<populacao; no++) {
        if (no == n_perfil) {
            continue;
        }

        No* get_no = &grafo->vetor_lista_adj[no];
        if (get_no->prox != NULL) {
            do {
                get_no = get_no->prox;
                if (get_no->vertice == n_perfil) {
                    numero_seguindo++;
                }

            }while (get_no->prox != NULL);
        }
    }

    return numero_seguindo;
}

void maiorNumeroSeguidores(Grafo* grafo){
    int no_popular = -1; //unset
    int populacao = grafo->num_vertices;
    int no;
    int qtd_seguidores_popular;

    for (no=0; no<populacao; no++) {
        No* get_no = &grafo->vetor_lista_adj[no];
        int seguidores = numeroSeguindo(grafo, get_no->vertice);

        if (no_popular == -1) {
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

void menorNumeroSeguidores(Grafo* grafo){
    int no_impopular = -1; //unset
    int populacao = grafo->num_vertices;
    int no;
    int qtd_seguidores_impopular;

    for (no=0; no<populacao; no++) {
        No *get_no = &grafo->vetor_lista_adj[no];
        int seguidores = numeroSeguindo(grafo, get_no->vertice);
        if (no_impopular == -1) {
            no_impopular = no;
            qtd_seguidores_impopular = seguidores;
        } else if (seguidores < qtd_seguidores_impopular) {
            no_impopular = no;
            qtd_seguidores_impopular = seguidores;
        }
    }
    printf("\n O Perfil mais impopular tem %d seguidores\n", qtd_seguidores_impopular);
    mostraPerfil(grafo, no_impopular);
    printf("\n \n \n");
}


int numeroDeSeguidores(Grafo *grafo, int no){
    int numeroDeSegidores = 0;
    No* get_no = &grafo->vetor_lista_adj[no];
    while (get_no->prox != NULL) {
        numeroDeSegidores++;
        get_no = get_no->prox;
    }
    return numeroDeSegidores;
}

int segueSomenteMaisVelhos(No* get_no, int idadePerfilObservado,Grafo *grafo) {
    do {
        get_no = get_no->prox;
        int idade_no = getIdateNo(grafo, get_no->vertice);

        if (idade_no <= idadePerfilObservado) {
            return 0; //tem idade menor ou igual na lista de seguidores
        }
    } while (get_no->prox != NULL);

    return 1; // segue somente mais velhos pois em nenhum momento foi retornado o false
}

void pessoasQueSeguemMaisVelhas(Grafo *grafo) {
    int no;
    int populacao = grafo->num_vertices;
    int qtd_pessoas_seguem_mais_velhas = 0;
    for (no=0; no<populacao; no++) {
        No *get_no = &grafo->vetor_lista_adj[no];
        // inicio das info dos seguidores;
        if (get_no->prox != NULL) {
            if (segueSomenteMaisVelhos(get_no, get_no->idade, grafo) == 1) {
                qtd_pessoas_seguem_mais_velhas++;
                printf("O usuario %s, segue somente pessoas mais velhas\n", get_no->nome);
            }
        }
    }

    printf("A Quantintida de pessoas que seguem pessoas mais velhas é: %d", qtd_pessoas_seguem_mais_velhas);
}

int getIdateNo(Grafo* grafo, int no) {
    No *get_no = &grafo->vetor_lista_adj[no];
    return get_no->idade;
}
