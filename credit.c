#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Assign long longs at the top so that the program works
    long long card;
    long long plus;
    long long multi;

    //Assign int
    int multi2 = 0;
    int total = 0;

    //User's Input
    do
    {
        printf("Give Me Your Credit Card Number (NoT A TRicK): ");
        card = get_long_long();
    }
    while (card < 0);

    //Adding every other card number
    for (plus = card; plus > 0; plus /= 100)
    {
        total += (plus % 10);
    }

    //Multiplying it by two
    for (multi = (card / 10); multi2 > 0; multi2 /= 100)
    {
        if ((multi % 10) * 2 > 9)
        {
            multi2 += ((multi % 10) * 2) / 10;
            multi2 += ((multi % 10) * 2) % 10;
        }
        else
        {
            multi2 += ((multi % 10) * 2);
        }
    }

    //Just take the total and add it all
    total = plus + multi2;

    //Loops
    if (total % 10 == 0)
    {
        if ((card >= 340000000000000 && card < 350000000000000) || (card >= 370000000000000 && card < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (card >= 5100000000000000 && card < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((card >= 4000000000000 && card < 5000000000000) || (card >= 4000000000000000 && card < 5000000000000000))
        {
            printf("VISA\n");
        }
        //Add this as default
        else
        {
            printf("INVALID\n");
        }
    }
    //Add this as a last resort
    else
    {
        printf("INVALID\n");
    }
}
