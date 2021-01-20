#include <iostream>

using namespace std;

int main()
{
	cout<<"SETENAH PIRAMIT"<<endl;
	for (int i = 2; i <= 6; i++){
		for (int j = 2; j <= i; j++){
			cout << "*";
		}
		cout<< "\n";
	}
	return 0;
}