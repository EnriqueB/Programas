#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;


int main(){
	int n, cases=1;
	double balance, avg;
	cin>>n;
	while(n--){
		avg=0;
		for(int i=0; i<12; i++){
			cin>>balance;
			avg+=balance;
		}
		avg/=(double)12;
		avg*=100;
		avg=round(avg);
		avg/=100;
		ostringstream strs;
		strs << setprecision(2)<<fixed<<avg;
		string str = strs.str();
		bool punto=false;
		int contador=0;
		for(int i=str.length(); i>0; i--){
			if(str[i]=='.')	punto=true;
			if(punto){
				if(contador==3){
					contador=0;
					str.insert(i, ",");
				}
				else{
					contador++;
				}
			}
		}
		cout<<cases<<" "<<"$"<<str<<endl;
		cases++;
	}
	return 0;
}
