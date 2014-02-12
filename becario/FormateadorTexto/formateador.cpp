#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//esta funcion agrega espacios entre caracteres
string Espaciar (string a){
	string resp="";
	for(int i=0; i<a.length(); i++){
		resp=resp+a[i]+' ';
	}
	return resp;
}

//esta funcion justicia la oracion 'a' dada una longitud deseada 's'
string Justificar (string a, int s){
	//Si la oracion es igual o mas larga que la longitud especificada
	//se regresa la oracion original
	if (a.length()>= s){
		return a;
	}
	int cant=0;
	//se cuenta la cantidad de espacios
	for(int i=0; i<a.length(); i++){
		if(a[i]==" "){
			cant++;
		}
	}
	//se calcula la cantidad de espacios a agregar
	int dif = s-a.length();
	int pE=0, dE=0;
	//si no existen espacios se regresa la oracion original
	if(cant==0){
		return a;
	}
	if(cant==1){
		pE=dif;
	}
	//se asigna la cantidad de espacios por espacio que se agregaran
	//en caso de no ser una division exacta se le suma un espacio al
	//primer espacio en la oracion
	else{
		if(dif%cant!=0){
			pE=(dif/cant)+1;
			dE=dif/cant;
		}
		else{
			pE=dE=dif/cant;
		}
	}
	//se busca el primer espacio
	int pos=a.find(" ", 0);
	for(int i=0; i<pE; i++){
		a.insert(pos, " ");
	}
	//se asignan el resto de los espacios
	for(int i=0; i<cant-1; i++){
		pos=a.find(" ", pos+1);
		for(int j=0; j<dE; j++){
			a.insert(pos, " ");
		}
	}
	return a;
}

//esta funcion alinea el texto a la derecha de acuerdo 
//a una longitud maxima s especificada
string Derecha (string a, int s){
	while(a.length()<s){
		a.insert(0, " ");
	}
	return a;
}	

//esta funcion alinea el texto a la izquierda
string Izquierda(string a){
	while(a[0]==" "){
		a.erase(0);
	}
	return a;
}

//esta funcion alinea el texto al centro de acuerdo 
//a una longitud maxima s especificada
string Centrado(string a, int s){
	//si 'a' es mayor o igual que la longitud deseada
	//se regresa el valor de 'a' original
	if(a.length()>=s){
		return a;
	}
	int dif = s-a.length();
	if(dif==1){
		a.insert(0, " ");
	}
	else{
		int eI=0, eF=0;
		if(dif%2==0){
			eI=eF=dif/2;
		}
		else{
			eF=dif/2;
			eI=eF+1;
		}
		for(int i=0; i<eI; i++){
			a.insert(0, " ");
		}
		for(int i=0; i<eF; i++){
			a.insert(a.end(), " ");
		}		
	}
	return a;
}
int main(){
	string input="", output"";
	bool opciones [5];
	ifstream entrada;
	entrada.open("a.txt");
	ofstream salida;
	salida.open("a2.txt");
	int tam=0;
	entrada>>tam;
	while(getline(entrada, input)){
		if(entrada[0]=='<'){
			memset(opciones, false, sizeof(opciones));
			switch(entrada[1]){
				case 'E':
					opciones[0]==true;
					break;
				case 'C':
					opciones[1]==true;
					break;
				case 'J':
					opciones[2]==true;
					break;
				case 'D':
					opciones[3]==true;
					break;
				case 'I':
					opciones[4]==true;
					break;
			}
		}
		else{
			if(opciones[0]){
				output=Espaciar(input);
			}
			if(opciones[1]){
				output=Centrado(input, tam);
			}
			if(opciones[2]){
				output=Justificar(input, tam);
			}
			if(opciones[3]){
				output=Derecha(input, tam);
			}
			if(opciones[4]){
				output=Izquierda(input);
			}
			salida<<output<<endl;
		}

	}
	salida.close();
	return 0;
}
