#include <stdio.h>

int main () {
         float C;
         int op;
         
         printf("Escolha sua converção:\n\n");
         printf("|1| Conversão ºC => ºF\n");
         printf("|2| Conversão ºC => K\n\n");
         scanf ("%d", & op);
         
         
         if (op == 1) {
         printf("Digite a temperatura em °C: ");
         scanf("%f", &C);
         float F = C * 1.8 + 32;
         printf ("A temperatura %.1f°C em ºF é %.1f", C, F);
         } 
         else if (op == 2){
             
         }
    
    }
