#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int n; 
	string males, females;
	double maxM=0, maxF=0;
	cin>>n;
	while(n!=0){
		maxM=0, maxF=0;
		while(n--){
			string name, sex;
			double iW, fW;
			cin>>name>>sex>>iW>>fW;
			if(sex=="M"){
				double puente=(fW*100)/iW;
				puente=100-puente;
				if(puente>maxM){
					maxM=puente;
					males=name;
				}
			}
			if(sex=="F"){
				double puente=(fW*100)/iW;
				puente=100-puente;
				if(puente>maxF){
					maxF=puente;
					females=name;
				}
			}	
		}
		maxM*=100;
		maxM=round(maxM);
		maxM/=100;
		maxF*=100;
		maxF=round(maxF);
		maxF/=100;
		cout<<setprecision(2)<<fixed<<males<<" "<<maxM<<"% "<<females<<" "<<maxF<<"%"<<endl;
		cin>>n;
	}
	return 0;
}
