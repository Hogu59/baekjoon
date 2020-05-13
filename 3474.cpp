#include <iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	long long tmp;
	long long tot;
	
	for(int i=0;i<t;i++){
		cin >> tmp;
		tot = 0;
		while(tmp>= 5){
			tot += tmp/5;
			tmp /=5;
		}
		cout << tot << '\n';
	}
	return 0;
}
