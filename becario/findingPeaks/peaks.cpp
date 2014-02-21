#include <iostream>
#include <string.h>
using namespace std;
int matriz [100][100];
bool checkPeak(int i, int j){
	if(matriz[i][j]<matriz[i-1][j]) return false;
	if(matriz[i][j]<matriz[i+1][j])	return false;
	if(matriz[i][j]<matriz[i][j-1])	return false;
	if(matriz[i][j]<matriz[i][j+1])	return false;
	return true;
}
int main(){
	int r, c;
	memset(matriz, -1, sizeof(matriz));
	cout<<"Ingrese cantidad de renglones: ";
	cin>>r;
	cout<<"Ingrese cantidad de columnas: ";
	cin>>c;
	cout<<"Ingrese los elementos:"<<endl;
	for(int i=1; i<r+1; i++){
		for(int j=1; j<c+1; j++){
			cin>>matriz[i][j];
		}
	}
	bool peak=false;
	for (int i=1; i<r+1; i++){
		for(int j=1; j<c+1; j++){
			peak=checkPeak(i, j);
			if(peak){
				cout<<"Se encontro un peak en la posicion "<<i-1<<", "<<j-1<<endl;
				cout<<"El elemento es el: "<<matriz[i][j]<<endl;
				break;
			}
		}
		if(peak)	break;
	}
	return 0;
}
