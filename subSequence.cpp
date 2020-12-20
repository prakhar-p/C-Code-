#include<iostream>
using namespace std;
int count = 0;

void printAllSubsequences(string a, string out){
	if(a.size() ==0){
		count++;
		cout<<out<<' ';
		return;
	}

	//string c = "";
	//for(int j = 1; j < a.length(); j++)
		//c += a[j];
	string c=a.substr(1);
	printAllSubsequences(c, out);
	printAllSubsequences(c, out + a[0]);
	
}

int main() {
	string a;
	cin>>a;
	string out = "";
	printAllSubsequences(a, out);
	cout<<endl<<count;
	

	return 0;
}
