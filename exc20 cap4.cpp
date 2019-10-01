#include<stdio.h>
#include<math.h>
#include<stdlib.h>



	main(){
		
		float Celsius, Fahreint;
		int i; 
		
		
		printf("\nTabela de conversao Celsius >>> Fahreint:\n");
		printf("\n\tCelsius \t Fahreint\n");		
			
			for(Fahreint = 50; Fahreint <=65; Fahreint++){
				
				
					Celsius = 5.0*(Fahreint - 32)/9;				
				
				
					printf("\nCelsius: %.2f \t Fahreint: %.2f", Celsius, Fahreint); 
				
			}
			
			
	}
