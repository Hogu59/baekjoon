//����� ������ �� ����.
//������ �� �� ��.
//2020.05.08 
//�ڷ��� ���� ���� 
//https://blog.kimtae.xyz/133

#include <iostream>

using namespace std;

int main(){
	long long n, tot(5);
	
	cin >> n;
	
	for(long long i=2;i<=n;i++){
		tot += 5*i - (i*2-1);
	}
	
	tot = tot % 45678;
	
	cout << tot << endl;
	
	return 0;
}
