// Program encrypts messages using Caesar’s cipher.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    //check if there is enough info given
    if (argc != 2)
    {
        return 1;
    }

    //video: must convert to int
    int z = atoi(argv[1]);

    //check value of z
    if (z < 1 && z > 27)
    {
        return 1;
    }

    printf("plaintext: ");
    string text = get_string();

    printf("ciphertext: ");

    for (int b = 0; b < strlen(text); b++)
    {
        //math given in assignment &
        //https://cs50.stackexchange.com/questions/12300/how-do-you-convert-ascii-to-alphabetical-index

        //http://www.c4learn.com/c-programs/check-whether-character-is-uppercase-or.html
        if (text[b] >= 'a' && text[b] <= 'z')
        {
            printf("%c", (((text[b] - 97) + z) % 26) + 97);
        }

        else if (text[b] >= 'A' && text[b] <= 'Z')
        {
            printf("%c", (((text[b] - 65) + z) % 26) + 65);
        }

        else
        {
            printf("%c", text[b]);
        }
    }
    printf("\n");
}
