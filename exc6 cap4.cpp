#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
			int cod, n_veiculos, n_acidentes, cont, maior, MENOR, cid_maior, cid_menor;
			
			
			
			
			
			for(cont = 1; cont<= 3; cont++){
				
				
					printf("Digite o codigo da cidade:\n");
					scanf("%d", &cod);
					
					printf("\nDigite o numero de veiculos de passeio:\n");
					scanf("%d", &n_veiculos);
					
					printf("\nDigite o numero de acidentes de transito:\n");
					scanf("%d", &n_acidentes);
			} 
			
				if(cont == 1){
					
					maior = n_acidentes;
					cid_maior = cod;
					MENOR = n_acidentes;
					cid_menor = cod;
				}
				
				
				
				if (n_acidentes > maior){
					
					maior = n_acidentes;
					cid_maior = cod;
				
				}
				
				
				else if (n_acidentes < MENOR){
					
					MENOR = n_acidentes;
					cid_menor = cod;
					
					
				}
		
		
				
				
				printf("\n \n O maior indice de acidentes: %d, esta na cidade: %d", maior, cid_maior);
				
				printf("\n \n O menor %d, esta na cidade: %d", MENOR,cid_menor);
				
				
				
				
}
	
