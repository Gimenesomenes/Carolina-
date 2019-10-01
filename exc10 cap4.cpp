#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		int cont, num1, num2, res;
		
			printf("Digite os dois primeiros numeros da sequencia Fibonacci:\n");
			scanf("%d %d", &num1, &num2); 
				printf("%d", num1);
				printf("%d", num2);
			
				for(cont = 3; cont < 20; cont++ ){
					
						res = num1 + num2; 
							
							printf("%d", res);
							
							num1 = num2;
							num2 = res;
				}
		
	}
