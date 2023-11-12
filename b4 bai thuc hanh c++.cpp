#include<stdio.h>
int main(){
	float  total;
	printf ("nhap tong thu nhap cua nhan vien truoc thue");
	scanf ("%f",&total);
	if (0<total && total<=5000000){
		printf("luong sau thue  la %f va thue thu nhap la %f",total-total*5/100,total*5/100);
	}else if (total>5000000 && total<=10000000){
	    printf("luong sau thue  la %f va thue thu nhap la %f",total-total*10/100,total*10/100);	
	}else if (total>10000000 && total<=18000000){
	    printf("luong sau thue la %f va thue thu nhap la %f",total-total*15/100,total*15/100);	
	}else if (total>18000000 && total<=32000000){
		printf("luong sau thue la %f vat thue thu nhap la %f",total-total*20/100,total*20/100);	
	}else if (total>32000000 && total<=52000000){
	    printf("luong sau thue la %f va thue thu nhap la %f",total-total*25/100,total*25/100);	
    }else if (total>52000000 && total<=80000000){
	    printf("luong sau thue la %f va thue thu nhap la %f",total-total*30/100,total*30/100);
	}else{
		printf("luong sau thue la %f va thue thu nhap la %f",total-total*35/100,total*35/100);
	} 
} 
