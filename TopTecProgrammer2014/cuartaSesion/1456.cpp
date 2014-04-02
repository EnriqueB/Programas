#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <set>
#include <iterator>
#include <math.h>
#include <vector>

using namespace std;

int main(){
	set<int> k;
	int n, x, m;
	cin>>n;
	m=n;
	while(n--){
		cin>>x;
		if(k.count(x)) k.erase(x);
		else k.insert(x);

	}
	set<int>::iterator iter = k.begin();
	cout<<*iter<<endl;
	return 0;
}
