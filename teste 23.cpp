#include<stdio.h> 
#include<stdlib.h> 

main(){ 
float n1,n3; 
int n2,n4; 

printf("Digite um numero real: "); 
scanf("%f",&n1); 

n2 = (int) n1; 
n3 = n1 - n2; 

printf("A parte inteira do numero eh: %d\n",n2); 
printf("A parte fracionaria do numero eh: %0.2f\n",n3); 

if (n3>0.5){ 
n4 = n2+1; 
printf("O arredondamento do numero eh: %d\n",n4); 
} 
else{ 
n4 = n2; 
printf("O arredondamento do numero eh: %d\n",n4); 
} 
}

