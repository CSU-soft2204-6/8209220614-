#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	float a = 0;
	cout << "����������" << endl;
	cin >> a;
	float x1 = 0, x2 = 1.0;
	if (a >= 0) {
		while (fabs(x1 - x2) > 1e-10) {
			x1 = x2;
			x2 = (x1 + a / x1) / 2.0;
		}
		cout << "�����ֵ�ƽ����=" << setprecision(10) << x2 << endl;
	}
	else {
		cout << "�޷����㣡" << endl;
	}
	system("pause");
	return 0;
}