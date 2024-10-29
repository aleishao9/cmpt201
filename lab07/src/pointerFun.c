#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void poly(double* coef, double* x, double* y, int* nc, int* na)
{
	for(int j=0;j<*na;j++)
	{
		for(int i=0;i<*nc;i++)
		{
			*y=+coef[j]*(pow(x[i],j));
			printf("y = %g, ",*y);
		}
		printf("\n");
	}
}

void reverso(char* str, int* n)
{
	char temp_char;
	int j= *n - 2;

	for(int i=0; i<j ;i++, j--)
	{
		temp_char=str[i];
		str[i]=str[j];
		str[j]=temp_char;
	}
}

void str_centre(char* str, int* n)
{
	int word_ind=0, word_len=0, total_space=0, middle=0;
	char word[10]="";

	for(int i=0; i<*n; i++)
	{
		if(isalpha(str[i]))
		{
			word[word_ind]=str[i];
			word_ind++;
		}
	}
	word[word_ind]='\0';

	word_len=strlen(word);
	total_space= *n-1 - word_len;
	middle=total_space/2;

	memset(str, ' ', *n-1);
	//str + left offsets starting point for copying by 'left' amount of spaces
	strncpy(str+middle,word,word_len);
	str[*n-1]='\0';
}
