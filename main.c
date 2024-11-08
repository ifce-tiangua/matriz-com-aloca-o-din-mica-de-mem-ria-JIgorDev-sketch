#include <stdio.h>
#include <stdlib.h>

int main(){
	int *matriz, linha, coluna, aux1, aux2;

	scanf("%d %d", &linha, &coluna);
    
    matriz = (int**)malloc(linha * sizeof(int*));
	
	if(matriz == NULL){
	   printf("[Matriz vazia]\n");
	   return 1;
		
	}
	
	for(aux1 = 0; aux1 <= linha; aux1++){
		for(aux2 = 0; aux2 <= coluna; aux2++){
			printf("%d", matriz[aux1][aux2]);	
		}
	}
	
	free(matriz);
	
	
	
return 0;
}
