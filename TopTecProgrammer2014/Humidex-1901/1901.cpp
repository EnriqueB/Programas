#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double calc(double temp, double dw, double hum){
	double resp=0, a=2.718281828, b=5417.7530, c=273.16, d=0.5555;
	if(temp==1000){
		double e=6.11*pow(a, b*((1/c)-(1/(dw+c))));
		double h=(d)*(e-10.0);
		resp=hum-h;

	}
	else if(dw==1000){
		double h=hum-temp;
		double e=(h/d)+10;
		resp=(1/((1/c)-(log(e/6.11)/b)))-c;
	}
	else if(hum==1000){
		double e=6.11*pow(a, b*((1/c)-(1/(dw+c))));
		double h=(d)*(e-10.0);
		resp=temp+h;
	}
	resp*=10;
	resp=round(resp);
	resp/=10;
	return resp;
}
int main(){
	char inp=' ';
	double temp, dewpoint, humidex, resp;
	bool wat [3];
	while(cin>>inp && inp!='E'){
		memset(wat, false, sizeof(wat));
		if(inp=='T'){	
			cin>>temp;
			wat[0]=true;
		}
		if(inp=='D'){
			cin>>dewpoint;
			wat[1]=true;
		}
		if(inp=='H'){
			cin>>humidex;
			wat[2]=true;
		}
		cin>>inp;
		if(inp=='T'){
			cin>>temp;
			wat[0]=true;
		}
		if(inp=='D'){
			cin>>dewpoint;
			wat[1]=true;
		}
		if(inp=='H'){
			cin>>humidex;
			wat[2]=true;
		}
		if(!wat[0]){
			temp=calc(1000, dewpoint, humidex);	
		}
		else if(!wat[1]){
			dewpoint=calc(temp, 1000, humidex);
		}
		else{
			humidex=calc(temp, dewpoint, 1000);
		}
		cout<<fixed<<setprecision(1)<<"T "<<temp<<" D "<<dewpoint<<" H "<<humidex<<endl;

	}
	return 0;
}
