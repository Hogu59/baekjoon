#include <iostream>

using namespace std;

int main(){
	int s, k, tmp;
	cin >> s>> k;
	long long tot = 1;
	
	tmp = s%k;
	
	for(int i=0;i<tmp;i++){
		tot *= ((s/k) + 1);
	}
	
	for(int i=0;i<k-tmp;i++){
		tot *= (s/k);
	}
	
	cout << tot << endl;
	
	return 0;
} 
