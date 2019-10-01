#include<stdio.h>
#include<stdlib.h>


void Troca(float &a, float &b){
	
	float Aux, x, y;
	
		Aux = x;
		x = y;
		y = Aux;
}

main(){
	
	float x, y, z, Aux;
	
 		printf("Digite os tres numeros:\n");
 		scanf("%f %f %f", &x, &y, &z);
 		
 			printf("\nOs numeros dados: %f %f %f", x,y,z);
 			
 				if((x < y) || (x < z )){
				 
 					
 						if(y < z){
						 
 						
 							Troca(x,y);
 						}
 						
 						else{
 							Troca(x,z);
						 }
				
				}
				
				
				if(y > z){
					
					Troca(y,z);
					
				}
					
				printf("Numeros ordenados: %f %f %f\n", x, y,z);	
					
						
}
	
	
	
