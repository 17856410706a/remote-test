#include <bits/stdc++.h>
using namespace std;

struct Activity{
	int l,r;
	bool operator< (Activity b){
		return l<b.l;
	}
};


int main(){
	int n;
	cin>>n;
	vector<Activity> a(n);
	for (int i=0;i<n;i++){
		cin>>a[i].l>>a[i].r;
	}
	sort(a.begin(),a.end());
	int end1=INT_MIN;
	int end2=INT_MIN;
	int flag=1;
	for (int i=0;i<n;i++){
		if (a[i].l>end1){
			end1=a[i].r;
		}
		else if (a[i].l>end2){
			end2=a[i].r;
		}
		else {
			flag=0;
			break;
		}
	}
	if (flag==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
