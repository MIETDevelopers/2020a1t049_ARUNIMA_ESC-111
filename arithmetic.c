#include <stdio.h>
int main()
{
   int first, second, add, subtract, multiply,remainder;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   
   remainder = first % second;
   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.2f\n", divide); 
   printf("remainder = %.2f\n", remainder); 
   return 0;
}