#include <iostream>

using namespace std;

int main(){
	int D, H, M, T, D2=11, H2=11, M2=11;
	while(cin>>D>>H>>M){
	if(M<11){	
		H--;
		M+=60;
	}
	M-=M2;
	if(H<H2){
		D--;
		H+=24;
	}
	H-=H2;
	if(D<D2){
		cout<<-1<<endl;
	}
	else{
		D-=D2;
		T=M+H*60+D*24*60;
		cout<<T<<endl;
	}
	}
	return 0;
}
