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
    int num_coins = 0;
    
    while (pennies > 24)
    {
        num_coins++;
        pennies = pennies - 25;
    }
    while (pennies > 9)
    {
        num_coins++;
        pennies = pennies - 10;
    }
    while (pennies > 4)
    {
        num_coins++;
        pennies = pennies - 5;
    }
    while (pennies > 0)
    {
        num_coins++;
        pennies = pennies - 1;
    }
    
    printf("%i\n", num_coins);
}
