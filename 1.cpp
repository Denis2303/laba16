#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <int> a;
	int n;
	int d = 1;
	cout << "¬ведите число N\n";
	cin >> n;
	for (int i = 0; i < n; i++){
		a.push_back(d);
		d += 2;
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
}
