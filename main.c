#include <stdio.h>
#include <stdlib.h>

int main(){
	int **matriz, linha, coluna, i, j; //foi o jeito trocar aux1 e aux2 por i e j, ta dando "assignment from incompatible"..., acho que possa ter haver com o nome

	scanf("%d %d", &linha, &coluna);
    
    matriz = (int **)malloc(linha * sizeof(int *));
	if(matriz == NULL){ //caso a matriz seja vazia
	   printf("[Matriz vazia]\n");
	   return 1;
		
	}
	
	for(i = 0; i < linha; i++){ //for para a alocação da memoria, das colunas de cada linha
	matriz[i]= (int *)malloc(coluna * sizeof(int));
	if(matriz[i] == NULL){
	printf("[Matriz vazia]\n");
	return 1;
     }
	}
	
	for(i = 0; i < linha; i++){ //COMO QUE VAI LER O FOR SE TAVA I - 0? OOOH EU ANTA KKKKKK
		for(j = 0; j < coluna; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("%d ", matriz[i][j]);	
		}
			printf("\n");
	}
	
	for(i = 0; i < linha; i++){ //free para as colunas
		free(matriz[i]); 
	}
	
	free(matriz); // free para as linhas
//é a bem a 5ª vez q to mandando, Deus abençoe que de certo
return 0;
}
