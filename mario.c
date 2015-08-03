#include <cs50.h>
#include <stdio.h>

// Declaring functions used in main but defined below.
int get_height();
void print_pyramid(int height);

int main(void)
{
    int height = get_height();
    print_pyramid(height);
    
    return 0;
}

// Keeps asking user until a valid height
// (between 1 and 23) is received.
int get_height()
{
    int height = 0;

    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    return height;
}

// Given the user's selected height,
// this function loops through, printing out the pyramid.
void print_pyramid(int height)
{
    for (int i = 0, hash = 2; i < height; i++, hash++)
    {
        for (int j = 0; j < height + 1 - hash; j++)
        {
            printf(" ");
        }
        for (int k = hash; k > 0; k--)
        {
            printf("#");
        }
        printf("\n");
    }
}
