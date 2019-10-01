#include<stdio.h>
#include<stdlib.h>



	main(){
		
		int Valor, Soma=0;
		
			do{
				
				printf("Digite um valor ou -1 para sair:\n");
				scanf("%d", &Valor);
				
				
				if(Valor != -1)
				Soma = Soma + Valor;
			}while(Valor != -1);
			
			printf("\nA soma eh: %d", Soma);
		
		
	}
