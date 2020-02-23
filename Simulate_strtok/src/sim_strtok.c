#include<stdio.h>
#include<string.h>


void sim_strtok(char str[] ,char ch)
{
    int i ;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
    	if (str[i] != ch)
    	{
    		printf("%c" , str[i]);
    		continue;
    	}
    	else
    	{
    		printf("\n");
    		continue;
    	}
    }
}

int main()
{
	char str[19] = "Welcome,to,Sunbeam";
	char ch = ',';
	sim_strtok(str , ch);
	return 0;
}
