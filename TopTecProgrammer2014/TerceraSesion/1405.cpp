#include <iostream>
using namespace std;
int main(){
	long long int n, inp;
	cin>>n;
	while(n--){
		cin>>inp;
		if(inp==1){
			cout<<1<<endl;
		}
		else if(inp==2){
			cout<<2<<endl;
		}
		else if(inp==3){
			cout<<4<<endl;
		}
		else if(inp==4){
			cout<<8<<endl;
		}
		else{
			long long int resp=(inp-3)*(inp-2)*(inp-1)*inp/24;
			resp+=((inp-1)*inp/2)+1;
			cout<<resp<<endl;
		}
	}
	return 0;
}
