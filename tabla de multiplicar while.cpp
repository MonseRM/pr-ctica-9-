#include<stdio.h>
int num,cont=0;
main()
{
	printf("------Tabla de multiplicar---------\n");
	printf("Ingresa el numero de la tabla que quieres\n");
	scanf("%d",&num);
	while (++cont<= 10)
	printf("%d x %d =%d\n", num, cont, cont*num);
}

