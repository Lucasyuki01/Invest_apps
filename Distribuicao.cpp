#include <stdio.h>

int main(){
	float din, setimaparte;
	
	printf("Quantidade: ");
	scanf("%f", &din);
	
	setimaparte = din/7;
	
	printf("\nFINANCEIRO\n");
	printf("BBAS3 = %.2f\n", setimaparte* 0.35);
	printf("ITUB4 = %.2f\n", setimaparte* 0.4);
	printf("ALSO3 = %.2f\n", setimaparte* 0.25);
	
	printf("\nSAUDE\n");
	printf("BALM3 = %.2f\n", setimaparte* 0.5);
	printf("NRTQ3 = %.2f\n", setimaparte* 0.5);
	
	printf("\nSANEAMENTO\n");
	printf("SBSP3 = %.2f\n", setimaparte* 0.35);
	printf("CSMG3 = %.2f\n", setimaparte* 0.40);
	printf("SAPR11 = %.2f\n", setimaparte* 0.25);
	
	printf("\nMATERIAIS BASICOS\n");
	printf("GGBR3 = %.2f\n", setimaparte* 0.50);
	printf("DXCO3 = %.2f\n", setimaparte* 0.30);
	printf("EUCA3 = %.2f\n", setimaparte* 0.20);
	
	printf("\nENERGIA\n");
	printf("CMIG43 = %.2f\n", setimaparte* 0.50);
	printf("NEOE3 = %.2f\n", setimaparte* 0.40);
	printf("TRPL4 = %.2f\n", setimaparte* 0.10);
	
	printf("\nPETROLEO\n");
	printf("PETR4 = %.2f\n", setimaparte* 0.65);
	printf("ENAT3 = %.2f\n", setimaparte* 0.35);
	
	printf("\nBENS INDUSTRIAIS\n");
	printf("RAPT4 = %.2f\n", setimaparte);
}
