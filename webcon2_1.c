#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct struct_dummy {
    char nc;
    struct struct_dummy *next;
} Seq;

int chkCdn(char sq[], char *cdn);
Seq *srchS(Seq *sq,char *startcdn);
Seq *srchE(Seq *sq,char *stopcdn[3]);
int freeLISTnodes(Seq *sq);

int main(int argc, char *argv[]){
    char mrna[]="GCAUGCAUGCGCAUGUGUAAGCAU";
    char startcdn[]="AUG";
    char *stopcdn[3] ={"UAA","UAG","UGA"};
    Seq *sq1;
    Seq *sq2;
    Seq *sq2stop;
    Seq *sq2end;
    Seq *pt;
    int numfound;
    int nth=0;
    numfound = chkCdn(mrna,startcdn);
    printf("%d\n",numfound);
    sq1 = (Seq *)malloc(sizeof(Seq));
    pt= sq1;
    for(nth=0;nth<strlen(mrna)-1;nth=nth+1){
        pt->nc=mrna[nth];
        pt->next= (Seq *)malloc(sizeof(Seq));
        pt=pt->next;
    }
    pt->nc=mrna[nth];
    pt->next=NULL;
    for(pt=sq1;pt!=NULL;pt=pt->next){
        printf("%c",pt->nc);
    }
    printf("\n");
    sq2=srchS(sq1,startcdn);
    if(sq2==NULL){
    printf("Start: Not found\n");
    } else {
        sq2stop=srchE(sq2,stopcdn);
        if(sq2stop==NULL){
            printf("Stop: Not found\n");
        } else {
            sq2end=sq2stop->next->next->next;
            for(pt=sq2;pt!=sq2end;pt=pt->next){
                printf("%c",pt->nc);
            }
        printf("\n");
        }
    }
    freeLISTnodes(sq1);
    return 0;
}

int chkCdn (char sq[], char *cdn){
    int i,f=0;

    for(i = 0; i < strlen(sq); i++){
        if((*cdn == sq[i]) && (*(cdn+1) == sq[i+1]) && (*(cdn+2) == sq[i+2])){
            f++;
        }
    }
    return f;
}

Seq *srchE (Seq *sq, char *stopcdn [3]){
    int i;
    int count = 0;

    while(sq != NULL){
        if(count % 3 == 0){
            for(i = 0; i < 3; i++){
                if(sq->nc == stopcdn[i][0]){
                    if(sq->next->nc == stopcdn[i][1]){
                        if(sq->next->next->nc == stopcdn[i][2]){
                            return sq;
                        }
                    }
                }
            }
        }
        sq = sq->next;
        count++;
    }
    return NULL;
}


Seq *srchS(Seq *sq,char *startcdn){

    Seq* pt;
    for(pt = sq; pt != NULL; pt = pt->next){
        if((pt->nc) == *startcdn){
            if((pt->next->nc) == *(startcdn+1)){
                if((pt->next->next->nc) ==  *(startcdn+2)){
                    return pt;
                }
            }
        }
    }
    return NULL;
}

int freeLISTnodes(Seq *sq){

    Seq *pt1;
    Seq *pt2;
    
    for(pt1 = sq; pt1 != NULL; pt1 = pt2){
        pt2=pt1->next;
        free(pt1);
    }
    return 0;
}