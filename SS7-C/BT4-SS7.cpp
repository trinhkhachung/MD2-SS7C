#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main (){
	int n;
	int sum=0;
	int count=0;
	long int tich=1;
	printf("nhap vao so n de thuc hien");
	scanf("%d",&n);
	do{
		printf("-------------INTEGER NUMBER------------\n");
		printf("1.in ra day so co gia tri <= n va tinh tong\n");
		printf("2.in ra va dem cac so chia het cho 3 nho hon n\n");
		printf("3.kiem tra so nguyen co phai so nguyen to hay ko\n");
		printf("4.kiem tra so co phai so hoan hao hay khong\n");
		printf("5.tinh tong cac uoc so cua n\n");
		printf("6.tinh giai thua n\n");
		printf("7.in ra so dao nguoc cua n\n");
		printf("8.in ra so nguyen to tu 1-n\n");
		printf("9.thoat\n");
		int interger_number;
		scanf("%d",&interger_number);
		switch(interger_number){
			case 1:
				for(int i=0;i<=n;i++){
					printf("%d\n",i);
					sum +=i;
				}
				printf("tong cac so la: %d \n",sum);
				break;
			case 2:
				if(n%3==0){
					printf("so chia het cho 3 la: %d\n",n-3);
				}else{
					printf("so %d khong chia het cho 3\n",n);
				}
				break;
			case 3:
				if(n<2){
					printf("%d khong phai la so nguyen to\n",n);
				}
				for(int i=2;i<=sqrt(n);i++){
					if(n % i ==0){
						count++;
					}
				}
				if(count==0){
					printf("%d la so nguyen to \n",n);
				}else{
					printf("%d khong phai la so nguyen to\n",n);
				}
				break;
			case 4:
				for(int i=1;i<n/2;i++){
    			if(n%i==0){
   					sum+=i;
    				}
				}
				if(sum==n){
					printf("so nay la so hoan hao\n"); 
				}else{
					printf("so nay khong phai so hoan hao\n"); 
				}
        	    break;
        	case 5:
        		for(int i=1;i<=n;i++){
      		    if(n%i==0){
      			 sum+=i;
				  }
			  }
                 printf("tong cac uoc la:%d\n",sum); 
        			break;
        	case 6:
        		for(int i=1;i<=n;i++){
      				tich*=i;	
		  			}
        			printf("giai thua den n la:%d\n",tich);
       		 	break;
        	case 7:
        		printf("%d",n);
        		break;
        	case 8:
        		for(int i=2;i<=n;i++){
        		count = 0;
        		for(int j=2;j<i;j++){
	    		if (i % j == 0) {
        		count ++;
        		    }
       			if (count == 0){
        		printf("%d\n",i);
				}
        	}
   }
        break;
      		case 9:
        		exit(0);
      		default:
        		printf("Vui long chon tu 1-9\n");
        		
        
		}
	}while("moi nhap lai");
}
