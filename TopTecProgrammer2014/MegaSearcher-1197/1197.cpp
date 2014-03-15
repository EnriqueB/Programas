#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	string A, B;
	int ipA[4], ipB[4];
	cin>>A>>B;
	int i=0;
	while(i<3){
		int pos=A.find(".");
		ipA[i]=atoi(A.substr(0, pos).c_str());
		i++;
		A.erase(0, pos+1);
	}
	ipA[3]=atoi(A.c_str());
	i=0;
	while(i<3){
		int pos=B.find(".");
		ipB[i]=atoi(B.substr(0, pos).c_str());
		i++;
		B.erase(0, pos+1);
	}
	ipB[3]=atoi(B.c_str());
	for(int i=3; i>0; i--){
		if(ipA[i]<ipB[i]){
			ipA[i-1]--;
			ipA[i]+=256;
			ipA[i]-=ipB[i];
		}
		else if(ipA[i]>=ipB[i]){
			ipA[i]-=ipB[i];
		}
	}
	ipA[0]-=ipB[0];
	long long int resp=ipA[0]*256*256*256+ipA[1]*256*256+ipA[2]*256+ipA[3]+1;
	cout<<resp;
	return 0;
}
