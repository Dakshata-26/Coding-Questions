#include<iostream>
using namespace std;

// spf[i] = smallest prime factor

void primeFactor(int n){
	int spf[100] = {0};
	for(int i=2;i<=n;i++){
		spf[i] = i;
	}
	for(int i=2;i<=n;i++){
		if(spf[i]==i){
			for(int j=i*i;j<=n;j+=i){
				if(spf[j]==j){
					spf[j]=i;
				}
			}
		}
	}
	while(n!=1){
		cout<<spf[n]<<" ";
		n = n/spf[n];
	}
}

int main(){
	int n = 42;
	// cin>>n;
	primeFactor(n);
	return 0;
}