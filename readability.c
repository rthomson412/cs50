#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
//Int to count number of letters
    int count_letter = 0;  
    
//Int to count number of words
    int count_word = 1;   
    
//Int to count number of sentences
    int count_sentence = 0; 
    
//Get text from user
    string text = get_string("Text: ");  

//Check length of text
    int text_length = strlen(text);         
    for (int i = 0; i < text_length; i++) 
    
//Iterate through length of text
    {
        if (isalpha(text[i]))    
        
//Check if text is an Alphabeth
//Then count number of alphabeth in text
        {
            count_letter++;   
        }
    }
//Check if the number of letters is correct
//Check if there is space and count number of spaces
    for (int i = 0; i < text_length; i++)  
    {
        if (isspace(text[i]))      
        {
            count_word++;    
        }
    }
//Check if number of words is correct
    for (int i = 0; i < text_length; i++)
    
//Check if characters in text have '.', '?' and '!'
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') 
//Count the number of above characters if found
        {
            count_sentence++; 
        }
    }
//Check if the number of sentence is correct
// Calculation index = 0.0588 * L - 0.296 * S - 15.8 

    float calculation = (0.0588 * count_letter / count_word * 100) - (0.296 * count_sentence / count_word * 100) - 15.8;
    
//Round up the Index
    int index = round(calculation);  
    
//Print 'Before Grade 1'if index is less than 1
//Print 'Grade 16+'if index is greater than 16
//ELSE print Grade index(digit) if index is between 1 and 16
    
    
    if (index < 1)    
    {
        printf("Before Grade 1\n");   
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");  
    }
    else
    {
        printf("Grade %i\n", index); 
    }
}
