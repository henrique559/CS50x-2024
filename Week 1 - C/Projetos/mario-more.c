#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int Height = 0;
    do
    {
        Height = get_int("Height: ");
    }
    while(Height < 1 || Height > 8);

    printf("\n");
    for(int row = 0; row < Height; row++)
    {
            for(int dots = Height - 1; dots > row; dots--)
            {
                printf(" ");
            }
            for(int hashes = 0; hashes <= row; hashes++)
            {
                printf("#");
            }
            printf("  ");

            for(int hashes2 = 0; hashes2 <= row ; hashes2++)
            {
                printf("#");
            }
        printf("\n");
    }

}