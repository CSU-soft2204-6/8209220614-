#include<iostream>
#include<cmath>
using namespace std;
int gongyueshu(int m, int n) {
	int x = m < n ? m : n;
	int i = x - 1;
	for (; i > 0; i--) {
		if (m % i == 0 && n % i == 0) {
			break;
		}
	}
	return i;
}
int gongbeishu(int m, int n) {
	int num = gongyueshu(m, n);
	return num * (m / num) * (n / num);
}
int main() {
	cout << "��������������:" << endl;
	cout << "m=" << endl;
	int m = 0;
	cin >> m;
	cout << "n=" << endl;
	int n = 0;
	cin >> n;
	int a = gongyueshu(m, n);
	int b = gongbeishu(m, n);
	cout << "m��n�����Լ��Ϊ��" << a << endl;
	cout << "m��n����С������Ϊ��" << b << endl;
	system("pause");
	return 0;
}
