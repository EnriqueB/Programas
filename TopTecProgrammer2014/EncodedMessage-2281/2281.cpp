#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
	int n, square;
	string inp, salida;
	cin>>n;
	while(n--){
		salida="";		
		cin>>inp;
		square=pow(inp.length(), .5);
		for(int i=square-1; i>-1; i--){
			for(int j=0; j<inp.length(); j+=square){
				salida+=inp[i+j];
			}	
		}
		cout<<salida<<endl;
	}
	return 0;
}
