#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R_MAX 10
#define R_MIN 1

int main(void)
{
    srand(time(NULL));
    int r;
    char file_list[5][15]={"articles.txt","adjectives.txt","nouns.txt","verbs.txt","adverbs.txt"};
    FILE* ftxt;

    for(int i=0;i<5;i++)
    {

        ftxt=fopen(file_list[i],"r");
    }
    return 0;
}