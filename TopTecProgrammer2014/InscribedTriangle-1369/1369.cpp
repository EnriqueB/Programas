#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double L, N, K;
	cin>>L>>N>>K;
	while(L!=0 && N!=0 && K!=0){
		double part=L/N;
		double a=K*part;
		double b=(N-K)*part;
		double c=a*a+b*b-a*b;
		c=c*pow(3.0, .5)/4;
		c=round(c);
		cout<<(int)c<<endl;
		cin>>L>>N>>K;
	}
	return 0;
}
