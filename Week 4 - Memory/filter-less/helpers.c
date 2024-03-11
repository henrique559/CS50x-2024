#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // loop em todos os pixel
    // fileira                         ^
    for(int y = 0; y < height; y++) // |y
    {
        // cada pixel
        for(int x = 0; x < width; x++) // x -->
        {
            // calcular a média das cores RGB daquele pixel
            int average = round((image[y][x].rgbtRed + image[y][x].rgbtBlue + image[y][x].rgbtGreen) / 3.0);

            // modificar a média
            image[y][x].rgbtRed = average;
            image[y][x].rgbtGreen = average;
            image[y][x].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int y = 0; y < height; y++) // |y
    {
        // cada pixel
        for(int x = 0; x < width; x++) // x -->
        {
            int sepiaRed = round(.393 * image[y][x].rgbtRed + .769 * image[y][x].rgbtGreen + .189 * image[y][x].rgbtBlue);
            int sepiaGreen = round(.349 * image[y][x].rgbtRed + .686 * image[y][x].rgbtGreen + .168 * image[y][x].rgbtBlue);
            int sepiaBlue = round(.272 * image[y][x].rgbtRed + .534 * image[y][x].rgbtGreen + .131 * image[y][x].rgbtBlue);

            image[y][x].rgbtRed = (sepiaRed > 255) ? 255 : sepiaRed;
            image[y][x].rgbtGreen = (sepiaGreen > 255) ? 255 : sepiaGreen;
            image[y][x].rgbtBlue = (sepiaBlue > 255) ? 255 : sepiaBlue;
        }

    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int aux;

    for(int y = 0; y < height; y++) // |y
    {
        // cada pixel
        for(int x = 0, reverse = width - 1; x < reverse; x++, reverse--) // x -->
        {
            // red
            aux = image[y][x].rgbtRed;
            image[y][x].rgbtRed = image[y][reverse].rgbtRed;
            image[y][reverse].rgbtRed = aux;

            // green
            aux = image[y][x].rgbtGreen;
            image[y][x].rgbtGreen = image[y][reverse].rgbtGreen;
            image[y][reverse].rgbtGreen = aux;

            // blue
            aux = image[y][x].rgbtBlue;
            image[y][x].rgbtBlue = image[y][reverse].rgbtBlue;
            image[y][reverse].rgbtBlue = aux;
        }

    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];


    // copiar o image para o copy
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }


    // pegar um pixel, calcular a media do valor de todos os pixeis em um raio de 3x3 e colocar o valor nele

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int totalRed = 0, totalGreen = 0, totalBlue = 0;
            float count = 0.00;

            for(int x = -1; x < 2; x++)
            {
                for(int y = -1; y < 2; y++)
                {
                    int currentX = i + x;
                    int currentY = j + y;

                    if(currentX < 0 || currentX > (height - 1) || currentY < 0 || currentY > (width - 1))
                        continue;

                    totalRed += image[currentX][currentY].rgbtRed;
                    totalGreen += image[currentX][currentY].rgbtGreen;
                    totalBlue += image[currentX][currentY].rgbtBlue;


                    count++;
                }
            }
            copy[i][j].rgbtRed = round(totalRed / count);
            copy[i][j].rgbtGreen = round(totalGreen / count);
            copy[i][j].rgbtBlue = round(totalBlue / count);

        }
    }

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }
}


