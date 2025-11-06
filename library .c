/*Name:VICTOR GICHOMO 
Reg no:CT101/G/26447/25
Date:30/10/2025
Description:open file for borrowed books
*/
#include <stdio.h>
int main()
{
	char title[30];
	FILE *fptr;
	
	fptr=fopen("C:\\Users\\windows\\Desktop\\files\\borrowed_books.txt","a");
    

	printf("Enter title of the borrowed book:\t");
    scanf("%s",&title);
	
	
	fprintf(fptr,"TITLE OF THE BOOK \n %s: \n",title);
	
	fclose(fptr);
	
	printf("Title of the book written to borrowed books file");

	return 0;
}