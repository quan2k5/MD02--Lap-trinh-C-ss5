#include <stdio.h>
int main(){
	float a,b,c;
	printf ("nhap a,b,c");
	scanf ("%f %f %f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf ("phuong trinh vo so nghiem");
			}else{
				printf ("phuong trinh vo nghiem");
			}
		}else{
			printf ("phuong trinh co nghiem x la %f",(float)-c/b);
		}
	}else if (b*b-4*a*c<0){
		printf("phuong trinh vo nghiem");
	}else if (b*b-4*a*c==0){
		printf ("phuong trinh co nghiem kep la %f va %f",(float)-b/2*a,(float)b/2*a);
	}else{
		printf ("phuong trinh co 2 nghiem la x1=%f va x2=%f",(float)(-b*+ (b*b-4*a*c))/(2*a),(float)(-b- (b*b-4*a*c))/(2*a));
	}
}	
		
	

