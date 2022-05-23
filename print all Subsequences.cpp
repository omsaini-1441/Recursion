// time complexity willl be 2^n * n almost cuz for every ind u have two choices
//  and for printing  u r using a  for loop therefore 2^n * n.
// space complexity  is  O(n). as mamximum no. of stack space used at a time will be  2 1 0 ... i.e 3
 

#include<bits/stdc++.h>
using namespace std;
void printf(int ind, vector<int> &dss, int arr[], int n ){
	if(ind == n){
		for(auto it : ds) {
			cout << it <<" ";
		}
		if(ds.size() == 0){
			cout<< "{}";
		}
		cout<<endl;
		return;
		//  Take or pick the particuar index into the subsequence
		ds.push_back(arr[ind]);
		printf(ind+1, ds, arr, n);
		ds.pop_back();
		
//		not pick, or not take condition, this element is not added to your subsequence
		printf(ind+1, ds ,arr, n);
	}
}



int main(){
	 int arr[]= {3,1,2};
	 int n = 3;
	 vector<int> ds;
	 printf(0, ds, arr, n);
	 
	 return 0;
}
