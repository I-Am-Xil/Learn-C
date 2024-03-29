/*
	Funciones recursivas en C
*/
#include <stdio.h>
long Factorial(long numero);
int main()
{
	/*
		Ejemplo del factorial de un número
		5! = 5*4*3*2*1	o	5*4!
		4! = 4*3*2*1	o	4*3!
		3! = 3*2*1		o	3*2!
		2! = 2*1		o	2*1!
		1! = 1
		0! = 1
	*/
	int numero;
	printf("ingresa un número\n");
	scanf("%i",&numero);
	for (int i = 0; i <= numero; ++i)
	{
		printf("%ld\n",Factorial(i));
	}
	return 0;
}
long Factorial(long numero)
{
	if(numero <= 1)
	{
		return 1;
	}else{
		return(numero * Factorial(numero-1));
	}
}