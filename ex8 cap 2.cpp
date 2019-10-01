#include<stdio.h>
#include<math.h>

	main(){
		
		float dep, juros, rend, total;
			printf("\nDigite o valor do deposito e o juros a ser cobrado\n");
			scanf("%f", &dep);
			scanf("%f", &juros);
			rend=dep*(juros/100);
			total= dep+rend;
			printf("O valor total do rendimento eh: %5.2f", total);
			
			
	}
