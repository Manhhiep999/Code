#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
	while(b!=0){
		int tmp=a;
		a=b;
		b=temp;
	}
	return b;
}

int bcnn(int a, int b){
	return a*b/ucln(a,b);
}

int main (){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << ucln(a,b) << " " << bcnn(a,b);
		cout << endl;
	}
}
