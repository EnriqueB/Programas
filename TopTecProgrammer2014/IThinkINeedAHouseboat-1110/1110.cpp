#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n, n2;
	double x, y;
	cin>>n;
	n2=1;
	while(n--){
		cin>>x>>y;
		double dist=((x*x)+(y*y));
		double resp=((dist)*3.14)/2;
		if(resp==(int)resp) resp++;
		cout<<"Property "<<n2<<": This property will begin eroding in year "<<(int)ceil(resp/50)<<".\n";
		n2++;
	}
	cout<<"END OF OUTPUT.\n";
	return 0;
}
