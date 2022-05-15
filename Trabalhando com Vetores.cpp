#include<stdio.h>
#include<stdlib.h>
#define TAM 15

main(){
float Vet1[TAM],Vet2[TAM],VetP[TAM];
int x;
printf("\nDigite os valores para o Primeiro Vetor:\n");
for(x=0;x<TAM;x++){
printf("\n%i Valor: ",x+1);
scanf("%f",&Vet1[x]);
}
printf("\nDigite os valores para o Primeiro Vetor:\n");
for(x=0;x<TAM;x++){
printf("\n%i Valor: ",x+1);

Algoritmos e Programação II

scanf("%f",&Vet2[x]);
}
for(x=0;x<TAM;x++){
VetP[x]=Vet1[x]*Vet2[x];
}
printf("\nPrimeiro Vetor:\n");
for(x=0;x<TAM;x++){
printf("%.1f\t",Vet1[x]);
}
printf("\nSegundo Vetor:\n");
for(x=0;x<TAM;x++){printf("%.1f\t",Vet2[x]);}
printf("\nVetor Produto:\n");
for(x=0;x<TAM;x++){
printf("%.1f\t",VetP[x]);
}
system("pause");
}
