#include <stdio.h>

int main()
{
	double pi, pole, r;
	
	pi=3.14;
	printf("Podaj promien kola\n");
	scanf("%f", &r);
	printf("%f", &r);
	
	pole = r*r*pi;
	printf("Pole kola jest rowne %f", pole);
}
