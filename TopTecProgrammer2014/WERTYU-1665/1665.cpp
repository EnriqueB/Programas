#include <iostream>

using namespace std;
string convertir(string a){
	string temp="";
	for(int i=0; i<a.length(); i++){
		switch (a[i]){
			case 'W':
				temp+="Q";
				break;
			case 'E':
				temp+="W";
				break;
			case 'R':
				temp+="E";
				break;
			case 'T':
				temp+="R";
				break;
			case 'Y':
				temp+="T";
				break;
			case 'U':
				temp+="Y";
				break;
			case 'I':
				temp+="U";
				break;
			case 'O':
				temp+="I";
				break;
			case 'P':
				temp+="O";
				break;
			case '[':
				temp+="P";
				break;
			case 'S':
				temp+="A";
				break;
			case 'D':
				temp+="S";
				break;
			case 'F':
				temp+="D";
				break;
			case 'G':
				temp+="F";
				break;
			case 'H':
				temp+="G";
				break;
			case 'J':
				temp+="H";
				break;
			case 'K':
				temp+="J";
				break;
			case 'L':
				temp+="K";
				break;
			case ';':
				temp+="L";
				break;
			case '\'':
				temp+=";";
				break;
			case 'X':
				temp+="Z";
				break;
			case 'C':
				temp+="X";
				break;
			case 'V':
				temp+="C";
				break;
			case 'B':
				temp+="V";
				break;
			case 'N':
				temp+="B";
				break;
			case 'M':
				temp+="N";
				break;
			case ',':
				temp+="M";
				break;
			case ' ':
				temp+=" ";
				break;
			case '.':
				temp+=",";
				break;
			case '/':
				temp+=".";
				break;
			case '2':
				temp+="1";
				break;
			case '3':
				temp+="2";
				break;
			case '4':
				temp+="3";
				break;
			case '5':
				temp+="4";
				break;
			case '6':
				temp+="5";
				break;
			case '7':
				temp+="6";
				break;
			case '8':
				temp+="7";
				break;
			case '9':
				temp+="8";
				break;
			case '0':
				temp+="9";
				break;
			case '-':
				temp+="0";
				break;
			case '=':
				temp+="-";
				break;
			case ']':
				temp+="[";
				break;
			case '\\':
				temp+="]";
				break;
		}
	}
	return temp;
}
int main(){
	string inp, resp;
	while(getline(cin, inp)){
		resp=convertir(inp);
		cout<<resp<<endl;
	}
	return 0;
}
