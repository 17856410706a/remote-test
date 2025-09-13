#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	priority_queue<int,vector<int>,greater<int>> q;
	for (int i=0;i<n;i++){
		q.push(a[i]);
	}
	long long int sum=0;
	while(q.size()>1){
		int x=q.top();
		q.pop();
		int y=q.top();
		q.pop();
		int temp=x+y;
		sum+=temp;
		q.push(temp);
	}
	cout<<sum;
	return 0;
}
