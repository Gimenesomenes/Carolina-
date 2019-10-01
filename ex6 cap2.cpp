#include<stdio.h>
#include<math.h>

    main(){

        float sal,salreceber, salgrat, salimp;
            printf("\nDigite o salario:\n");
            scanf("%f", &sal);
                salgrat=sal*5/100;
                salimp=sal*7/100;
                salreceber=sal+salgrat-salimp;
                
					printf("O salario a receber é: %5.2f", salreceber);



        }
