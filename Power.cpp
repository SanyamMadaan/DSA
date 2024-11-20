#include <iostream>
using namespace std;

int Power(int n){
	//base case
	if(n==0) return 1;

	
	return 2 * Power(n-1);
}

int main(){
	int n;
	cin>>n;

	int ans=Power(n);
	cout<<ans;
	return 0;
}