#include<stdio.h>
int num,cont=1;
main()
{
	printf("-----Tabla de multiplicar-----\n");
	printf("Ingresa el numero de la tabla que quieres\n");
	scanf("%d",&num);
	do 
	{
		printf("%d x %d =%d\n", num, cont, cont*num);	
	}
	while (++cont<=10);
}
