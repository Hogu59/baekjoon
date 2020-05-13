//자료형의 범위를 확인
//2020.05.08 

#include <iostream>

using namespace std;

int main(){
	double s, tmp;
	
	cin >> s;
	
	for(int i = 1;; i++){
		s -=i;
		if(s < i+1){
			tmp = i;
			break;
		}else if(s==0){
			tmp = i;
			break;
		}
	}
	
	cout << tmp << endl;
	
	return 0;
}
