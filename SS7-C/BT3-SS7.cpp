#include <stdio.h>
int main(){
	float money,profit,month,interest;
	printf("nhap so tien gui:");
	scanf("%f",&money);
	printf("nhap so phan tram lai 1 nam :");
	scanf("%f",&profit);
	printf("nhap so thang:");
	scanf("%f",&month);
	for(int i=1;i<month;i++){
	interest=money*(profit/12)/100;
	money+=interest;1
	}
	printf("tien nhan duoc la: %f nghin",money);
}

