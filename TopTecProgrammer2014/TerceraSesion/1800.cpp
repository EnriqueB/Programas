#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long mod(long long a, long long b){
	return ((a%b)+b)%b;
}
long long modpow(long long base, long long exp, long long modulus){
	base = mod(base, modulus);
	long long result =1;
	while(exp){
		if(exp&1)	result=mod(result*base,modulus);
		base =mod(base*base, modulus);
		exp>>=1;
	}
	return result;
}
int main(){
	int negativos[50000];
	int n;
	cin>>n;
	while(n--){
		long long suma=0;
		long long mode=1000000009;
		int cantP=0, cantN=0, cantZ=0;
		int cant, inp;
		cin>>cant;
		while(cant--){
			cin>>inp;
			if(inp==0){
				cantZ++;
			}	
			else if(inp>0){
				suma=(suma+inp);
				cantP++;
			}
			else if(inp<0){
				negativos[cantN]=inp;
				cantN++;
			}
		}
		if(cantP>0){
			long long resp=(long long)pow(2.0, (double)cantZ)%mode;
			cout<<suma<<" "<<resp<<endl;
		}
		else if (cantZ>1){
			cout<<0<<" "<<mod(modpow(2, cantZ, mode)+mode-1, mode)<<endl;
		}
		else{
			sort(negativos, negativos+cantN, greater<int>());
			int min=negativos[0];
			int i=1;
			while(negativos[i]==min && i<cantN){
				i++;
			}
			cout<<min<<" "<<i<<endl;
		}
	}
	return 0;
}
