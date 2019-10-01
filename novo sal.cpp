#include<stdio.h>
#include<math.h>

main(){
	float sal, perc, aumento, novosal;
		printf("Digite seu salario e o percentual de aumento\n");
		scanf("%f", &sal);
		scanf("%f", &perc);
			aumento= sal * (perc/100);
				printf("O aumento foi: %5.2f", aumento);
		
	
			printf("\nE o novo salario eh: %5.2f\n", novosal=sal+aumento);
			
	

}
