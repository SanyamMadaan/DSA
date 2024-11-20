#include<iostream>
using namespace std;

int fibonacci(int n){
	//base case
	if(n==0 || n==1) return n;

	//recursive realtion
	return fibonacci(n-1)+fibonacci(n-2);
}

void fibonacciSeries(int n){
	for(int i=0;i<=n;i++){
		cout<<fibonacci(i)<<" ";
	}
}

int main(){
	int n;
	cin>>n;

	// int ans=fibonacci(n);

	// cout<<"Fibonacci value of "<<n<<" is "<<ans;

	fibonacciSeries(n);
}