#include<stdio.h>
#include<math.h>

	main(){
		
		float p_fab, perc_dist, perc_imp, lucro_dist, valor_imp, valor_final; 
		
			printf("Digite o valor de fabrica do veiculo:\n");
				scanf("%f", &p_fab);
				
			
			
			printf("\nDigite o percentual de lucro:\n");
				scanf("%f", &perc_dist);
					
			
			
			printf("\nDigite o percentual de impostos:\n");
				scanf("%f", &perc_imp);
				
					lucro_dist= p_fab*(perc_dist/100);
					valor_imp= p_fab*(perc_imp/100);
					valor_final=p_fab+valor_imp+lucro_dist;
					
					printf("\nO lucro do distribuidor eh: %.2f\n", lucro_dist);
					printf("\nO valor correspondente aos impostos: %.2f\n", valor_imp);
					printf("\nO preco final do veiculo: %.2f\n", valor_final);
					
				}
				
				
				
	
