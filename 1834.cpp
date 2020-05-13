//자료형 범위 조심
//2020.05.08 

#include <iostream>

using namespace std;

int main(){
	long long n, tot(0);
	cin >> n;
	
	for(long long i=0;i<n;i++){
		tot += n*i + i;
	}
	
	cout << tot << endl;
	
	return 0;
} 
