#include <stdio.h>

int main ()
{
	int inteiro;
	int sizeInteiro = sizeof(inteiro);
	char cara;
	int caracter= sizeof(cara);
	long int intlongo;
	int inteiroLongo= sizeof(intlongo);
	float decifloat;
	int decimalF = sizeof (decifloat);
	double decidouble;
	int decimalD= sizeof (decidouble);
	
	printf ("O int é: %d\n", sizeInteiro);
	printf ("O char é: %d\n", caracter );
	printf ("O long int é: %d\n", inteiroLongo );
	printf ("O float é: %d\n", decimalF );
	printf ("O double é: %d\n", decimalD );
	
	return 0;
}
