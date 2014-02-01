#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string list[721];
	int n=0;
    	string s, original;
	cin>>s;
	original=s;
	do
    	{
		list[n]=s;
       		n++;
    	}while (next_permutation(s.begin(), s.end()) );
	sort(list, list+n);
	if(n==1){
		cout<<0<<endl;
	}
	else{
		int i=0;
		while((i<n)&&(list[i]<=original)){
			i++;
		}
		if(i==n)
			cout<<0<<endl;
		else if(list[i]==original)
			cout<<0<<endl;
		else
			cout<<list[i];
	}
	return 0;
}
