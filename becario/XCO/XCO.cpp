#include <iostream>

using namespace std;

int main(){
	char matriz[100][100];
	int tam;
	cout<<"Ingrese la dimension deseada: ";
	cin>>tam;
	memset(matriz, '_', sizeof(matriz));
	for(int i=0; i<tam; i++){
		matriz[i][i]=matriz[i][tam-i-1]='X';
		for(int j=0; j<tam; j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	memset(matriz, '_', sizeof(matriz));
	for(int i=0; i< tam; i++){
		matriz[0][i]=matriz[i][0]=matriz[tam-1][i]='X';
	}
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	memset(matriz, '_', sizeof(matriz));
	for(int i=0; i< tam; i++){
		matriz[0][i]=matriz[i][0]=matriz[tam-1][i]=matriz[i][tam-1]='X';
	}
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	return 0;
}
