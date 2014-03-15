#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N, G, ganados=0, cant=0;
	int juegos [100000];
	cin>>N>>G;
	while(N--){
		int a, b;
		cin>>a>>b;
		if((a-b)>0){
			ganados+=3;
		}
		else{
			juegos[cant]=a-b;
			cant++;
		}
	}
	int i=0;
	sort(juegos, juegos+cant, greater<int>());
	while((G!=0)&&(i<cant)){
		if(juegos[i]==0){
			ganados+=3;
			G--;
		}
		if(juegos[i]<0){
			if(G>abs(juegos[i])){
				G=G+juegos[i]-1;
				ganados+=3;
			}
			else if(G==abs(juegos[i])){
				G=0;
				ganados++;
			}
			else{
				break;
			}
		}
		i++;
	}
	for (;i<cant; i++){
		if(juegos[i]==0){
			ganados++;
		}
	}
	cout<<ganados<<endl;
	return 0;
}
