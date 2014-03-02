#include <iostream>

using namespace std;

int main(){
	int arr [100];
	int t;
	cout<<"Ingrese el largo del arreglo: ";
	cin>>t;
	cout<<"Ingrese ahora los valores del arreglo: "<<endl;
	for(int i=1; i<t+1; i++){
		cin>>arr[i];
	}
	arr[0]=arr[t];
	arr[t+1]=arr[1];
	int i;
	bool peak=false;
	for(i=1; i<t+1; i++){
		if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
			cout<<"Se encontro que el elemento: "<<arr[i]<<" es un peak\n";
			peak=true;
		}
	}
	if(!peak){
		cout<<"No se encontraron peaks\n";
	}
	return 0;
}
