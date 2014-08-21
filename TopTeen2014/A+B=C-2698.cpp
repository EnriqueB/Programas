#include <iostream>

int main(){
	std::string input;
	int resp=0;
	std::cin>>input;
	for(int i=0; i<input.length(); i++){
		resp+=(input[i])-'A';
	}
	std::cout<<resp+input.length();
}
