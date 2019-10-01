#include<stdio.h>
#include<stdlib.h>

	main(){
		
		int num1, num2, qtde_par, qtde, soma,i;
		float media_num;
		
		
		
			printf("Digite dois numeros:\n");
			scanf("%d %d", &num1, &num2);
			
			
			
			qtde_par = 0;
			soma = 0;
			qtde = 0;
			
			
				if(num1 < num2){
					
					for(i = num1; i <= num2; i++){
						
							soma = soma + i;
							qtde = qtde + 1;
							
					}
					
					media_num = soma / qtde;
					printf("\nA media dos numeros crescentes eh: %.2f", media_num );
				}
				
				if(num1 > num2){
					
					for(i = num2; i <= num1; i++){
						
						if( i % 2 == 0){
							
							qtde_par = qtde_par + 1;
							
						}
						
						
					}
					
					printf("\nA quantidade de numeros par na sequencia eh: %d", qtde_par);
				}
				
				
				if(num1 == num2){
					
					printf("\nOs numeros sao iguais, digite numeros diferentes!!\n");
				}
	}
