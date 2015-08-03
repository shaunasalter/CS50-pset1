#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    do
    {
        printf("How much change is owed?\n");
        owed = GetFloat();
    }
    while (owed < 0);
    
    int pennies = (int) round(owed * 100);
    
    int quarters = pennies / 25;
    pennies = pennies % 25;
    int dimes = pennies / 10;
    pennies = pennies % 10;
    int nickles = pennies / 5;
    pennies = pennies % 5;
    int num_pennies = pennies / 1;
    
    int num_coins = quarters + dimes + nickles + num_pennies;
   
    printf("%i\n", num_coins);
}
