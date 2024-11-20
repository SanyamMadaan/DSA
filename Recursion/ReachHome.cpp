#include<iostream>
using namespace std;

void reachHome(int src,int dest){
	//base case
	if(src==dest) {
		cout<<src;
		return;
	}

	//processing
	cout<<src<<"->";

	//recursive call
	reachHome(src+1,dest);
}

int main(){
	int src=1;
	int dest=10;

	reachHome(src,dest);

	return 0;
}