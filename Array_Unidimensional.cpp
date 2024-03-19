#include <iostream>
using namespace std;
main (){
	/*int tam=0,suma=0,promedio=0;
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
	int notas[tam]; 
	for(int i=0;i<tam;i++){
		cout<<"Ingrese nota "<<i+1<<":";
		cin>>notas[i];	
	}
	for(int i=0;i<tam;i++){
		suma += notas[i];
	}
	promedio = suma / tam;
	cout<<"El promedio es: "<<promedio<<endl;
	*/
	
	/*
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{       
		tam++;
		cout<<"Ingrese nota "<<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n):";
		cin>>res;
	}while(res=='s' || res=='S');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
	}
	promedio = suma / tam;
	cout<<"El promedio es: "<<promedio<<endl;
	*/
	
	char nombre[30];
	cout<<"Ingrese nombre completo: "<<endl;
	cin.get(nombre,30);
	cout<<nombre<<endl;
	system("pause");
}      
