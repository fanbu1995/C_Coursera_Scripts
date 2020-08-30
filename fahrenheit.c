/* Conversion of Fahrenheit to Celsius

   C = (F - 32)/1.8
   Fan Bu
   Aug 6, 2020
*/
#include <stdio.h>
int main(void)
{
    int fahrenheit, celsius;
    
    printf("Enter fahrenheit as an integer:");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8; //done as double division, then silently converted to an integer!
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
    return 0;
}
