#include <stdio.h>
#include <stdlib.h>
/* NAME : VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DESCRIPTION : BORROWED BOOKS 
DATE : 5/11/2025 */
int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);  

    fclose(fp);
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}