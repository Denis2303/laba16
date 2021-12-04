#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main(){
	vector <int> a;
	int n;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите число N\n";
	cin >> n;
	for(int s = 0; s < n; s++)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }
    
    int L = 0;
    int R = n-1;
    while(L <= R)
    {
        cout << a[L] << ' ';
        if(L == R)
            break;
        cout << a[R] << ' ';
        L++;
        R--;
    }
    return 0;
}
