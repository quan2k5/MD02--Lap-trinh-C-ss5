#include <stdio.h>;
int main (){
	float revenue; 
	printf("nhap vao doanh thu ");
	scanf ("%f", &revenue);
	if (revenue>0 && revenue<=100){
	printf ("hoa hong duoc nhan la %f",revenue*5/100);
    }else if(revenue>100 && revenue<=300){
    	printf("hoa hong duoc nhan la %f",revenue*10/100);
    }else{
    	printf("hoa hong duoc nhan la %f",revenue*20/100);
	}
}
