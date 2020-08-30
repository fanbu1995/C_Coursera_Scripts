/* termary operator (nested) example
   Fan Bu, Aug 8, 2020
*/

#include <stdio.h>
int main()
{
   int speed;
   printf("\nEnter speed as an integer:");
   scanf("%d", &speed);
   // add another layer of operation: need speed > 0
   speed = (speed<0)? (0): (speed <= 65)? (65):(speed <= 70)? (70): (90);
   switch (speed)
   {
      case 65: printf("\n No speeding ticket.\n\n"); break;
      case 70: printf("\n Speeding ticket.\n\n"); break;
      case 90: printf("\n Expensive speeding ticket.\n\n"); break;
      default: printf("\n Incorrect speed!\n\n"); 
   }
   return 0;
}
