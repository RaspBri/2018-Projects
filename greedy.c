#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float change; //Assign float value

    do
    {
        printf("Hello! How much change do you owe? \n");
        change = get_float(); //Have user input value
    }

    while (change < 0);

    //Assign coin value
    int quarters = 25;
    int dimes = 10;
    int nickles = 5;
    int pennies = 1;
    int count = 0;

    change *= 100;
    int a = round(change);

    while (a >= quarters)
    {
        count++;
        a = a - quarters;
    }
    while (a >= dimes)
    {
        count++;
        a = a - dimes;
    }
    while (a >= nickles)
    {
        count++;
        a = a - nickles;
    }
    while (a >= pennies)
    {
        count++;
        a = a - pennies;
    }

    printf("%i\n", count);

}
