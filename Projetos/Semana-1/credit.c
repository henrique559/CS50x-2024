#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdbool.h>

int multiply(int last_digit);
long num_length(long num);
char *check_credit (long credit);
int checksum (long credit);
int main (void)
{

    // Pegar o Input do usuario
    long credit_card;
    do
    {

        printf("Number: ");
        scanf("%ld", &credit_card);
        while(getchar() != '\n');
    }
    while(credit_card <= pow(10, 12));
//    printf("%s\n", check_credit(credit_card));

       printf("%s\n", check_credit(credit_card));
    return 0;
}

int checksum (long credit)
{
    int sum = 0;
    bool IsAlternated = false;

    while(credit > 0)
    {
        if(IsAlternated == true)
        {
            int last_digit = credit % 10;
            sum += multiply(last_digit);
        }
        else
        {
            int last_digit = credit % 10;
            sum += last_digit;
        }
        IsAlternated = !IsAlternated;
        credit = credit / 10;
    }
    return sum;
}

int multiply(int last_digit)
{
    int multiply = last_digit * 2;
    int sum = 0;

    while(multiply > 0)
    {
        int ld_multi = multiply % 10;
        sum += ld_multi;
        multiply = multiply / 10;
    }

    return sum;
}

char *check_credit (long credit)
{
    int length = num_length(credit);

    if(checksum(credit) % 10 == 0) // TODO: Arrumar
    {
        if(length == 15)
            return "AMEX";
        else if (length == 16 && (int) (credit / pow(10,15)) == 5)
            return "MASTERCARD";
        else if(length == 13 || (length == 16 && (int) (credit / pow(10,15)) == 4))
            return "VISA";

        return "INVALID";
    }
    else
        return "INVALID\n";

    // Printar: AMEX, MASTERCARD, VISA ou INVALID
}

long num_length(long num)
{
    return floor(log10(num))+1;
}

