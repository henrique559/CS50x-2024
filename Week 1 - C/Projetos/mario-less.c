#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int Height = 0;
    do
    {
        Height = get_int("Height: ");
    }
    while(Height < 1);

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
        printf("\n");
    }

    //for(int i = 0; i < Height; i++)
    //{
      //  for(int j = Height; j > i; j--)
        //{
          //  printf("#");
        //}
        //printf("\n");
    //}

}