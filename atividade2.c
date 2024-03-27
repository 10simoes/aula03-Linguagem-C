#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void ConcatenarString(char *Resultado, char *A, char *B);

void main(){
    char A [128];
    char B [128];
    char Resultado[256];

    gets(A);
    gets(B);
    ConcatenarString(Resultado, A, B);
    puts(Resultado);

}

void ConcatenarString(char *Resultado, char *A, char *B){
    int Posicao = 0;

    for(; A[Posicao] != '\0';Posicao++) Resultado[Posicao] = A[Posicao]; 

    for (int i = 0; B[i] != '\0'; i++){
        Resultado[Posicao] = B[i];
        Posicao++;
    }

    Resultado[ Posicao] = '\0';
}
