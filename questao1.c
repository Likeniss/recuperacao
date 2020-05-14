#include <stdio.h>
#include <math.h>
/*Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

void Valor_Met (float met){
float dec, cent, mil;
        dec=met/0.1;
        cent=met/0.01;
        mil=met/0.001;
        printf ("\n Valor em metros :%.1f\n Valor em decimetros: %.1f\n Valor em centimetros: %.1f\n Valor em milimetros: %.1f\n", met, dec, cent,mil);
  }

/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/

void Tabuada(){
    int i,tab;
    for(i=1;i<=9;i++){
        for(tab=0;tab<=10;tab++){
            printf("\n%d x %d = %d\n", i, tab, i*tab);
            if(tab==10){printf("\n======================\n");}
        }
    }
}

/* Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal. */

void Hex_Oct (int dec){
    printf("O numero decimal %d\n Se torna em hexadecimal: %x \n E octadecimal: %o", dec, dec, dec);
}

void Quat_A (double FD ){
    //Ca=(FD-32.0) * (5.0/9.0);
    printf("\n O valor de %lf Fahrenheit em graus Celsius e: %lf",FD,(FD-32.0) * (5.0/9.0));

}
void Quat_B (int FI){
    printf("\n O valor de %d Fahrenheit em graus Celsius e: %d",FI,(FI-32)*(5/9));
}

void Brincando(float a, float b){
    printf("\na) A soma dos numeros;%.f\n",a+b);
    printf("\nb) O produto do primeiro numero pelo quadrado do segundo;%.f\n",a*(b*b));
    printf("\nc) O quadrado do primeiro numero;%.f\n",a*a);
    printf("\nd) A raiz quadrada da soma dos quadrados;%.f\n",sqrt((a*a)+(b*b)));
    printf("\ne) O seno da diferença do primeiro numero pelo segundo;%.f\n",sin(a-b));
    printf("\nf) O módulo do primeiro numero %.f\n",a-(a*2));

}

int main (){
        int questao, inteiro;
        float flutuante, flutuante2;
        double bubble;
        char charactere;
        printf("\nSelecione a questao:\n");
        printf("\n1 - Valor em metros:\n");
        printf("\n2 - Imprimir Tabuada:\n");
        printf("\n3 - Hex e Octal :\n");
        printf("\n4 - Fahrenheit em Celso:\n");
        printf("\n5 - 2 + 2 sao?\n");
        scanf("%d",&questao);
        switch(questao){

        case 1:
            printf("\n Escreva um valor em metros:\n");
            scanf("%f", &flutuante);
            Valor_Met(flutuante);
        break;

        case 2:
            Tabuada();
        break;

        case 3:
            printf("\nDigite um numero inteiro\n:");
            scanf("%d", &inteiro);
            Hex_Oct(inteiro);
        break;
        case 4:
            printf("\nEscolha a questao a ou b: \n");
            scanf("%1s",&charactere);
            if (charactere=='a'){
            printf("\nDigite um numero \n");
            scanf("%lf",&bubble);
            Quat_A(bubble);
            }if (charactere=='b'){
            printf("\nDigite um numero \n");
            scanf("%d", &inteiro);
            Quat_B(inteiro);
        case 5:
            printf("Digite dois numeros:\n");
            scanf("%f %f", &flutuante, &flutuante2);
            Brincando(flutuante,flutuante2);
            }
        break;
        }
return 0;
}
