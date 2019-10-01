#include<stdio.h>
#include<math.h>


	main(){
		
		
		float num1, num2, num3;
		
			printf("Digite 3 numeros aleatorios:\n");
			scanf("%f", &num1);
			scanf("%f", &num2);
			scanf("%f", &num3);
			
			
				if(num1<num2 && num1<num3 && num2<num3){
					printf("\nA ordem crescente eh:\n \t%.2f \t%.2f \t%.2f", num1,num2,num3);
				}

				else if(num1>num2 && num1<num3 && num2<num3){
					printf("\nA ordem crescente eh:\n \t%.2f \t%.2f \t%.2f", num2, num1,num3);
				}
				else if(num1>num2 && num1>num3 && num2<num3){
					printf("\nA ordem crescente eh:\n \t%.2f \t%.2f \t%.2f", num2,num3,num1);
				}
				else if(num1>num2 && num1>num3 && num2<num1){
					printf("\nA ordem crescente eh:\n \t%.2f \t%.2f \t%.2f", num3, num2, num1);
				}
				else if(num1<num2 && num1>num3 && num2>num3){
					printf("\nA ordem crescente eh:\n \t%.2f \t%.2f \t%.2f", num3, num1, num2);
				}
				}
			
					
			
	
