#include<iostream>
#include<cmath>
#include"mytriangle.h"
int main() {
	double side1 = 0, side2 = 0, side3 = 0;
	cout << "�����������ε�������:" << endl;
	cout << "side1=" << endl;
	cin >> side1;
	cout << "side2=" << endl;
	cin >> side2;
	cout << "side3=" << endl;
	cin >> side3;
	if (is_valid(side1,side2,side3) == false) {
		cout << "����������߲�����������Σ�" << endl;
	}
	else {
	
		cout << "�����ε����Ϊ��" << area(side1, side2, side3) << endl;
	}
	system("pause");
	return 0;
}