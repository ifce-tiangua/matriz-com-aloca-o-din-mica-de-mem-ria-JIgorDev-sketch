
	
	
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *matriz, linha, coluna, aux1, aux2;

	scanf("%d %d", &linha, &coluna);
    
    matriz = (int**)malloc(linha * sizeof(int*));
	
	if(matriz == NULL){ //caso a matriz seja vazia
	   printf("[Matriz vazia]\n");
	   return 1;
		
	}
	
	for(aux1 = 0; aux1 < linha; aux1++){ 
	matriz[aux1]= (int *) malloc(coluna * sizeof(int));
	if(matriz[aux1] == NULL)
	return 1;
	}
	
	
	
	for(aux1 = 0; aux1 < linha; aux1++){
		for(aux2 = 0; aux2 < coluna; aux2++){
			printf("%d", matriz[aux1][aux2]);	
		}
	}
	
	for(aux1 = 0; aux1 < linha; aux1++){
		free(matriz[aux1]);
	}
	
	free(matriz);
	
return 0;
}
