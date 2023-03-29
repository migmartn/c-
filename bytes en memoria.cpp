#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int number, opc, x=1;
	char caracter ;
	while(x==1){
	printf("\nopcion 1: ");
	printf("\nopcion 2: ");
	printf("\nelige una opcion: ");
	scanf("%i", &opc);
	if(opc==1)
{
	printf("\nIngresa un numero: ");
	scanf("%i", &number);
	printf(" espacio en memoria,""%lu\n",sizeof(number));
}
if(opc==2){
    printf("Ingresa un caracter: ");
	scanf("%s", &caracter);
	printf("espacio en memoria, ""%lu\n",sizeof(caracter));
}
}
	return 0;
	getch();
}
