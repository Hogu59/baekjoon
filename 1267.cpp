#include <iostream>

using namespace std;

int main(){
	int n, tmp;
	int yt(0), mt(0);
	
	cin >> n;
	
	int *y = new int[n];
	int *m = new int[n];
	
	for(int i=0;i<n;i++){
		cin >> tmp;
		y[i] = tmp/30 + 1;
		m[i] = tmp/60 + 1;
	}
	
	for(int i=0;i<n;i++){
		yt += y[i]*10;
		mt += m[i]*15;
	}
	
	if(yt==mt){
		cout << "Y M " << mt << endl;
	}else if(mt>yt){
		cout << "Y " << yt << endl;
	}else
		cout << "M " << mt << endl;
	
	return 0;
}
