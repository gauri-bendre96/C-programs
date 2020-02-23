/*
 * Assignment2.c
 *
 *  Created on: 17-Feb-2020
 *      Author: sunbeam
 */

#include<stdio.h>
#include<string.h>
int menulist()
{
	int choice;
	printf("\n0.Exit\n");
	printf("1.STRCPY\n");
	printf("2.STRCAT\n");
	printf("3.STRCMP\n");
	printf("4.STRREV\n");
	printf("Enter your choice : ");
	scanf("%d", &choice);
	return choice;
}

char *string_copy(char *dest ,const char *str)
{
	int i = 0 ;
	//int size = sizeof(str)/sizeof(str[0]);
	while(str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	//return dest;
}

char *string_concat(char *str, char *src)
{
	int i = 0 , j = 0;
	for(i=0;str[i]  != '\0';i++);
	while(src[i]!='\0')
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = '\0';
}

int string_compare(const char *s1, const char *s2)
{
	int i = 0 , j = 0,cnt=0;
	if(s1[i] != s2[j])
		{
			return -1;
		}
		else
		{
			for(i = 0,j=0 ; s1[i] != '\0' && s2[j] != '\0'; i++,j++)
			{
				if(s1[i] == s2[j])
				{
					cnt++;
					continue;
				}
			}
			if(cnt==strlen(s2) && cnt==strlen(s1))
				return 0;
		}
}

char *string_reverse( char * src)
{
	int i = 0 , j = strlen(src) - 1, temp;
	while(i < j)
	{
		temp = src[i];
		src[i] = src[j];
		src[j] = temp;
		i++;
		j--;
	}
	return src;
}


int main()
{
	int choice;

	char src[8] = "SunBeam";

	char src_cat[13] = "Welcome";

	char str[5] = "Pune";

	char str_comp[8] = "Welcome";

	char dest[8];

	int cmp_count;
	while( (choice = menulist()) != 0)
	{
		switch(choice)
		{
		case 1:
			string_copy(dest , src);
			printf("%s", dest);
			break;
		case 2:
			string_concat( src_cat,str);
			printf("%s" , src_cat);
			break;
		case 3:
			cmp_count = string_compare(src , str_comp);
			printf("%d" , cmp_count);
			break;
		case 4:

			string_reverse(src);
			printf("%s" , src);
			break;

		}
	}
	return 0;
}


