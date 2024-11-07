#include <stdio.h>
#include <stdlib.h>


char* reverso(char* input_string)
{
    char* reversed_string;
    char temp_char;
    int len = 0;

    while(input_string[len] != '\0')
    {
        len++;
    }

    for(int i=0, j=len; i<j; i++, j--)
    {
        temp_char=input_string[i];
        input_string[i]=input_string[j];
        input_string[j]=temp_char;
    }

    /* add nul character at the end of a string always */
    reversed_string[len] = '\0';

    return reversed_string;
}


char* merge(char* str1, char* str2) 
{
    int len1 = 0, len2 = 0;
    char* merged_string;

    while (str1[len1] != 0)
    {
        len1++;
    }
    while (str2[len2] != 0)
    {
        len2++;
    }

    /* allocating memory for character array to hold merged string */
    merged_string = (char*)malloc((len1 + len2 + 1) * sizeof(char));



    /* attaching string 1 and string 2 in merged string array */
    for (int i = 0; i < len1; i++)
    {
        merged_string[i] = str1[i];
    }
    for (int i = 0; i < len2; i++)
    {
        merged_string[len1 + i] = str2[i];  // Append str2 to merged_string
    }

    merged_string[len1 + len2] = '\0';

    return merged_string;
}


int main(void)
{

}