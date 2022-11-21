#include<reg51.h>
// 

void msdelay(unsigned int time) {
	unsigned i,j;
	for(i=0;i<time;i++) {
		for(j=0;j<1275;j++);
	}
}

void main() {
	while(1) {
		P2 = 0x01;		// A=0 , B=0, C=0, D=1
		msdelay(1);
		P2 = 0x02;		// ABCD = 0010
		msdelay(1);
		P2 = 0x04;		// ABCD = 0100
		msdelay(1);
		P2 = 0x08;		// ABCD = 1000
		msdelay(1);
	}
}