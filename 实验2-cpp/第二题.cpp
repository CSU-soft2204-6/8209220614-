#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "������x��ֵ��" << endl;
	float x = 0;
	cin >> x;
	if (x > 0 && x < 1) {
		cout << "�ɱ��ʽ��֪��y=" << 3 - 2 * x << endl;
	}
	else if (x >= 1 && x < 5) {
		cout << "�ɱ��ʽ��֪��y=" << 2 / (4 * x) + 1 << endl;
	}
	else if (x >= 5 && x < 10) {
		cout << "�ɱ��ʽ��֪��y=" << pow(x,2) << endl;
	}
	system("pause");
	return 0;
}