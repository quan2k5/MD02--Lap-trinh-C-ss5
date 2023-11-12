#include <stdio.h>
int main (){
	float minute;
	printf("nhap vao so phut da su dung ");
	scanf("%f",&minute);
	float minute1= (float)25000/600; 
	if(minute>0 && minute<=50){
		if(minute>minute1 ){
	printf ("cuoc dien thoai phai  tra la %f",(minute-minute1)*600);
    }else{
    	printf("ko phai tra phi "); 
	}   		
    }else if (minute>50 && minute<=200){
	printf ("cuoc dien thoai phai tra la %f",(50-minute1)*600+(minute-50)*400);	
    }else if (minute>200 && minute<=400){
    printf ("cuoc dien thoai phai tra la %f",(50-minute1)*600+(200-50)*400+(minute-200)*200);
    }else{	
		printf ("cuoc dien thoai phai tra la %f",(50-minute1)*600+(200-50)*400+(400-020)*200+(minute-400)*100);
    }  
}
