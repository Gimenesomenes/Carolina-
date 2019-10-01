#include<stdio.h>
#include<math.h>
		
		
		main(){
			
			int d1,m1,a1,d2,m2,a2; 
				
				printf("Digite a primeira data:");
				printf("\nDigite o dia:\n ");
				scanf("%d", &d1);
				
				printf("\nDigite o mes:\n");
				scanf("%d", &m1);
				
				printf("\nDigite o ano:\n");
				scanf("%d", &a1);
				
				printf("\nDigite a seguda data:\n");
				
				printf("\nDigite o dia:\n ");
				scanf("%d", &d2);
				
				printf("\nDigite o mes:\n");
				scanf("%d", &m2);
				
				printf("\nDigite o ano:\n");
				scanf("%d", &a2);
				
				
					if(a1>a2){
						
						printf("\nA maior data eh: %d %d %d", d1,m1,a1);
					}
					
					else if(a2>a1){
						
						printf("\nA maior data eh: %d %d %d", d2,m2,a1);
						
					} 
					
					else if(m1>m2){
						
						printf("\nA maior data eh: %d %d %d", d1,m1,a1);
						
					}
						
					else if(m2>m1){
						
						printf("\nA maior data eh: %d %d %d", d2,m2,a2);
						
					}	
					
					else if(d1>d2){
						
						printf("\nA maior data eh: %d %d %d", d1,m1,a1);
						
					}
			
					else if(d2>d1){
						
						printf("\nA maior data eh: %d %d %d", d2,m2,a2);
					}
			
		}
