#include<iostream>
using namespace std;
int main() {
	cout << "������һ���ַ���" << endl;
	char a = '\0';
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << "��д���Ϊ��"<<(char)(a - 32) << endl;
	}
	else {
		cout << "����ַ���ASC����ֵΪ��"<<a + 1 << endl;
	}

	system("pause");
	return 0;
}