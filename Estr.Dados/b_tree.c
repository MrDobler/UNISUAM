#include <stdio.h>
#include <stdlib.h>

int *btree;

struct btree{
    int valor;
    int *esq;
    int *dir;
};

int insere(struct btree atual,struct btree novoNum){
    if(&atual == NULL)
        return &novoNum;
    else
        if(&novoNum.valor >= &atual.valor)
            &atual.dir = insere(struct btree &atual.dir, struct btree novoNum);


    return &novoNum;
}

int primeiraRaiz(struct btree novoNum){
    raiz = insere(struct btree raiz, struct btree novoNum);
}
main(){
    struct btree arvoreB;

    int numero;
    int resposta;
    printf("Infome um valor para inserir na árvore: ");
    scanf("%d", &numero);

}
