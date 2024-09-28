#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	for(int i=0;i<n;i++){
		if(b[i]==a[1]){
			cout<<i+1;
			return 0;
		}
	}
	return 0;
} 
