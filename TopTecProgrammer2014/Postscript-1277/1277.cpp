#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
char pag[60][60];
bool A[5][6]={{0,1,1,1,0,0},{1,0,0,0,1,0},{1,1,1,1,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0}};
bool B[5][6]={{1,1,1,1,0,0},{1,0,0,0,1,0},{1,1,1,1,0,0},{1,0,0,0,1,0},{1,1,1,1,0,0}};
bool C[5][6]={{0,1,1,1,1,0},{1,0,0,0,1,0},{1,0,0,0,0,0},{1,0,0,0,0,0},{0,1,1,1,1,0}};
bool D[5][6]={{1,1,1,1,0,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,1,1,1,0,0}};
bool E[5][6]={{1,1,1,1,1,0},{1,0,0,0,0,0},{1,1,1,0,0,0},{1,0,0,0,0,0},{1,1,1,1,1,0}};
bool F[5][6]={{1,1,1,1,1,0},{1,0,0,0,0,0},{1,1,1,0,0,0},{1,0,0,0,0,0},{1,0,0,0,0,0}};
bool G[5][6]={{0,1,1,1,1,0},{1,0,0,0,0,0},{1,0,0,1,1,0},{1,0,0,0,1,0},{0,1,1,1,0,0}};
bool H[5][6]={{1,0,0,0,1,0},{1,0,0,0,1,0},{1,1,1,1,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0}};
bool I[5][6]={{1,1,1,1,1,0},{0,0,1,0,0,0},{0,0,1,0,0,0},{0,0,1,0,0,0},{1,1,1,1,1,0}};
bool J[5][6]={{0,0,1,1,1,0},{0,0,0,1,0,0},{0,0,0,1,0,0},{1,0,0,1,0,0},{0,1,1,0,0,0}};
bool K[5][6]={{1,0,0,0,1,0},{1,0,0,1,0,0},{1,1,1,0,0,0},{1,0,0,1,0,0},{1,0,0,0,1,0}};
bool L[5][6]={{1,0,0,0,0,0},{1,0,0,0,0,0},{1,0,0,0,0,0},{1,0,0,0,0,0},{1,1,1,1,1,0}};
bool M[5][6]={{1,0,0,0,1,0},{1,1,0,1,1,0},{1,0,1,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0}};
bool N[5][6]={{1,0,0,0,1,0},{1,1,0,0,1,0},{1,0,1,0,1,0},{1,0,0,1,1,0},{1,0,0,0,1,0}};
bool O[5][6]={{0,1,1,1,0,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{0,1,1,1,0,0}};
bool P[5][6]={{1,1,1,1,0,0},{1,0,0,0,1,0},{1,1,1,1,0,0},{1,0,0,0,0,0},{1,0,0,0,0,0}};
bool Q[5][6]={{0,1,1,1,0,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,1,1,0},{0,1,1,1,1,0}};
bool R[5][6]={{1,1,1,1,0,0},{1,0,0,0,1,0},{1,1,1,1,0,0},{1,0,0,1,0,0},{1,0,0,0,1,0}};
bool S[5][6]={{0,1,1,1,1,0},{1,0,0,0,0,0},{0,1,1,1,0,0},{0,0,0,0,1,0},{1,1,1,1,0,0}};
bool T[5][6]={{1,1,1,1,1,0},{1,0,1,0,1,0},{0,0,1,0,0,0},{0,0,1,0,0,0},{0,1,1,1,0,0}};
bool U[5][6]={{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,0,0,1,0},{0,1,1,1,0,0}};
bool V[5][6]={{1,0,0,0,1,0},{1,0,0,0,1,0},{0,1,0,1,0,0},{0,1,0,1,0,0},{0,0,1,0,0,0}};
bool W[5][6]={{1,0,0,0,1,0},{1,0,0,0,1,0},{1,0,1,0,1,0},{1,1,0,1,1,0},{1,0,0,0,1,0}};
bool X[5][6]={{1,0,0,0,1,0},{0,1,0,1,0,0},{0,0,1,0,0,0},{0,1,0,1,0,0},{1,0,0,0,1,0}};
bool Y[5][6]={{1,0,0,0,1,0},{0,1,0,1,0,0},{0,0,1,0,0,0},{0,0,1,0,0,0},{0,0,1,0,0,0}};
bool Z[5][6]={{1,1,1,1,1,0},{0,0,0,1,0,0},{0,0,1,0,0,0},{0,1,0,0,0,0},{1,1,1,1,1,0}};
void imprimir(){
	for(int i=0; i<60; i++){
		for(int j=0; j<60; j++){
			cout<<pag[i][j];
		}
		cout<<endl;
	}
}
void impC5P(char *text, int row, int col){
	row--;
	for(int i=1; i<strlen(text)-1; i++){
		switch (text[i]){
			case 'A':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
							if(A[j][l]){
								pag[row+j][col+l]='*';
							}
							else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'B':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
							if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(B[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'C':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(C[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'D':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(D[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'E':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(E[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'F':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(F[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'G':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(G[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'H':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(H[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'I':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(I[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'J':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(J[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'K':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(K[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'L':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(L[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'M':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(M[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'N':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(N[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'O':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(O[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'P':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(P[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'Q':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(Q[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'R':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(R[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'S':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(S[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'T':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(T[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'U':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(U[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'V':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(V[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'W':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){	
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(W[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'X':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(X[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'Y':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(Y[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			case 'Z':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if((row+j)>=0 && (row+j)<60 && (col+l)>=0 && (col+l)<60)
						if(Z[j][l]){
							pag[row+j][col+l]='*';
						}
						else	pag[row+j][col+l]='.';
					}
				}
				col+=6;
				break;
			default:
				col+=6;
				break;
		}
	}
}
int main(){
	memset(pag, '.', sizeof(pag));
	string inp;
	while(cin>>inp){	
		if(inp==".P"){
			string font;
			char text [200];
			int row, col;
			cin>>font>>row>>col;
			scanf(" %[^\n]",text);
			if(font=="C1"){
				for(int i=1; i<strlen(text)-1; i++){
					if((col-2+i)>=0 && (col-2+i)<60)
					if(text[i]!=' '){
						pag[row-1][col-2+i]=text[i];
					}
				}
			}
			else{
				impC5P(text, row, col-1);
			}
		}
		else if(inp==".L"){
			string font;
			char text [200];
			int row;
			cin>>font>>row;
			scanf(" %[^\n]",text);
			if(font=="C1"){
				for(int i=1; i<strlen(text)-1; i++){
					if((i-1)>=0 && (i-1)<60)
					if(text[i]!=' '){
						pag[row-1][i-1]=text[i];
					}
				}
			}
			else{
				impC5P(text, row, 0);
			}
		}
		else if(inp==".C"){
			string font;
			char text[200];
			int row;
			cin>>font>>row;
			scanf(" %[^\n]", text);
			if(font=="C1"){
				int mid =30-(strlen(text)-2)/2;
				for(int i=1; i<strlen(text)-1; i++){
					if((mid+i-1)>=0 && (mid+i-1)<60)
					if(text[i]!=' '){
						pag[row-1][mid+i-1]=text[i];
					}
				}
			}
			else{
				int mid=30-(strlen(text)-2)*3;
				impC5P(text, row, mid);
			}
		}
		else if(inp==".R"){
			string font;
			char text[200];
			int row;
			cin>>font>>row;
			scanf(" %[^\n]", text);
			if(font=="C1"){
				int p = 60-(strlen(text)-2);
				for(int i=1; i<strlen(text)-1; i++){
					if((p+i-1)>=0 && (p+i-1)<60)
					if(text[i]!=' '){
						pag[row-1][p+i-1]=text[i];
					}
				}
			}
			else{
				int p = 60-(strlen(text)-2)*6;
				impC5P(text, row, p);
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

