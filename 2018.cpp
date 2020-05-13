#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int tot, num(0);
	
	for(int i=1;i<=n;i++){
		tot = 0;
		for(int j=i;j<=n;j++){
			tot += j;
			if(tot == n){
				num++;
				break;
			}
			if(tot > n)
				break;	
		}
	}
	
	cout << num << endl;
	
	return 0;
}
