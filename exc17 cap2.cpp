#include<stdio.h>
#include<math.h>

	main(){
		
		float sal, cheque_1, cheque_2, cpmf_1, cpmf_2, saldo;
		
			printf("\nDigite o seu salario:\n");
				scanf("%f", &sal);
			printf("\nDigite o valor do cheque 1:\n");
				scanf("%f", cheque_1);
			printf("\nDigite o valor do cheque 2:\n");
				scanf("%f", cheque_2);
			
			cpmf_1= cheque_1*(0.38/100);
			cpmf_2= cheque_2*(0.38/100);
			
			saldo= sal-cheque_1-cheque_2-cpmf_1-cpmf_2;
			
			printf("\nO saldo final eh:\n %.2f", saldo);
			
		
	}
