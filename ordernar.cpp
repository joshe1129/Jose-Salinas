#include <stdio.h>
#include <iostream>
using namespace std;

void burbuja(int numeros[]);
int main(){
	int numeros [10];
	printf("Ingrese los 10 Numeros \n");
	for (int i=1; i<=N; i++)  {
		printf("Numero %d: ",i);
	  scanf("%d",&numeros[i]);		
  }  
printf("\n\n ");
  burbuja (numeros);
  printf("los 10 Numeros ordenados son los siguientes:  \n");
	for (int i=1; i<=N; i++)  {
		printf("%d ",numeros[i]);
  }  
}

void burbuja(int numeros[]){
int i,j;
for(i=1;i<N;i++){
  for(j=1;j<N;j++){
    if(numeros[j]>numeros[j+1]){
    int aux = numeros[j+1];
    numeros[j+1] =  numeros[j];
    numeros[j] = aux;
    }
  }
}
