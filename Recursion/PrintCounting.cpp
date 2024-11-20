#include<iostream>
using namespace std;

void Print(int n){
	//base case
	if(n==0) return;

    //processing
	cout<<n<<endl;
    
    //recursive relation
    Print(n-1);
}

int main(){
	int n;
	cin>>n;
	Print(n);
	return 0;
}