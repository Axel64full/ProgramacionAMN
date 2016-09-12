#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
main()
{
	char cuenta, lectura;
	int a, b, c2, cletras=0, cbocales=0, bocales, n, cnumeros=0;
	FILE *archivo;

	archivo	=fopen("C:/users/Alumno/Desktop/tarea.txt", "r");
	
	if(archivo == NULL)
	{
		printf("no hay nada  \n");
		return 0;
	}
	
	while(!feof(archivo))
	{
	fscanf(archivo, "%c", &lectura);
	
	a=isalpha(lectura);// cuando no es letra da 0
	c2=isdigit(lectura);
	if(a!=0)
	{
			bocales=toascii(lectura);
			if(bocales==65)
			{
				cbocales++;
			}
			if(bocales==97)
			{
				cbocales++;
			}
			if(bocales==45)
			{
				cbocales++;
			}
			if(bocales==101)
			{
				cbocales++;
			}
			if(bocales==49)
			{
				cbocales++;
			}
			if(bocales==69)
			{
				cbocales++;
			}
			if(bocales==79)
			{
				cbocales++;
			}
			if(bocales==111)
			{
				cbocales++;
			}
			if(bocales==85)
			{
				cbocales++;
			}
			if(bocales==117)
			{
				cbocales++;
				
			}
			cletras++;
	}
	if(c2!=0)
	{
		cnumeros++;
	}
	
	}
	cnumeros=cnumeros-1;
	b=cletras-cbocales;
	
	printf("tu tienes %i  consonantes\n", b);
	printf("tu tienes %i  bocales\n", cbocales);
	printf("tu tienes %i numeros\n", cnumeros);
	
	return 0;
}

