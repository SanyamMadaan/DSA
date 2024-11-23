#include<iostream>
using namespace std;

int Calculate(int number,int power){

	if(power==0) return 1;


	return number*Calculate(number,power-1); 

}

int main(){
	int number,power;

	cout<<"Enter the number"<<endl;
	cin>>number;

	cout<<"Enter the Power"<<endl;
	cin>>power;

	int ans=Calculate(number,power);

	cout<<number<<"^"<<power<<" is "<<ans;


}