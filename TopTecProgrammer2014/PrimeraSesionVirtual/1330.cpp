#include <iostream>
#include <string.h>
#include <algorith>

using namespace std;

bool is_number(string & s)
{
   if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false ;

   char * p ;
   strtol(s.c_str(), &p, 10) ;

   return (*p == 0) ;
}

int main(){
	int n, n2, checks=0;
	string input;
	cin>>n;
	while(n--){
		cin>>n2;
		for(int i=0; i<n2; i++){
			cin>>input;
			string a =input;
			if(is_number(input)){
				int aux = atoi(a.c_str());
				if(aux<18) checks++;
			}
			else{
				if(input=="ABSINTH" || input=="BEER" || input=="BRANDY" || input=="CHAMPAGNE" || input=="GIN" || input=="RUM" || input=="SAKE" || input=="TEQUILA" || input=="VODKA" || input=="WHISKEY" || input=="WINE")
					checks++;
			}
		}
		cout<<checks<<endl;
	}
	return 0;
}
