#include<iostream>
using namespace std;
int main() {
	int num = 1, a = 10;
	for (; a >1; a--) {
		num = (num + 1) * 2;
	}
	cout << "��һ��ʱ������" << num << "������" << endl;
	system("pause");
	return 0;
}