#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	int o, n;
	int score[8];
	string in, t;
	cin>>n;
	while(n--){
		cin>>o>>in;
		memset (score, 0, sizeof(score));
		for(int i=0; i<38; i++){
			t=in.substr(0,3);
			if(t=="TTT")	score[0]++;
			if(t=="TTH") 	score[1]++;
			if(t=="THT")	score[2]++;
			if(t=="THH")	score[3]++;
			if(t=="HTT")	score[4]++;
			if(t=="HTH")	score[5]++;
			if(t=="HHT")	score[6]++;
			if(t=="HHH")	score[7]++;
			in.erase(0,1);
		}
		cout<<o;
		for(int i=0; i<8; i++)
			cout<<" "<<score[i];
		cout<<endl;
	}
	return 0;
}
