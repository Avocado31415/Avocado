#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dummy_Book {
  char author[255];
  char title[255];
  char code_ISBN[255];
  int price;
} Book;

int main() {
  char line[256];
  int i, len;
  Book **bkdata = (Book**)malloc(sizeof(Book)*3);
  fgets(line,256,stdin);
  
  for(i=0; i<3; i++) {
    bkdata[i] = (Book*)malloc(sizeof(Book));

    printf("Input author");
    scanf("%s",line);
    strcpy(bkdata[i]->author, line);
    printf("author = %d\n", bkdata[i]->author);
    
    printf("Input title");
    scanf("%s",line);
    strcpy(bkdata[i]->title, line);
    printf("title = %d\n", bkdata[i]->title);
    
    printf("Input ISBN code");
    scanf("%s",line);
    strcpy(bkdata[i]->code_ISBN, line);
    printf("ISBN= %d\n",bkdata[i]->code_ISBN);
    
    printf("Input price");
    scanf("%s",line);
    strcpy(bkdata[i]->price, atoi(line));
    printf("price= %d\n", bkdata[i]->price);
  }
  
  printf("\nBook Data\n\n");
  
  for(i = 0; i < 3; i++) {
    printf("author= %c\n", bkdata[i]->author);
    printf("title= %c\n", bkdata[i]->title);
    printf("ISBN= %c\n", bkdata[i]->code_ISBN);
    printf("price= %d\n", bkdata[i]->price);
  }
}