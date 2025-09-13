#include <bits/stdc++.h>
using namespace std;

int main(){
	double bill[10]={100,50,20,10,5,2,1,0.5,0.2,0.1};
    int cnt[10]={0};
	double n;
	cin>>n;
	int t=n*10;
	for (int i=0;i<10;i++){
		if (t>=bill[i]*10){
			cnt[i]=t/((int)(bill[i]*10));
			t%=(int)(bill[i]*10);
		}
	}
	for (int i=9;i>=0;i--){
		cout<<bill[i]<<" "<<cnt[i]<<endl;
	}
	return 0;
}
