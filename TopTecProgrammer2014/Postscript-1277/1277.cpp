#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
char pag[100][300];
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
bool ESP[5][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
void imprimir(){
	for(int i=0; i<60; i++){
		for(int j=0; j<60; j++){
			cout<<pag[i][j];
		}
		cout<<endl;
	}
}
void impC5P(char *text, int row, int col){
	col--;
	row--;
	for(int i=1; i<strlen(text)-1; i++){
		switch (text[i]){
			case 'A':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(A[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'B':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(B[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'C':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(C[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'D':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(D[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'E':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(E[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'F':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(F[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'G':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(G[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'H':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(H[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'I':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(I[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'J':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(J[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'K':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(K[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'L':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(L[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'M':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(M[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'N':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(N[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'O':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(O[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'P':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(P[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'Q':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(Q[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'R':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(R[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'S':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(S[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'T':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(T[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'U':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(U[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'V':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(V[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'W':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(W[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'X':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(X[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'Y':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(Y[j][l]){
							pag[row+j][col+l]='*';
						}
					}
				}
				col+=6;
				break;
			case 'Z':
				for(int j=0; j<5; j++){
					for(int l=0; l<6; l++){
						if(Z[j][l]){
							pag[row+j][col+l]='*';
						}
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
	cin>>inp;
	while(inp!=".EOP"){
		if(inp==".P"){
			string font;
			char text [200];
			int row, col;
			cin>>font>>row>>col;
			scanf(" %[^\n]",text);
			if(font=="C1"){
				for(int i=1; i<strlen(text)-1; i++){
					if(text[i]!=' '){
						pag[row-1][col+i]=text[i];
					}
				}
			}
			else{
				impC5P(text, row, col);
			}
		}
		imprimir();
		cin>>inp;
	}
	return 0;
}
