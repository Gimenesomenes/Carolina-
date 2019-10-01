#include<stdio.h>
#include<math.h>
#include<stdlib.h>

	
	main(){
		
		double angulo;
		double pi = 3.141592;
		
			for(angulo = 0; angulo <= 180; angulo+= 10){
				
				if(angulo == 90.0){
					
					continue;
				}
				
				printf("tan(%f) = %f\n", angulo, tan(angulo/180*pi));
			}
			
			return 0;
	}
