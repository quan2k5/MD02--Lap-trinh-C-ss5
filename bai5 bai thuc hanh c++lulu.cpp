#include <stdio.h>
int main(){
	int day, month,year;
	printf("nhap vao ngay,thang,nam sinh  ");
	scanf("%d%d%d",&day,&month,&year);
	if (year<=0){
		printf("khong hop le");
	}else{
	switch(month){
		case 1:
		if(day>0 && day<=19){
			printf("cung ma ket");
		}else if(day>19 && day<=31){
		   printf("cung bao binh");
	}else{
		printf("khong hop le");
	}
	break;
	    case 2:
	    if (day>=1 && day <=18){
	    printf("cung bao binh");
	    }else if((year%4==0 && year%100!=0)||year%400==0){
	    	if(day>18 && day<=29){
	    		printf("cung song ngu");
			}
		}else if(day>18 && day<=28){
			printf("cung song ngu");
		}else{
			printf ("khong hop le");
		}
		break;
		case 3:			
		if(day>0 && day<=20){
			printf("cung song ngu");
		}else if(day>20 && day<=31){
		   printf("cung bach duong");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    case 4:			
		if(day>0 && day<=20){
			printf("cung bach duong");
		}else if(day>20 && day<=30){
		   printf("cung kim nguu");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    case 5:			
		if(day>0 && day<=20){
			printf("cung kim ngu");
		}else if(day>20 && day<=31){
		   printf("cung song tu");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    case 6:			
		if(day>0 && day<=21){
			printf("cung kim ngu");
		}else if(day>21 && day<=30){
		   printf("cung cu giai");
	    }else{
		printf("khong hop le");
	    }
	    break;
	     case 7:			
		if(day>0 && day<=22){
			printf("cung cu giai");
		}else if(day>22 && day<=31){
		   printf("cung su tu");
	    }else{
		printf("khong hop le");
	    }
	    break;
	     case 8:			
		if(day>0 && day<=22){
			printf("cung su tu");
		}else if(day>22 && day<=31){
		   printf("cung xu nu");
	    }else{
		printf("khong hop le");
	    }
	    break;
	     case 9:			
		if(day>0 && day<=22){
			printf("cung xu nu");
		}else if(day>22 && day<=30){
		   printf("cung thien binh");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    case 10:
	    if(day>0 && day<=23){
			printf("cung thien binh");
		}else if(day>23 && day<=31){
		   printf("cung bo cap");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    case 11:
	    if(day>0 && day<=22){
			printf("cung bo cap");
		}else if(day>=23 && day<=30){
		   printf("cung nhan ma");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    case 12:
	    if(day>0 && day<=21){
			printf("cung nhan ma");
		}else if(day>=22 && day<=31){
		   printf("cung ma ket");
	    }else{
		printf("khong hop le");
	    }
	    break;
	    default:
	    printf("khong hop le");
        }
    }
}  
	    
	    
	    
	    
