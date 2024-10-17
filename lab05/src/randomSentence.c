#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
    int rand_line, file_line, line_count;

    for(int i=0; i<NUM_WORDS ;i++)
    {
        //Open each file in file_list and read the words in each file into ftxt array at index i
        ftxt[i]=fopen(file_list[i],"r");
        
        line_count=0;
        while(fgets(word, sizeof(word), ftxt[i])!=NULL)//As long as it's not an empty line, increment line count
        {
            line_count++;
        }

        //Generate random # between 1 and 10 to be used in random line selection
        rand_line= rand() % line_count + 1;
        file_line= 1;

        /*Reset ftxt pointer to the beginning of the file(0 represents the number of bytes to move the pointer
        To move to the beginning of the file, use 0 as it defaults to the beginning of the file)*/
        fseek(ftxt[i], 0, SEEK_SET);

        /*Reads max amount of characters in a line in ftxt and stores it in word array
        Continue until end of file*/
        while(fgets(word, sizeof(word), ftxt[i])!=NULL)
        {
            //Allows randomness in the selection of a line
            if(rand_line==file_line)
            {
                //Copy line and paste into word array
                strncpy(word_array[i], word, MAX_WORD_LEN);
                //Remove newline character from pasted line
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