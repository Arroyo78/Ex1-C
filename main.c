#include <stdio.h>
/*
int main () {
    printf ("Hola Alex\n");
    printf ("Feliz inicio de mes\n");
    return 0;
}
*/

int main(void) 
{ 
   int num1 = 15; // 00000000 00000000 00000000 00001111 
   int num2 = 20; // 00000000 00000000 00000000 00010100 
   int num3 = num1&num2; //Se aplica la operación AND a los operandos 
   printf("Resultado: %d \n", num3); 
   return 0; 
}  