#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

	bool uno[]={false, false, true, false, false, true, false, false, true, false, false, true, false, false, true};
	bool dos[]={true, true, true, false, false, true, true, true, true, true, false, false, true, true, true};
	bool tres[]={true, true, true, false, false, true, true, true, true, false, false, true, true, true, true};
	bool cuatro[]={true, false, true, true, false, true, true, true, true, false, false, true, false, false, true};
	bool cinco[]={true, true, true, true, false, false, true, true, true, false, false, true, true, true, true};
	bool seis[]={true, true, true, true, false, false, true, true, true, true, false, true, true, true, true};
	bool siete[]={true, true, true, false, false, true, false, false, true, false, false, true, false, false, true};
	bool ocho[]={true, true, true, true, false, true, true, true, true, true, false, true, true, true, true};
	bool nueve[]={true, true, true, true, false, true, true, true, true, false, false, true, true, true, true};
	bool zero[]={true, true, true, true, false, true, true, false, true, true, false, true, true, true, true};

int revisarMenor(string a){
	int menor =-1;
	bool aux[15];
	bool ans[10];
	memset (ans, true, sizeof(ans));
	for(int i=0; i<15; i++){
		if(a[i]=='#')	aux[i]=true;
		else	aux[i]=false;
	}
	for(int i=0; i<15; i++){
		if(aux[i] && !zero[i])	ans[0]=false;
	}
	if(ans[0])	return 0;
	for(int i=0; i<15; i++){
		if(aux[i] && !uno[i])	ans[1]=false;
	}
	if(ans[1])	return 1;
	for(int i=0; i<15; i++){
		if(aux[i] && !dos[i])	ans[2]=false;
	}
	if(ans[2])	return 2;
	for(int i=0; i<15; i++){
		if(aux[i] && !tres[i])	ans[3]=false;
	}
	if(ans[3])	return 3;
	for(int i=0; i<15; i++){
		if(aux[i] && !cuatro[i])	ans[4]=false;
	}
	if(ans[4])	return 4;
	for(int i=0; i<15; i++){
		if(aux[i] && !cinco[i])	ans[5]=false;
	}
	if(ans[5])	return 5;
	for(int i=0; i<15; i++){
		if(aux[i] && !seis[i])	ans[6]=false;
	}
	if(ans[6])	return 6;
	for(int i=0; i<15; i++){
		if(aux[i] && !siete[i])	ans[7]=false;
	}
	if(ans[7])	return 7;
	for(int i=0; i<15; i++){
		if(aux[i] && !ocho[i])	ans[8]=false;
	}
	if(ans[8])	return 8;
	for(int i=0; i<15; i++){
		if(aux[i] && !nueve[i])	ans[9]=false;
	}
	if(ans[9])	return 9;
}
int main(){
	int n;
	cin>>n;
	string inp1, inp2, inp3, inp4, aux;
	while(n--){
		inp1=inp2=inp3=inp4="";
		for(int i=0; i<5; i++){
			cin>>aux;
			inp1+=aux;
			cin>>aux;
			inp2+=aux;
			cin>>aux;
			inp3+=aux;
			cin>>aux;
			inp4+=aux;
		}
		int p=revisarMenor(inp1);
		int s=revisarMenor(inp2);
		int t=revisarMenor(inp3);
		int c=revisarMenor(inp4);
		cout<<p<<s<<":"<<t<<c<<endl;
	}
	return 0;
}
