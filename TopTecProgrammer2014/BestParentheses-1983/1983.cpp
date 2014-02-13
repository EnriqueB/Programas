#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <long long> pila;
	long long input, n, mod=12345678910;
	cin>>n;
	pila.push(0);
	while(n--){
		cin>>input;
		if(input!=0){
			long long aux=pila.top();
			pila.pop();
			long long aux2=pila.top();
			pila.pop();
			if(aux!=0){
				pila.push(((2*aux)+aux2)%mod);
			}
			else{
				pila.push((aux2+1)%mod);
			}
		}
		else{
			pila.push(0);
		}
	}
	cout<<pila.top()<<endl;
	return 0;
}
