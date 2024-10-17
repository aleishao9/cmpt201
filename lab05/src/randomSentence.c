#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define R_MAX 10
#define R_MIN 1
#define MAX_WORD_LEN 15
#define NUM_WORDS 5

int main(void)
{
    srand(time(NULL));
    int r;
    char* file_list[]={"articles.txt","adjectives.txt","nouns.txt","verbs.txt","adverbs.txt"};
    FILE* ftxt[NUM_WORDS];
    char word_array[NUM_WORDS][MAX_WORD_LEN]; //2D array to hold multiple strings
    char word[MAX_WORD_LEN]; //Holds random selected words
    int rand_line, file_line;

    for(int i=0; i<NUM_WORDS ;i++)
    {
        //Open each file in file_list and read the words in each file into ftxt array at index i
        ftxt[i]=fopen(file_list[i],"r");
        
        //Generate random # between 1 and 10 to be used in random line selection
        rand_line= rand() % R_MAX + R_MIN;
        file_line= 1;

        /*Reads max amount of characters in a line in ftxt and stores it in word array
        Continue until end of file*/
        while(fgets(word, sizeof(word), ftxt[i])!=NULL)
        {
            //Allows randomness in the selection of a line
            if(rand_line==file_line)
            {
                /*If random line, copy into word array
                Remove newline*/
                strncpy(word_array[i], word, MAX_WORD_LEN);
                word_array[i][strcspn(word_array[i], "\n")] = '\0';
                break;
            }
            file_line++;
        }

        fclose(ftxt[i]); //Close all txt files
    }
    printf("%s %s %s %s %s\n", word_array[0], word_array[1], word_array[2], word_array[3], word_array[4]);
    return 0;
}