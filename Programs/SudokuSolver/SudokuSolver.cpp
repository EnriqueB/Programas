#include <iostream>
#include <fstream>
using namespace std;
char sudoku [9][9];
bool solved;
bool possible(char num, int renglon, int columna){
	for(int i=0; i<9; i++){
		if(sudoku[renglon][i]==num){
			return false;
		}
	}
	for(int i=0; i<9; i++){
		if(sudoku[i][columna]==num){
			return false;
		}
	}
	int inicioRenglon=(renglon/3)*3;
	int inicioColumna=(columna/3)*3;
	for(int i=inicioRenglon; i<inicioRenglon+3; i++){
		for(int j=inicioColumna; j<inicioColumna+3; j++){
			if(sudoku[i][j]==num){
				return false;
			}
		}
	}
	return true;
}
void print(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cout<<sudoku[i][j]<<" ";
		}
		cout<<endl;
	}
}
void solver(int renglon, int columna){
	if(renglon==9){
		solved=true;
		return;
	}
	if(columna==9){
		renglon++;
		columna=0;
	}
	if(sudoku[renglon][columna]!='X'){
		solver(renglon, columna+1);
	}
	else{
		if(possible('1', renglon,columna)){
			sudoku[renglon][columna]='1';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('2', renglon,columna)){
			sudoku[renglon][columna]='2';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('3', renglon,columna)){
			sudoku[renglon][columna]='3';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('4', renglon,columna)){
			sudoku[renglon][columna]='4';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('5', renglon,columna)){
			sudoku[renglon][columna]='5';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('6', renglon,columna)){
			sudoku[renglon][columna]='6';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('7', renglon,columna)){
			sudoku[renglon][columna]='7';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('8', renglon,columna)){
			sudoku[renglon][columna]='8';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
		if(possible('9', renglon,columna)){
			sudoku[renglon][columna]='9';
			solver(renglon, columna+1);
			if(solved){
				return;
			}
			sudoku[renglon][columna]='X';
		}
	}
}
int main(){
	solved=false;
	ifstream file ("sudoku.txt");
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			file>>sudoku[i][j];
		}
	}
	file.close();
	cout<<"Original: \n";
	print();
	cout<<endl;
	solver(0,0);
	cout<<"Solved: \n";
	print();
	return 0;
}
