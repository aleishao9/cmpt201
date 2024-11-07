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

    reversed_string=(char*)malloc((len+1)*sizeof(char));
    for(int i=0; i<len; i++)
    {
        /* start from the end of input string
        and insert 1 by 1 into reversed string */
        reversed_string[i]=input_string[len-i-1];
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
        merged_string[len1 + i] = str2[i];
    }

    merged_string[len1 + len2] = '\0';

    return merged_string;
}



int length(const char* str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}



int main(int argc, char* argv[])
{
    char* reversed1, *reversed2, *merged;
    reversed1=reverso(argv[1]);
    reversed2= reverso(argv[2]);
    merged= merge(argv[1],argv[2]);

    int total_len;
    /* +3 for the 2 hyphens and the nul character */
    total_len=length(reversed1)+length(reversed2)+length(merged)+3;

    char* total_str;
    total_str= (char*)malloc(total_len * sizeof(char));

    /* sprintf works like printf but allows me to store my string in a
    specific format to then be printed when it's called for
    1. the allocated memory for where the total string will be stored
    2. the format is 'string'-'string'-'string'
    3. the strings that will replace the %s */
    sprintf(total_str, "%s-%s-%s", reversed1, merged, reversed2);

    printf("Input: %s, %s\n", argv[1], argv[2]);
    printf("Output: %s\n", total_str);

    free(reversed1);
    free(reversed2);
    free(merged);
    free(total_str);

    return 0;
}