#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    //Check command line argument
    if (argc != 2)   
    {
        printf("Usage: ./caesar key\n"); 
        return 1;
    }
    //Get length of string
    int arg_length = strlen(argv[1]); 
    
    //Iterate through length
    for (int i = 0; i < arg_length; i++)  
    {
        //Check character is not a digit
        if (!isdigit(argv[1][i]))  
        {
            printf("Usage: ./caesar key");  
            return 1;
        }
    }
    //Convert string to integer
    int key = atoi(argv[1]); 
    
    //Prompt for plaintext
    string plaintext = get_string("plaintext: ");
    
    //Print encipher text
    printf("ciphertext: "); 
    
    //Check length of plaintext
    int plaintext_length = strlen(plaintext);  
    
    //Iterate through length 
    for (int i = 0; i < plaintext_length; i++)  
    {
        //Encipher for upper case characters
        if (isupper(plaintext[i]))   
        {
            //Encipher calculation
            printf("%c", (((plaintext[i] - 65) + key) % 26) + 65);   
        }
        //Encipher for lower case characters
        else if (islower(plaintext[i]))  
        {
            //Encipher calculation
            printf("%c", (((plaintext[i] - 97) + key) % 26) + 97);  
        }
        //Print non letter characters as is
        else                       
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");  
}
