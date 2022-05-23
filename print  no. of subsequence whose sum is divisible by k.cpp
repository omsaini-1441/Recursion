#include<bits/stdc++.h>
using namespace std;

void printS(int ind, vector<int> &ds, int s,  int sum, int arr[] , int n){
	int counter=0;
	if(ind == n) {
		if(s%sum==0){
			for(auto it : ds) counter++ ;
			cout<<counter<<endl;
		}
		return;
	}
	ds.push_back(arr[ind]);
	s+=arr[ind];
	
	printS(ind+1,ds,s,sum,arr,n);
	
	s-=arr[ind];
	ds.pop_back();
	
	
	printS(ind+1, ds, s, sum, arr, n);
	
}

int main(){
	int arr[]={5,0,2,3,1};
	int n=5;
	int sum = 5;
	vector<int> ds;
	 printS(0, ds , 0, sum ,arr , n);
	 
	return 0;
}
