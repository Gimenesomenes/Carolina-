#include<stdio.h>
#include<math.h>

    main(){

        float sal,salreceber, salgrat, salimp;
            printf("\nDigite o salário\n");
            scanf("%f", &sal);
                salgrat=sal*(5/100);
                salimp=sal*(7/100);
            printf("\nsalário gratificado: %f\n", salgrat);
            printf("\nsalário com imposto: %f\n",salimp);
                scanf("%f", &salgrat);
                scanf("%f", &salimp);
                    salreceber=sal+salgrat-salimp;
                printf("O salário a receber é: %f", salreceber);



        }
