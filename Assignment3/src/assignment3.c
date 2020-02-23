#include<stdio.h>

int menu_list()
{
	int choice;
	printf(" 0. Exit\n");
	printf(" 1. Insert Element\n");
	printf(" 2. Delete Element\n");
	printf(" 3. Maximum Element\n");
	printf(" 4. Minimum Element\n");
	printf(" 5. Sum of Element\n");
	printf(" Enter Your Choice :  ");
	scanf("%d" , &choice);
	return choice;

}

void insert_element( int arr[] , int size)
{
	int i;
	int count = 0;
	printf("Available places are : \n");
	for(i = 0  ; i < size ; i++)
	{
		if(arr[i] == 0)
		{
			printf("%d\t" , i);
			count++;
		}
	}
	if (count == 0)
	{
		printf("Array is overflow\n");
	}
	else
	{
		printf("\nEnter you choice(Index) : \n");
		scanf("%d" ,&i);
		if(i >= size )
		{
			printf("Invalid Index \n");
		}
		else
		{
		printf("Enter Number : \n");
		scanf("%d" , &arr[i]);
		}
	}

}

void delete_element(int arr[] , int size)
{
		int i;
		int count = 0;
		printf("Available places are : \n");
		for(i = 0  ; i < size ; i++)
		{
			if(arr[i] != 0)
			{
				printf("%d\t" , i);
				count++;
			}
		}
		if (count == 0)
		{
			printf("Array is underflow\n");
		}
		else
		{
			printf("\nEnter you choice(Index) : \n");
			scanf("%d" ,&i);
			if(i >= size )
			{
				printf("Invalid Index \n");
			}
			else
			{
			 arr[i] = 0;
			}
		}
}

void find_maximum(int arr[] , int size)
{
	int i;
	int j = arr[0];
	for(i=1 ; i < size  ; i++)
	{
		if(arr[i] > j)
		{
			j = arr[i];
		}
	}
	for(i=0 ; i < size  ; i++)
	{
		if(arr[i] ==  j)
		{
			printf("Maximum number : Arr[%d] %d\n" , i , j);
		}
	}



}

void find_minimum(int arr[] , int size)
{
	int i;
		int j = arr[0];
		for(i=1 ; i < size  ; i++)
		{
			if(arr[i] < j)
			{
				j = arr[i];
			}
		}
		for(i=0 ; i < size  ; i++)
		{
			if(arr[i] ==  j)
			{
				printf("Minimum number : Arr[%d] %d\n" , i , j);
			}
		}


}



void print_array(int arr[] , int size)
{
	int i;
	for (i = 0 ; i < size; i++)
		{
			printf("Arr[%d ]: %d\n" ,i, arr[i]);
		}

}

int Sum( int arr[ ] , int n)
{
	int sum = 0 , i;
	for (i = 0 ; i < n; i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}

int main()
{
	int choice;
	int arr[3] = {0};
	int sum;

	while( ( choice = menu_list( ) ) != 0 )

	{
		switch( choice )
		{
		case 1 :
				insert_element(arr , 3);
				print_array(arr , 3);
				break;

		case 2:
			delete_element(arr , 3);
			print_array(arr , 3);
				break;

		case 3:
			find_maximum(arr , 3);
			break;

		case 4:
			find_minimum(arr , 3);
			break;

		case 5:
			sum = Sum ( arr , 3);
			printf("Sum is : %d\n" , sum );
			break;

		}
	}

	return 0 ;
}


