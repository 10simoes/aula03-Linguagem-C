#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Posicao{
    int linha;
    int coluna;


};

struct Posicao maiorElemento(int matriz[3][3]);
int buscarElemento(int M[3][3], struct Posicao P);

void main(){
    system("cls");
    int matriz[3][3]; //Espaço em memoria pode ser calculado usando syzeof(matriz)
    // printf("Espaco em memoria da matriz: %d \n", sizeof(matriz));

    for (int L = 0; L < 3;L++){
        for(int C = 0;C < 3;C++){
            printf("Elemento da posicao %d x %d:", L,C);
            scanf("%d", &matriz[L][C]);
        }
    }
    struct Posicao X = maiorElemento(matriz);
    int elemento = buscarElemento (matriz, X);
    printf("%d\n", elemento);
}

//Implementar as funções secundárias...


struct Posicao maiorElemento(int matriz[3][3]){
    struct Posicao X;
    int maiorValor = matriz[0][0];
    X.linha = 0;
    X.coluna = 0;

    for(int L= 0;L < 3;L++){
        for(int C = 0; C < 3; C++){
            if(matriz[L][C] > maiorValor){
                maiorValor = matriz[L][C];
                X.linha = L;
                X.coluna = C; 
            }
        }
    }

    return(X);
}
int buscarElemento(int M[3][3], struct Posicao P){
    int resposta = M[P.linha][P.coluna];
    return(resposta);

}