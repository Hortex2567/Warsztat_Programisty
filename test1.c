#include <stdio.h>

int main()
{
	double pi, pole, r;
	pi=3.14;
	
	printf("Podaj promien kola:\n");
	scanf("%lf", &r);
	
	pole = (r*r)*pi;
	printf("Pole kola jest rowne %f", pole);
	
	return 0;
}
