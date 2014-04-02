#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
char pag[60][60];
void imprimir(){
	for(int i=0; i<60; i++){
		for(int j=0; j<60; j++){
			cout<<pag[i][j];
		}
		cout<<endl;
	}
}
int main(){
	memset(pag, '.', sizeof(pag));
	string inp;
	while(cin>>inp){	
		if(inp==".P"){
			char text [200];
			int row, col;
			cin>>row>>col;
			scanf(" %[^\n]",text);
			for(int i=1; i<strlen(text)-1; i++){
				if((col-2+i)>=0 && (col-2+i)<60)
				if(text[i]!=' '){
					pag[row-1][col-2+i]=text[i];
				}
			}
		}
		else if(inp==".L"){
			char text [200];
			int row;
			cin>>row;
			scanf(" %[^\n]",text);
			for(int i=1; i<strlen(text)-1; i++){
				if((i-1)>=0 && (i-1)<60)
				if(text[i]!=' '){
					pag[row-1][i-1]=text[i];
				}
			}
		}
		else if(inp==".C"){
			char text[200];
			int row;
			cin>>row;
			scanf(" %[^\n]", text);
			int mid =30-(strlen(text)-2)/2;
			for(int i=1; i<strlen(text)-1; i++){
				if((mid+i-1)>=0 && (mid+i-1)<60)
				if(text[i]!=' '){
					pag[row-1][mid+i-1]=text[i];
				}
			}
		}
		else if(inp==".R"){
			char text[200];
			int row;
			cin>>row;
			scanf(" %[^\n]", text);
			int p = 60-(strlen(text)-2);
			for(int i=1; i<strlen(text)-1; i++){
				if((p+i-1)>=0 && (p+i-1)<60)
				if(text[i]!=' '){
					pag[row-1][p+i-1]=text[i];
				}
			}
		}
		else if(inp==".EOP"){
			imprimir();
			cout << endl << "------------------------------------------------------------" << endl << endl;
			memset(pag, '.', sizeof(pag));
		}
	}
	return 0;
}

