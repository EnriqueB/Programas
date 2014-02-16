#include <iostream>
#include <stack>

using namespace std;

int traducir(string a){
	int resp=0;
	for(int i=0; i<a.length(); i++){
		if(a[i]=='.')		resp++;
		else if(a[i]=='-')	resp+=5;
		else if(a[i]==':')	resp+=2;
		else if(a[i]=='=')	resp+=10;
	}
	return resp;
}	

int main(){
	stack <int> pila, aux;
	int n;
	string inp;
	cin>>n;
	cin>>inp;
	pila.push(traducir(inp));
	while(n--){
		cin>>inp;
		if(inp[0]=='+')	pila.push(-1);
		else		pila.push(-2);
		cin>>inp;
		pila.push(traducir(inp));
	}
	while(!pila.empty()){
		aux.push(pila.top());
		pila.pop();
	}
	while(!aux.empty()){
			if(aux.top()>=-1){
				pila.push(aux.top());
				aux.pop();
			}
			else if(aux.top()==-2){
				aux.pop();
				int res=pila.top()*aux.top();
				pila.pop();
				aux.pop();
				pila.push(res);
				if(aux.empty())	break;
			}
	}
	while(!pila.empty()){
		if(pila.top()>0){
			aux.push(pila.top());
			pila.pop();
		}
		else{
			pila.pop();
			int res=pila.top()+aux.top();
			pila.pop();
			aux.pop();
			aux.push(res);
			if(pila.empty())	break;
		}
	}
	cout<<aux.top()<<endl;
	return 0;
}
