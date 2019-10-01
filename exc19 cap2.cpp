#include<stdio.h>
#include<math.h>


	main(){
		
		float altura_degrau, altura_usu, x_degraus;
		
			printf("Qual eh a altura do degrau?\n");
			scanf("%f", &altura_degrau);
			printf("\nQual eh a altura que deseja subir?\n");
			scanf("%f", &altura_usu);
			
			x_degraus = altura_usu / altura_degrau;
			
				printf("\nA quantidade de degraus que deve subir eh:\n %.2f", x_degraus);
				
			 
	}
