#include<iostream>
using namespace std;

void subsets(int arr[], int n){
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i & (1<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int arr[6]={1,2,3,4,5,6};
	subsets(arr,6);
	return 0;
}