#include "grafo.h"

int main(){
    Grafo* dir_grafo = criarGrafo(9);
    // popular

    addAresta(dir_grafo, 0,1);
    addAresta(dir_grafo, 0,4);
    addAresta(dir_grafo, 1,2);
    addAresta(dir_grafo, 1,3);
    addAresta(dir_grafo, 3,2);
    addAresta(dir_grafo, 3,4);
    addAresta(dir_grafo, 3,5);
    addAresta(dir_grafo, 3,6);
    addAresta(dir_grafo, 4,3);
    addAresta(dir_grafo, 4,5);
    addAresta(dir_grafo, 4,6);
    addAresta(dir_grafo, 5,7);
    addAresta(dir_grafo, 5,8);
    addAresta(dir_grafo, 6,8);
    addAresta(dir_grafo, 7,5);
    addAresta(dir_grafo, 7,8);
//
//    //Preencher as informações;
    populaNoInstagram(dir_grafo, 0, 23, "Ana", "ana_23");
    populaNoInstagram(dir_grafo, 1, 25, "Joao", "joao_25");
    populaNoInstagram(dir_grafo, 2, 20, "Caio", "caio_20");
    populaNoInstagram(dir_grafo, 3, 20, "Pedro", "pedro_20");
    populaNoInstagram(dir_grafo, 4, 30, "Jane", "jane_30");
    populaNoInstagram(dir_grafo, 5, 19, "Marcos", "marcos_19");
    populaNoInstagram(dir_grafo, 6, 23, "Bruna", "bruna_23");
    populaNoInstagram(dir_grafo, 7, 20, "Felipe", "felipe_20");
    populaNoInstagram(dir_grafo, 8, 35, "Renata", "renata_35");

    mostraPerfil(dir_grafo, 3);

    mostrarGrafo(dir_grafo);
    maiorNumeroSeguidores(dir_grafo);


    return 0;
}