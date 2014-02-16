#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
	char choice;
	double pi=3.14159, R, H, max;
	cin>>n;
	max=0;
	while(n--){
		cin>>choice;
		if(choice=='S'){
			cin>>R;
			double vol=pi*R*R*R;
			vol=vol*4/3;
			if(vol>max)	max=vol;
		}
		if(choice=='C'){
			cin>>R>>H;
			double vol=pi*R*R*H;
			vol=vol/3;
			if(vol>max)	max=vol;
		}
		if(choice=='L'){
			cin>>R>>H;
			double vol=pi*R*R*H;
			if(vol>max)	max=vol;
		}			
	}
	cout<<setprecision(3)<<fixed<<max<<endl;
	return 0;
}
