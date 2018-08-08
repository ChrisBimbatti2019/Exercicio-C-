#include<stdio.h>
#include<stdlib.h>
int main (void)

{
int vetor[5];
int vetori[10];
int matriz[4][3];
int contum;
int contdois;
int maior;
int menor;
int matrizresultante[10][10];
menor = 9999999999;
maior =0;
int soma;
int conttres;
int multiplicacao;

for(contum=1; contum<=2; contum++)
{
printf("digite o valor dos vetores 1 \n");
scanf ("%d", &vetor[contum]);
}

for(contdois=1; contdois<=2; contdois++)
{
printf("digite o valor dos vetor 2 \n");
scanf ("%d", &vetori[contdois]);
}

for (contum=1;contum<=2;contum++){
        if ( vetor[contum] > maior)
            {
        maior = vetor[contum];
             }
}

printf ("O MAIOR ELEMENTO DO VETOR A %d\n",maior);
system("pause");



for (contum=1;contum<=2;contum++){
        if ( vetori[contum] < menor)
            {
        menor = vetori[contum];

             }
}

printf ("O MENOR ELEMENTO DO VETOR  B  %d\n",menor);
system("pause");



multiplicacao = maior*menor;
printf ("O valor multiplicado e %d\n", multiplicacao);
system("pause");








for(contum=1; contum<=4; contum++)
{ soma=0;
    for(contdois=1; contdois<=3; contdois++){
    printf("digite o valor da matriz \n" );
    scanf ("%d", &matriz[contum][contdois]);
    matrizresultante[contum][contdois]=matriz[contum][contdois]+multiplicacao;
    printf ("O valor da matriz resultante e %i \n", matrizresultante[contum][contdois]);

    if(matrizresultante[contum][contdois]%2==0)
        {
        soma= matrizresultante[contum][contdois]+soma;

    }
}
printf("\nA soma da porra toda dos par e %i", soma);
}

for(contdois=1; contdois<=3; contdois++){conttres=0;
    for(contum=1;contum<=4;contum++){
     if (matrizresultante[contum][contdois]>=1 && matrizresultante[contum][contdois]<=5) {
        conttres++;
     }


    }printf("\n\nA QUANTIDADES DE ELEMENTOS ENTRE 1-5 NA COLUNA %d  E: %d",contdois, conttres);
}






}