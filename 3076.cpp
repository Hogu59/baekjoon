#include <iostream>

using namespace std;

int main(){
	int r, c, a, b;
	cin >> r >> c >> a >> b;
	
	for(int k=0;k<r;k++){
		if(k%2==0){
			for(int j=0;j<a;j++){
				for(int i=0;i<c*b ;i++){
					if((i/b)%2 == 0){
						cout << "X";
					}else{
						cout << ".";
					}
				}
				cout << endl;
			}
		}else{
			for(int j=0;j<a;j++){
				for(int i=0;i<c*b ;i++){
					if((i/b)%2 == 0){
						cout << ".";
					}else{
						cout << "X";
					}
				}
				cout << endl;
			}	
		}
	}
	
	return 0;
}
