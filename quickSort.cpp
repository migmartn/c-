#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(float &x, float &y){
	float aux;
	aux =x;
	x=y;
	y=aux;
	
}

void quickSort(float a[], int primero, int ultimo){
	int i,j,central;
	float pivote;
	central = (primero+ultimo)/2;
	pivote= a[central];
	i= primero;
	j=ultimo;
/*	for(int c=0; c<=a[10]; c++){
     cout<<a[c];	
	}*/
	do{
		cout<<"\ni="<<i<<"\nj="<<j<<"\npivote="<<pivote<<"\n";
		while(a[i]<pivote)i++;
		while(a[j]>pivote)j--;
		
		if(i<=j){
			intercambio(a[i],a[j]);
			i++;
			j--;	
		}
		
	}while(i<=j);
	if(primero<j){
		quickSort(a, primero,j);
	}
	if(i<ultimo){
		quickSort(a,i, ultimo);
	}
}
int main(){
	float arreglo[]={4,7,1,8,2,10,5,9,3};
	quickSort(arreglo, 0,8);
	cout<<"arreglo ordenado acendente"<<endl;
	for(int i=0; i<9;i++){
		cout<<arreglo[i]<<"|";
	}
	cout<<"\n\narreglo ordenado decendente"<<endl;
	for(int i=8; i>=0;i--){
		cout<<arreglo[i]<<"|";
	}
	
	
	getch();
	return 0;
}
