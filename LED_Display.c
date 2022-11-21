#include<reg52.h>

// 8bit LED = P2;

void Delay(void);

void main(void) {
	while(1){
		P2 = 0;
		Delay();
		P2 = 1;
		Delay();
	}
}

void Delay(void) {
	int j;
	int i;
	for(i=0;i<10;i++) {
		for(j=0;j<10000;j++);
	}
}