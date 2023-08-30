#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
  char file[50];
  char buf[256];
  int nvrtcs,nfcs;
  int data_int[10];
  float x[5],y[5],z[5];
  int i,j;
  int flag = 0;
  FILE *fp;

  if(argc!=2){printf("引数にファイル名を入力してください\n");return 0;}

  fp = fopen(argv[1], "r");
  printf("< %s\n",argv[1]);
  if(fp==NULL){printf("%sが存在しません\n",file);return 0;}

  for(i=0; fgets(buf,256, fp)!=NULL; i++){

    if(strncmp(buf,"Mesh {",6)==0){
      flag=1;
      printf("%s",buf);
    }
    else if(flag==1){
      printf("%s",buf);
      sscanf(buf,"%d;",&nvrtcs);
      printf("nvrtcs= %d\n",nvrtcs);
      flag++;
    }
    else if(flag ==2){
      j=0;
      sscanf(buf,"%f;%f;%f;",&x[j],&y[j],&z[j]);
      printf("vertex %f %f %f\n",x[j],y[j],z[j]);
      j++;
      flag++;
    }
    else if((flag >2)&&(flag < nvrtcs+2)){
      sscanf(buf,"%f;%f;%f;",&x[j],&y[j],&z[j]);
      printf("vertex %f %f %f\n",x[j],y[j],z[j]);
      j++;
      flag++;
    }
    else if(flag == (nvrtcs+2)){
      flag++;
    }
    else if(flag == (nvrtcs+3)){
      sscanf(buf,"%d;",&nfcs);
      printf("nfcs= %d\n",nfcs);
      flag++;
    }
    else if(flag == (nvrtcs+4)){
        sscanf(buf,"%d;%d,%d,%d,%d;",&data_int[0],&data_int[1],&data_int[2],&data_int[3],&data_int[4]);
      printf("face %d;%d,%d,%d,%d;",data_int[0],data_int[1],data_int[2],data_int[3],data_int[4]);
      flag++;
    }

  }
  fclose(fp);
  return 0;
}