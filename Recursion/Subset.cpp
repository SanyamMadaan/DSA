#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> Generate_SubSets(vector<int> nums){
  vector<vector<int>> solution;
        int n = nums.size();

        // Insert the empty subset manually
        solution.push_back({});

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                vector<int> subset;
                // Subset will be from index i to j
                for (int s = i; s <= j; s++) {
                    subset.push_back(nums[s]);
                }
                solution.push_back(subset);
            }
        }

        return solution;

}

void Print(vector<vector<int>> m){
	int row=m.size();

	cout<<"Row"<<row;
	for(int i=0;i<row;i++){
		int col=m[i].size();
		
		for(int j=0;j<col;j++){
			cout<<m[i][j];
		}
		cout<<endl;
	}
}

int main(){
	vector<int>arr={1,2,3};
	
	vector<vector<int>>ans=Generate_SubSets(arr);
	Print(ans);
}