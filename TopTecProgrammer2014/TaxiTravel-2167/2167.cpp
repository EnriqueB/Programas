#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, n2, inp,  taxis, g1, g2, g3;
	cin>>n;
	while(n--){
		g1=g2=g3=taxis=0;
		cin>>n2;
		for(int i=0; i<n2; i++){
			cin>>inp;
			if(inp==4)
				taxis++;
			if(inp==3)
				g3++;
			if(inp==2)
				g2++;
			if(inp==1)
				g1++;

		}
		if(g3>=g1){
			taxis+=g3;
			if(g3!=0)
				g1=0;
		}
		else{
			taxis+=g3;
			g1-=g3;
		}
		if(g2%2==0)
			taxis+=(g2/2);
		else{
			taxis+=(g2/2);
			if(g1>=0){
				taxis++;
				g2--;
				if(g1>1){
					g1-=2;
				}
				else
					g1--;
			}
			if(g2==1)
				taxis++;
		}
		if(g1>0){
			taxis+=ceil(((double)(g1))/4);
		}
		cout<<taxis<<endl;
	}
	return 0;
}
