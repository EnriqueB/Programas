#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int n, x;
	double a, b, resp;
	cin>>n;
	cout<<setprecision(10);
	while(n--){
		cin>>a>>b;
		resp=(a*b)/(a+b);
		resp=resp*resp;
		cout<<round(resp*10000.0)/10000.0<<endl;
	}
	return 0;
}
