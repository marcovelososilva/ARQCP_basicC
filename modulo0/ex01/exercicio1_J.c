#include <stdio.h>

int main()
{
	int b=1;
	long int c=232427539;
	float d =0.3;
	double e=0.232323;
	
	
char a='A';
printf ("\n Storage size for variable a : %u\n", sizeof (a));
printf ("\n Storage size for variable b : %u\n", sizeof (b));
printf ("\n Storage size for variable c : %u\n", sizeof (c));
printf ("\n Storage size for variable d : %u\n", sizeof (d));
printf ("\n Storage size for variable e : %u\n", sizeof (e));

	return 0;
}
