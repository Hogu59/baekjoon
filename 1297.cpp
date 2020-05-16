#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double n, a, b, tmp;
	
	cin >> n >> a >> b;
	tmp = n/sqrt(pow(a,2)+pow(b,2));
	cout << floor(a*tmp) << " " << floor(b*tmp);
	
	return 0;
}
