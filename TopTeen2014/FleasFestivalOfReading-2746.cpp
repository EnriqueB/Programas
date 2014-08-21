#include <iostream>

int main(){
	int M=0, B=0;
	std::string inp;
	std::cin>>inp;
	for(int i=0; i<inp.length(); i++){
		if(inp[i]=='A' || inp[i]=='E' || inp[i]=='I' || inp[i]=='O' || inp[i]=='U')
			M++;
		else
			B++;
	}
	std::cout<<M<<" "<<B;
}
