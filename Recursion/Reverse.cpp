#include<iostream>
#include<string>

using namespace std;

void Reverse(string &str,int e,int s=0){
	//base case
	if(s>e) return;

    //processing
	swap(str[s],str[e]);
	s++;
	e--;

	//recursive call
	Reverse(str,e,s);
}

int main(){
	string s;
	cin>>s;

	int n=s.size()-1;

    cout<<"Original string = "<<s;
	
	Reverse(s,n);

	cout<<endl;
	cout<<"Reverse String = "<<s;
}