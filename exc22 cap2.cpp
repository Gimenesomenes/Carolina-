#include<stdio.h>
#include<math.h>

	main(){
		
		float vlr_sal, qtd_kw, vlr_kw, vlr_pago, desc, vlr_desc; 
		
			printf("Coloque o valor do salario minimo:\n");
			scanf("%f", &vlr_sal);
			printf("\nColoque a quantidade de quilowatt consumida:\n");
			scanf("%f", &qtd_kw);
			
			vlr_kw = vlr_sal/5;
			vlr_pago = vlr_kw * qtd_kw;
			desc = vlr_pago * 15/100;
			vlr_desc = vlr_pago - desc; 
			
			
			printf("\nO valor de cada quilowatt:\n %.2f", vlr_kw );
			printf("\nO valor a ser pago pela residencia:\n %.2f", vlr_pago);
			printf("\nO valor a ser pago com desconto:\n %.2f", vlr_desc);
			
				
	}
