#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main(){
	int n;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите число N\n";
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++){
		int c;
		cin >> c;
		a.push_back(c);
	}
	int i = -2;
	while (i < n){
		i += 2;
		if (i >= n){
			break;
		}
		cout << a[i]<<' ';
	}
	i = n % 2 == 0 ? n - 1: n-2;
	while (i >= 1){
		cout << a[i] << ' ';
		i -= 2;
	}
}
