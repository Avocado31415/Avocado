//1116215059 結城要
//第十三回宿題

#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 48

int main(void){
	
	
	int n,i,j,k;
	double wa,wa2,wa3,wa4;   //intだったからdoubleにした
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
	printf("%d都道府県です。\n",i);
	n=i;
	//店舗数でソート（アルゴリズムは自由）
    //降水量でソート
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
	
	//中央値

	if(n%2==0){
		med=((kousui[(n-2)/2]+kousui[n/2])/2.0);
	}else{
		med=(kousui[((n-1)/2)]);
    }
	
	printf("年間降水量の中央値は%lfです。\n",med);

	//平均値
	
	wa=0;
	for(k=0;k<n;k++){
		wa=wa + kousui[k];	
	}
	AVE=wa/(double)n;
	
	printf("年間降水量の平均値は%lfです。\n",AVE);
	
	//標準偏差
	
	wa2=0.0;
	for(k=0;k<n;k++){
		wa2=wa2+kousui[k]*kousui[k];
	}
	
	Sko=sqrt(wa2/(double)n-AVE*AVE);
	
	printf("年間降水量の標準偏差は%lfです。\n",Sko);
	
	//相関係数
	//http://knowledge-makers.com/wp-content/uploads/2019/06/%E6%89%8B%E8%A8%88%E7%AE%97%E3%81%A7%E7%9B%B8%E9%96%A2%E4%BF%82%E6%95%B0%E3%82%92%E6%B1%82%E3%82%81%E3%82%8B-565x283.png
    //を参考にした

    //xの平方和
	wa3=0.0;//2項目のためのやつ
	wa4=0.0;//1項目
	for(k=0;k<n;k++){
		nsto[k]=nstore[k]/(double)pop[k];//int/intになってたからテキトーに片方だけdoubleにしておいた
		wa3=wa3+nsto[k];//Σx
        Sko=wa3;
		wa4=wa4+nsto[k]*nsto[k];//Σ(x^2)
	}
	
	AVE=wa4-(wa3*wa3)/n;//xの平方和


    //yの平方和
    wa3=0.0;//2項目のためのやつ
	wa4=0.0;//1項目
	for(k=0;k<n;k++){
		wa3=wa3+kousui[k];//Σy
        Sns=wa3;
		wa4=wa4+kousui[k]*kousui[k];//Σ(y^2)
	}
	
	AVE2=wa4-(wa3*wa3)/n;//yの平方和


    //xとyの積和
    wa3=0.0;//2項目のためのやつ
	wa4=0.0;//1項目
    for(k=0;k<n;k++){
		wa3=Sko*Sns;//ΣxΣy
		wa4=wa4+nsto[k]*kousui[k];//Σ(xy)
	}
    
    Sns=wa4-wa3/n;

	
    r=Sns/(sqrt(AVE)*sqrt(AVE2));
	
	printf("相関係数は%lfです。",r);
	
	return 0;
}