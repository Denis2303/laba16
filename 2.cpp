#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>
using namespace std;

int main(){
	vector <double> a;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double n, s, d;
	cout << "Введите длину массива N, первый член прогрессии A, знаменатель прогрессии В\n";
	cin >> n >> s >> d;
	for (int i = 0; i < n; i++){
		a.push_back(s*pow(d, i));
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
}
