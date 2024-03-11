#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(int argc, char *argv[])
{
    // Checar por argumentos
    if(argc != 2)
    {
        printf("Usage: ./recover [FILE]");
        return 1;
    }

    // Abrir arquivo
    FILE *card = fopen(argv[1], "r");
    FILE *img = NULL;

    uint8_t buffer[512];
    char *filename = malloc(8);
    int i = 0;

    // Repetir até o final do cartão
    while(fread(buffer, 1, 512, card) == 512)
    {
        // checar o começo para ver se é um jpg
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // se for o primeiro jpg sendo escrito, faça isso
            if(img != NULL)
                    fclose(img);

            sprintf(filename, "%03i.jpg", i);
            img = fopen(filename, "w");
            i++;

            // se não, feche o arquivo anterior e continue procurando
        }

            if(img != NULL)
                fwrite(buffer, 1, 512, img);
    }
    fclose(img);
    fclose(card);
    free(filename);
    return 0;
    //
}
