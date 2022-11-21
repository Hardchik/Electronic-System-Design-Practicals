#include<reg51.h>

void msdelay(unsigned int timer) {
	unsigned i, j;
	for(i=0;i<timer;i++) {
		for(j=0;j<1275;j++);
	}
}

void main(){
	unsigned char no_code[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
	int k;
	while(1) {
		for(k=0;k<10;k++) {
			P2=no_code[k];
			msdelay(100);
		}
	}
}