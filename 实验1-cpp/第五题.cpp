#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "�����뵱ǰ�Ļ����¶ȨH��" << endl;
	float F = 0;
	cin >> F;
	float C = (F - 32) / 1.8;
	cout << "ת����ǰ�������¶ȡ�Ϊ��" <<setprecision(4)<< C << "��" << endl;
	system("pause");
	return 0;
}