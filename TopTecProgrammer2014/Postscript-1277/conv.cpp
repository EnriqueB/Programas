#include <iostream>
using namespace std;

int main(){
	bool A[5][30], B[5][30], C[5][30], D[5][30], E[5][30], F[5][30], G[5][30], H[5][30], I[5][30], J[30], K[30], L[30], M[30], N[30], O[30], P[30], Q[30], R[30], S[30], T[30], U[30], V[30], W[30], X[30], Y[30], Z[30];
	for(int l=0; l<5; l++){
		string inp;
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	A[l][j]=0;
			else		A[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	B[l][j]=0;
			else		B[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	C[l][j]=0;
			else		C[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	D[l][j]=0;
			else		D[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	E[l][j]=0;
			else		E[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	F[l][j]=0;
			else		F[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	G[l][j]=0;
			else		G[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	H[l][j]=0;
			else		H[l][j]=1;
		}
		cin>>inp;
		for(int j=0; j<6; j++){
			if(inp[j]=='.')	I[l][j]=0;
			else		I[l][j]=1;
		}	
	}
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(A[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(B[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(C[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(D[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(E[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(F[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(G[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(H[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	cout<<"};";
	cout<<endl;
	cout<<"{";
	for(int i=0; i<5; i++){
		cout<<"{";
		for(int j=0; j<6; j++){
			if(I[i][j])	cout<<1<<",";
			else		cout<<0<<",";
		}
		cout<<"},";
	}
	return 0;
}
