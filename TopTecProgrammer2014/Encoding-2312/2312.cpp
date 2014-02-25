#include <iostream>

using namespace std;

string convertir(char a){
	switch (a){
		case 'A':
			return "00001";
			break;
		case 'B':
			return "00010";
			break;
		case 'C':
			return "00011";
			break;
		case 'D':
			return "00100";
			break;
		case 'E':
			return "00101";
			break;
		case 'F':
			return "00110";
			break;
		case 'G':
			return "00111";
			break;
		case 'H':
			return "01000";
			break;
		case 'I':
			return "01001";
			break;
		case 'J':
			return "01010";
			break;
		case 'K':
			return "01011";
			break;
		case 'L':
			return "01100";
			break;
		case 'M':
			return "01101";
			break;
		case 'N':
			return "01110";
			break;
		case 'O':
			return "01111";
			break;
		case 'P':
			return "10000";
			break;
		case 'Q':
			return "10001";
			break;
		case 'R':
			return "10010";
			break;
		case 'S':
			return "10011";
			break;
		case 'T':
			return "10100";
			break;
		case 'U':
			return "10101";
			break;
		case 'V':
			return "10110";
			break;
		case 'W':
			return "10111";
			break;
		case 'X':
			return "11000";
			break;
		case 'Y':
			return "11001";
			break;
		case 'Z':
			return "11010";
			break;
	}
	return "";
}
int main(){
	int n, apS=0, reng, col, apR=0, apC=0; dir=0, matriz[20][20];
	string inp="", cod="";
	cin>>n;
	while(n--){
		apS=apR=apC=dir=0;
		cin>>reng>>col>>inp;
		for(int i=0; i<inp.length(); i++){
			cod+=convertir(inp[i]);
		}	
		while(cod.length()<reng*col){
			cod.insert(cod.end(), '0');
		} 
		while(apS<reng*col){
			switch (dir){
				case 0:
					for(int i=0; i	
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
			}
		}	
	}
	return 0;
}
