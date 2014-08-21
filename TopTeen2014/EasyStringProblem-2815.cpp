#include <iostream>
#include <string>

int main(){
	std::string T, P;
	int n, count;
	std::cin>>n;
	while(n--){
		count=0;
		std::cin>>T>>P;
		std::size_t found = T.find(P);
		while(found!=std::string::npos){
			count++;
			T.erase(found, P.length());
			found = T.find(P);
		}
		std::cout<<count<<std::endl;
	}
}
			
