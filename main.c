#include <stdio.h>
#include <stdlib.h>

int main(){
	int **matriz, linha, coluna, i, j; 
	scanf("%d %d", &linha, &coluna);
    
    if(linha == 0 || coluna == 0){
    	printf("[Matriz vazia]\n");
        return 1;
	}
	
	matriz = (int **)malloc(linha * sizeof(int *));
	
	if(matriz == NULL){
	   printf("[Matriz vazia]\n");
	   return 1;
		
	}
	
	for(i = 0; i < linha; i++){ 
	    matriz[i]= (int *)malloc(coluna * sizeof(int));
	    if(matriz[i] == NULL){
	       printf("[Matriz vazia]\n");
	       return 1;
       }
	}
	
	for(i = 0; i < linha; i++){ 
		for(j = 0; j < coluna; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("%d", matriz[i][j]);	
		}
			printf("\n");
	}
	
	for(i = 0; i < linha; i++){ 
		free(matriz[i]); 
	}
	
	free(matriz); 
	
return 0;
}
