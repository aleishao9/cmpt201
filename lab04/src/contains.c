//use scanf to get user input (%[^\n]s specifies to take everything)
//convert input to ascii
//loop through array to check every character entered
#include <stdio.h>
#include <string.h>

int main(void)
{
	/*Initialize variables and character array.
	Prompt user for character string.*/
	char char_array[30];
	int char_ascii, alpha_count=0, num_count=0, spcl_count=0, ctrl_count=0;

	printf("Please enter a string: ");
	scanf("%[^\n]s", char_array);
	printf("%s\n",char_array);
	
	/*Go through character array and convert each char into it's respective ascii value. 
	Tally the amount of each character that is present.*/
	for(int length=strlen(char_array),i=0;i<length;i++)
	{
		char_ascii = (int) char_array[i];
		printf("%d\n", char_ascii);
		/*control characters*/
		if(char_ascii<=31||char_ascii==127)
		{
			ctrl_count++;
		}

		/*alphabet characters*/
		if(char_ascii>=65 && char_ascii<=90||char_ascii>=97 && char_ascii<=122)
		{
			alpha_count++;
		}

		/*integer characters*/
		if(char_ascii>=48 && char_ascii<=57)
		{
			num_count++;
		}

		/*special characters*/
		if(char_ascii>=32 && char_ascii<=47||char_ascii>=58 && char_ascii<=64||char_ascii>=91 && char_ascii<=96||char_ascii>=123 && char_ascii<=126)
		{
			spcl_count++;
		}
	
	/*If character string contains all types*/
	if(spcl_count>=1&&alpha_count>=1&&num_count>=1&&ctrl_count>=1)
	{
		printf("Contains letter(s), number(s), special character(s), and control character(s).\n");
	}

	if(alpha_count==0&&spcl_count==0&&num_count==0&&ctrl_count>=1)
	{
		printf("Contains all control characters\n");
	}

	if(alpha_count>=1&&spcl_count==0&&num_count==0&&ctrl_count==0)
	{
		printf("Contains all letters\n");
	}

	if(alpha_count==0&&spcl_count==0&&num_count>=1&&ctrl_count==0)
	{
		printf("Contains all numbers\n");
	}

	if(alpha_count==0&&spcl_count>=1&&num_count==0&&ctrl_count==0)
	{
		printf("Contains all special characters\n");
	}

	if(alpha_count==0&&spcl_count>=1&&num_count==0&&ctrl_count>=1)
	{
		printf("Contains special character(s) and control character(s)\n");
	}
	
	if(alpha_count>=1&&spcl_count>=1&&num_count==0&&ctrl_count>=1)
	{
		printf("Contains letter(s), special character(s), and control character(s)\n");
	}
	
	if(alpha_count==0&&spcl_count>=1&&num_count>=1&&ctrl_count>=1)
	{
		printf("Contains number(s), special character(s), and control character(s)\n");
	}

	if(alpha_count>=1&&spcl_count==0&&num_count==0&&ctrl_count>=1)
	{
		printf("Contains letter(s) and control character(s)\n");
	}

	if(alpha_count==0&&spcl_count==0&&num_count>=1&&ctrl_count>=1)
	{
		printf("Contains number(s) and control character(s)\n");
	}
	
	if(alpha_count==0&&spcl_count==0&&num_count==0&&ctrl_count>=1)
	{
		printf("Contains control character(s)\n");
	}
	
	
	
	}
	return 0;
}