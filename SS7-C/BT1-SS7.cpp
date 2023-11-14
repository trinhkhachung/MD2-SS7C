#include<stdio.h>
int main (){
	int i;
	for(i=1;i<101;i++){
		if (i%3==0&&i%5==0){
			printf("so %d chia het cho ba va nam FizzBuzz\n",i);
		}else if (i%5==0){
			printf("so %d chia het cho nam Buzz\n",i);
		}else if (i%3==0){
			printf("so %d chia het cho ba \n",i);
		}
	}
}
