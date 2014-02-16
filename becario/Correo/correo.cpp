#include <iostream>
#include <string>

using namespace std;

bool revisarCaracteresEspeciales(string a){
	for(int i=0; i<a.length(); i++){
		char aux = a[i];
		switch (aux){
			case '?':	case '!':
			case '#':	case '$':
			case '%':	case '^':
			case '&':	case '*':
			case '(':	case ')':
			case '-':	case '+':
			case '<':	case '>':
			case '[':	case ']':
			case ':':	case ',':
			case '|':	case '/':
				return false;
				break;
		}
	}
	return true;
}
bool revisarArrobas(string a){
	int cant=0;
	for(int i=0; i<a.length(); i++){
		if(a[i]=='@'){
			if(i==0)
				return false;
			if(i>=a.length()-2)
				return false;
			cant++;
		}
	}
	if(cant==1)
		return true;
	else
		return false;
}
bool revisarPuntos(string a){
	int pos=-1, posA=-1;
	//revisar posicion arroba y posiciones de los puntos
	for(int i=0; i<a.length(); i++){
		if(a[i]=='@')	posA=i;
		if(a[i]=='.'){
			if(i==pos+1){
				//dos puntos seguidos
				return false;
			}
			pos=i;		
		}
	}
	//si exactamente despues del arroba hay un punto se
	//regresa false
	if(a[posA+1]=='.')
		return false;
	int cant=0;
	for(int i=posA+1; i<a.length(); i++){
		if(a[i]=='.')
			cant++;
	}
	if(cant==1)	return true;
	else		return false;
}
int main(){
	bool esCorreo=true;
	string input;
	cin>>input;
	esCorreo=revisarCaracteresEspeciales(input);
	if(esCorreo){
		esCorreo=revisarArrobas(input);
		if(esCorreo){
			esCorreo=revisarPuntos(input);
		}
	}
	if(esCorreo)
		cout<<"Es un correo valido"<<endl;
	else
		cout<<"No es un correo valido"<<endl;
	return 0;
}
