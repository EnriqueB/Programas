#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
int main() {
		double dbl=123.12;
	ostringstream strs;
strs << dbl;
string str = strs.str();
	cout<<str<<endl;
	return 0;
}
