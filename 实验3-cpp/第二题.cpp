#include<iostream>
using std::endl;
using std::cin;
using std::cout;
bool is_prime(int num) {
	if (num == 2) {
		return true;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	cout << "������һ��������";
	int a = 0;
	cin >> a;
	if (is_prime(a) == true) {
		cout << a << "��һ������" << endl;
	}
	else {
		cout << a << "����һ������" << endl;
	}
	cout << "���������ǰ���ٸ�����" << endl;
	int x = 0;
	for (int i = 2, num = 0; num < 200; i++) {
		if (is_prime(i) == true) {
			cout << i << "\t";
			num++;
			x++;
		}
		if (x % 10 == 0) {
			cout << "\n";
			x = 0;
		}
	}
	system("pause");
	return 0;
}