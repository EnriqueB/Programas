#include <iostream>

using namespace std;

int main(){
	int tam, shifts, arr[100];
	cout<<"Ingrese el largo del arreglo: ";
	cin>>tam;
	for(int i=0; i<tam; i++){
		cin>>arr[i];
	}
	cout<<"Ingrese la cantidad de espacios a mover: ";
	cin>>shifts;
	int n, i=shifts;
	for(n=0; n<tam; n++, i++){
	       if(i==tam)	i=0;
       		cout<<arr[i]<<" ";	       
	}
	cout<<endl;
	for(n=0, i=tam-shifts; n<tam; n++, i++){
		if(i==tam)	i=0;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
