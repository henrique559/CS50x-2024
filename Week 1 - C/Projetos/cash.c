#include <stdio.h>
#include <cs50.h>

int calculator(int cents, int quarters, int dimes, int nickels, int pennies);
int calculate_pennies(int cents);
int calculate_nickels(int cents);
int calculate_dimes(int cents);
int calculate_quarters(int cents);

int main (void)
{
    int cents = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0, sum = 0;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    sum = calculator(cents, quarters, dimes, nickels, pennies);

    printf("%d\n", sum);

}
int calculate_quarters(int cents)
{
    // Calcular quantos 'quarters' voce deveria dar ao cliente
    // Subtrair o valor daquele quarter pelo cents 25
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{

    // Calcular quantos 'dimes' voce deveria dar ao cliente
    // Subtrair o valor daquele dimes pelo cents que estão sobrando 10

    int dimes = 0;
    while(cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;

}

int calculate_nickels(int cents)
{

    // Calcular quantos 'nickels' voce deveria dar ao cliente
    // Subtrair o valor daquele nickels pelo cents que estão sobrando 5

    int nickels = 0;
    while(cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}


int calculate_pennies(int cents)
{
    // Calcular quantos 'pennies' voce deveria dar ao cliente 1
    // Subtrair o valor daquele pennie pelo cents que estão sobrando

    int pennies = 0;
    while(cents >= 1)
    {
        pennies++;
        cents -= 5;
    }
    return pennies;

}

int calculator(int cents, int quarters, int dimes, int nickels, int pennies)
{
    int sum = 0;

    quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);
    sum += quarters;

    dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);
    sum += dimes;

    nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);
    sum += nickels;

    pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);
    sum += pennies;

    return sum;

}