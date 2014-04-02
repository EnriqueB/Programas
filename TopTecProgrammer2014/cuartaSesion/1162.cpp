#include <iostream>
#include <queue>
using namespace std;

class Employee {
	public:
		int ID;
		int sal;
		int he;
		bool emp;
		Employee(){ ID=0; sal=0; he=0; emp=false;}
		Employee(int I, int v, int h){	ID=I; sal=v; he=h; emp=false;}
};
bool operator< (const Employee& emp1, const Employee &emp2)
{
	if((emp1.sal > emp2.sal)&&(emp1.he < emp2.he))
		emp1.emp=emp2.emp=true;
	if((emp1.sal < emp2.sal)&&(emp1.he > emp2.he))
		emp1.emp=emp2.emp=true;
	return ((emp1.sal > emp2.sal)&&(emp1.he > emp2.he));	
}
bool operator> (const Employee& emp1, const Employee &emp2)
{
	if((emp1.sal > emp2.sal)&&(emp1.he < emp2.he))
		emp1.emp=emp2.emp=true;
	if((emp1.sal < emp2.sal)&&(emp1.he > emp2.he))
		emp1.emp=emp2.emp=true;
	return ((emp1.sal < emp2.sal)&&(emp1.he < emp2.he));		
}
int main(){
	//[x][0]=boss
	//[x][1]=cant subordinados
	int empleados[30000][2];
	int cantEmpleados, queries;
	int n;
	cin>>n;
	while(n--){
		priority_queue<Employee, vector<Employee>,greater<vector<Employee>::value_type> > pqEmp;
		int apE=1;
		cin>>cantEmpleados>>queries;
		int ID, s, h;
		for(int i=0; i<cantEmpleados; i++){
			cin>>ID>>s>>h;
			pqEmp.push( Employee( ID, s, h ) );
		}
		int IDAnt=0;
		apE++;
		pqEmp.pop();
		cout<<n<<" "<<	pqEmp.size()<<endl;
		while ( !pqEmp.empty() ) {
			if(pqEmp.top().emp){
				empleados[pqEmp.top().ID-100000][0]=IDAnt;
				empleados[pqEmp.top().ID-100000][1]=cantEmpleados-apE-1;
				pqEmp.pop();
				empleados[pqEmp.top().ID-100000][0]=IDAnt;
				empleados[pqEmp.top().ID-100000][1]=cantEmpleados-apE-1;
				pqEmp.pop();
				apE+=2;
			}
			else{
				empleados[pqEmp.top().ID-100000][0]=IDAnt;
				empleados[pqEmp.top().ID-100000][1]=cantEmpleados-apE;
				apE++;
				pqEmp.pop();
			}	
			IDAnt=pqEmp.top().ID;
		}
		for(int i=0; i<queries; i++){
			cin>>ID;
			cout<<empleados[ID-100000][0]<<" "<<empleados[ID][1]<<endl;
		}
	}
	return 0;
}
