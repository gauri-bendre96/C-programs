#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct books
{
    int id;
    char name[50];
    float price;
}books_t;

int compare_by_name(const void *p1 , const void *p2)
{
	const books_t *s1 = (const books_t*)p1;
	const books_t *s2 = (const books_t*)p2;
	return strcmp(s1->name , s2 ->name);
}

void accept_record(books_t bk[] , int size)
{
	int i = 0;
	for(i = 0 ; i < 10 ; i++)
	    {
	        printf("\nBook-id : ");
	        scanf("%d" , &bk[i].id);

	        printf("Book-name : ");
	        scanf(" %[^\t\n]s" , &bk[i].name);

	        printf("Book-price : ");
	        scanf("%f" , &bk[i].price);
	    }

}
void print_record(books_t bk[] , int size)
{
	int i ;
	for( i = 0 ; i < 10; i++)
	    {
	        printf("\n%d\t%s\t%.2f\n" , bk[i].id , bk[i].name , bk[i].price);

	    }

}

int main()
{
    books_t bk[10];
    printf("Enter the Details of Books : \n");
    accept_record(bk , 10);

    printf("\n\nBook details are as follows : \n");
    print_record(bk , 10);

    printf("***Qsort***\n");

    qsort(bk , 10 , sizeof(books_t), compare_by_name);
    print_record(bk , 10);

    return 0;

}
