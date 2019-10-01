#include<stdio.h>


int main(void){
	
	float CalcularAreaRetang(float base, float altura);
	
	float area = CalcularAreaRetang(10.0, 20.0);
	
	printf("A area eh: %f", area);
	
	return 0;
}


float CalcularAreaRetang(float base, float altura){
	
		float area = base * altura;
		
	
	return area;
}
