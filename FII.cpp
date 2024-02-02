#include <stdio.h>

int main(){
	float din;
	
	printf("Quantidade: ");
	scanf("%f", &din);
	
	printf("KNRI11: %.2f\n", din * 0.4);
	printf("XPLG11: %.2f\n", din * 0.3);
	printf("VISC11: %.2f\n", din * 0.2);
	printf("BTLG11: %.2f\n", din * 0.1);
}
