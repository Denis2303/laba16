#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

int main(){
	int n;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите N\n";
	cin >> n;
	vector <int> a(n);
	int A, B;
	cout << "¬ведите переменные A и B\n";
	cin >> A >> B;
	a[0] = A;
	a[1] = B;
	int i = 2;
	while (i < n){
		a[i] = a[i - 1] + a[i - 2];
		i++;
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
}
