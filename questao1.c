#include <stdio.h>

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

int main (){
        int questao, inteiro;
        float flutuante;
        scanf("%d",&questao);
        switch(questao){

        case 1:
            scanf("%f", &flutuante);
            Valor_Met(flutuante);
        break;

        case 2:
            Tabuada();
        break;

        case 3:
            scanf("%d", &inteiro);
            Hex_Oct(inteiro);
        break;
        //case 4:

        }
return 0;
}
