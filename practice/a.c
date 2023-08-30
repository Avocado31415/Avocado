//1116215059 結城要
//第十三回宿題

#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 48

int main(void){
	
	
	int n,i,j,k;
	int wa,wa2,wa3,wa4;
	char name[MAX][21];   //都道府県名
	int nstore[MAX];      //ラーメン店舗数
	int pop[MAX];         // 人口(1000人)
	int kousui[MAX];      //年間降水量(mm)
	
	char swap_name[21];
	int swap_pop;
	int swap_nstore;
	int swap_kousui;
	
	double med;
	double AVE,AVE2;
	double Sko,Sns;
	double nsto[MAX];//1000当たりのラーメン店舗数
	double r;
	
	FILE*fp;
	
	fp=fopen("data.txt","r");
	
	for(i=0;i<MAX;i++){
		if(fscanf(fp,"%s %d %d %d",&name[i],&nstore[i],&pop[i],&kousui[i])==EOF){//%dが1つ足りてなかったのとデータの順番（県名・店舗数・人口・降水）が違っていた(＆の所)
            break;			
        }
	}
	
	fclose(fp);
	//iはデータの都道府県
	printf("%d都道府県です\n",i);
	n=i;
	//店舗数でソート（アルゴリズムは自由）
    
	for(i=0;i<(MAX-1);i++){
		for(j=(i+1);j<MAX;j++){
				if(kousui[i]<kousui[j]){
					swap_kousui=kousui[j];
					kousui[j]=kousui[i];
					kousui[i]=swap_kousui;
						
					strcpy(swap_name,name[j]);
					strcpy(name[j],name[i]);
					strcpy(name[i],swap_name);
						
					swap_nstore=nstore[j];
					nstore[j]=nstore[i];
					nstore[i]=swap_nstore;
						
					swap_pop=pop[j];
					pop[j]=pop[i];
					pop[i]=swap_pop;
			}
		}
	}

	for(n=0;n<=i;n++){
		printf("%d\n",kousui[n]);
	}
}