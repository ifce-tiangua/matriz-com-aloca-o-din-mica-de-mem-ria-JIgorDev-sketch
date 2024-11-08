#include <stdio.h>
#include <stdlib.h>

int main(){
	int *linha, *coluna, aux1, aux2, aux3;

	scanf("%d %d", &linha, &coluna);
	
	aux3 = aux1 * aux2;
	
	int dados_da_matriz[aux3];
	
	scanf("%d", &dados_da_matriz[aux3]);
	
	
	linha = (int *)malloc(aux1 * sizeof(int)); 	
	coluna = (int *)malloc(aux2 * sizeof(int)); 
	
	if(linha == NULL && coluna == NULL){
	   printf("[Matriz vazia]\n");
	   return 1;
		
	}
	
	for(aux1 = 0; aux1 <= linha; aux1++){
		for(aux2 = 0; aux2 <= coluna; aux2++){
			printf("%d", linha[aux1]);
			printf("%d", coluna[aux2]);	
		}
	}
	
	free(linha);
	free(coluna);
	
	
	
	
return 0;
}
