#include <stdio.h>

int main () {
         float C;
         int op;
         
         printf("Escolha sua conversao:\n\n");
         printf("|1| Conversao C => F\n");
         printf("|2| Conversao C => K\n\n");
         scanf ("%d", & op);
         
         //hahaha
         if (op == 1) {
         printf("Digite a temperatura em C: ");
         scanf("%f", &C);
         float F = C * 1.8 + 32;
         printf ("A temperatura %.1f em F  %.1f", C, F);
         } 
         else if (op == 2)
		 {
         printf("Digite a temperatura em C: ");
         scanf("%f", &C);
         float k = C + 273.15;
         printf ("A temperatura %.1f C em k %.2f", C, k);
         }
    
    }

