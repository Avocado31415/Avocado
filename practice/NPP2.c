#include<stdio.h>
#include<stdlib.h>
#include<string.h>
                     

typedef struct dummy_struc {
  char author[256];
  char title[256];
  char code_ISBN[256];
  int price;
} Book;

char *readLine(FILE *fp){
    char *line = (char*)malloc(256);
    char *chp;

    fgets(line,256,fp);

    if(feof(fp)){
        chp=NULL;
        return chp;
    }else{
        if(line[strlen(line)-2]=='\r'){
            line[strlen(line)-2]='\0';
        } 

        if(line[strlen(line)-1]=='\n'){
            line[strlen(line)-1]='\0';
        }
        chp=line;
        return chp;
    }
}

int main(){
    char *line;
    int i;
    Book** bkdata = (Book**)malloc(sizeof(Book*)*3);
    
    for(i=0;i<3;i++){

        bkdata[i] = (Book*)malloc(sizeof(Book));

        printf("Input author\n");
        line = readLine(stdin);
        strcpy(bkdata[i]->author,line);
        free(line);
        printf("author = %s\n",bkdata[i]->author);

        printf("Input title\n");
        line = readLine(stdin);
        strcpy(bkdata[i]->title,line);
        free(line);
        printf("title = %s\n",bkdata[i]->title);

        printf("Input ISBN code\n");
        line = readLine(stdin);
        strcpy(bkdata[i]->code_ISBN,line);
        free(line);
        printf("ISBN = %s\n",bkdata[i]->code_ISBN);

        printf("Input price\n");
        line = readLine(stdin);
        bkdata[i]->price=atoi(line);
        free(line);
        printf("price = %d\n",bkdata[i]->price);
    }

        printf("\nBook Data\n\n");

    for (i=0;i<3;i++){
        printf("author = %s\n",bkdata[i]->author);
        printf("title = %s\n",bkdata[i]->title);
        printf("ISBN = %s\n",bkdata[i]->code_ISBN);
        printf("price = %d\n",bkdata[i]->price);
    }
    return 0;
}