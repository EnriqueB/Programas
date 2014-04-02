#include <iostream>

using namespace std;

bool checkConsonants(char a, char b, char c){
	int countVowel=0;
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')	countVowel++;
	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')	countVowel++;
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')	countVowel++;
	if(countVowel==1 || countVowel==2)
		return false;
	return true;
		
}

int main(){
	string input, puente;
	cin>>input;
	while(input!="end"){
		bool vowel=false, three=false, two=false;
		for(int i=0; i<input.length(); i++){
			if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u')	vowel=true;
			if((i+1)<input.length()){
				if(input[i]==input[i+1]){
					if(input[i]!='e' && input[i]!='o')	two=true;
				}
			}
			if((i+2)<input.length()){
				three=checkConsonants(input[i], input[i+1], input[i+2]);
				if(three)
					break;
			}
		}
		cout<<"<"<<input<<">"<<" is ";
		if(vowel && !three && !two)
			cout<<"acceptable."<<endl;
		else
			cout<<"not acceptable."<<endl;
		cin>>input;
	}
	return 0;
}
