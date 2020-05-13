//수열로 생각할 것.
// 2020.05.08 

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t, n, res;
	cin >> t;

	for(int i=0;i<t;i++){
		cin >> n;
		for(int j=2;;j++){
			if(pow(j,2)>n){
				res = j-1;
				break;
			}
		}	
		cout << res << endl;		
	}
}
