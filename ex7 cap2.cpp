#include<stdio.h>
#include<math.h>

	main(){
		
		float sal, salreceber, grat, imp;
		
			printf("\nDigite seu salario:\n");
			scanf("%f", &sal);
			grat=50;
			imp=sal*10/100;
			salreceber= sal+grat-imp;
				printf("O salario a receber eh: %5.2f", salreceber);
				
			
		
	}
	
	
	
