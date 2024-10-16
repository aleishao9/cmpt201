#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R_MAX 10
#define R_MIN 1

int main(void)
{
    srand(time(NULL));
    int r;
    char* file_list[]={"articles.txt","adjectives.txt","nouns.txt","verbs.txt","adverbs.txt"};
    FILE* ftxt[5];
    char word_array[5], word[15];
    int rand_line, file_line=1;

    //open each file in file_list and read the words in each file into ftxt array at index i
    for(int i=0;i<5;i++)
    {
        ftxt[i]=fopen(file_list[i],"r");
        
        rand_line= rand() % R_MAX + R_MIN;

        if(fgets(word, sizeof(word), ftxt[i])!=NULL && rand_line==file_line)
        {
            word_array[i]=word;
        }
        file_line++;

        fseek(ftxt[i],0,SEEK_SET);
        fclose(ftxt[i]);
    }
    return 0;
}