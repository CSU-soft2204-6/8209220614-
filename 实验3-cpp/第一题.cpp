#include<iostream>
using namespace std;
int gongyueshu(int &a, int &b) {
	int x = (a > b ? b : a);
	int z = 0;
	for (int i = x; i>0; i--) {
		if (a % i == 0 && b % i == 0) {
			z = i;
			break;
		}
	}
	return z;
}
int gongbeishu(int &a, int &b) {
	int z = gongyueshu(a, b);
	return z * (a / z) * (b / z);
}
int main() {
	int a = 0, b = 0;
	cout << "�������������ݣ�a=" ;
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "�������������Լ��Ϊ��" << gongyueshu(a, b) << endl;
	cout << "������������С������Ϊ��" << gongbeishu(a, b) << endl;
	system("pause");
	return 0;
}