#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; //declare int variable Height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);  //height not less than 1 or more than 8

    for (int R = 0; R < height; R++) //to print new line as ROW
    {
        for (int space = height - R - 1; space > 0; space--) //to print SPACE
        {
            printf(" ");
        }
        for (int hash = 0; hash < R + 1; hash++) //print hashes(#)
        {
            printf("#");
        }
        printf("\n");
    }
}
