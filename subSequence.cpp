#include <bits/stdc++.h>
using namespace std;
void sub(string str,char* ans,int i){
	//base case
	if(str.length()==-1){
		for(int k=0;k<i;k++){
			cout<<ans[k]<<", ";
		}
		cout<<"END";
		return;
	}
	
	//recursive case
	
	//not include
	sub(str.substr(1),ans,i);
	//include
	ans[i]=str[0];
	sub(str.substr(1),ans,i+1);
}
int main(){
	string str;
	cin>>str;
	char ans[100];

	sub(str,ans,0);
	return 0;
}
