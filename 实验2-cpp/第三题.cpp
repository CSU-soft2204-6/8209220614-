#include<iostream>
using namespace std;
int main() {
	float a=0, b=0, c=0, C=0;
	cin >> a >> b >> c;
	bool z = true;
	if (a < 0 || b < 0 || c < 0 || a + b <=c || a + c <=b || b + c <= a) {
		cout << "�������β����ڣ�" << endl;
		z = false;
	}
	else {
		C = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << C << endl;
	};
	if (z == true) {
		if (a == b || a == c || b == c) {
			cout << "��������Ϊ���������Σ�" << endl;
		}
	}

	system("pause");
	return 0;
}