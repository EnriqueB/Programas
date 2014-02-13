#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <long long> pila;
	long long input, n;
	cin>>n;
	while(n--){
		cin>>input;
		if(!pila.empty()){
			if(input==0){
				pila.push(-1);
			}
			if(input==1){
				if(pila.top()==-2){
					pila.push(-2);
				}
				if(pila.top()==-1){
					pila.pop();
					long long aux=0;
					if(pila.top()>-1){
						aux=pila.top();
						pila.pop();
					}			
					pila.push((aux+1)%12345678910);
				}
				else{
					long long aux=2*pila.top();
					aux=aux%12345678910;
					long long aux2=0;
					pila.pop();
					if((pila.top()!=-1)&&(pila.top()!=-2)){
						aux2=pila.top();
						pila.pop();
					}
					pila.push((aux+aux2)%12345678910);
				}
			}
		}
		else{
			pila.push(-1);
		}
	}
	cout<<pila.top();
	return 0;
}
