#include<iostream>
using std::cout;
using std::endl;
int main() {
	bool array[100];
	for (int i = 0; i < 100; i++) {
		array[i] = false;
	}
	//�����ʼȫ���ǹرյģ�false����
	for (int i = 0; i < 100; i++) {
		array[i] = true;
	}
	//��1��ѧ������������ȫ��������true����
	for (int i = 1; i < 100; i++) {
		int a = i;
		do {
			if (array[a] == true) {
				array[a] = false;
			}
			else if (array[a] == false) {
				array[a] = true;
			}
			a += i + 2;
		} while (a < 100);
	}
	//��2~100��ѧ����������ӵ������
	cout << "���ŵ����ӵı��Ϊ��" << endl;
	for (int i = 0; i < 100; i++) {
		if (array[i] == true) {
			cout << i + 1 << " ";
		}
	}
	//��ӡ�����Ϊ����״̬�Ĺ��ӵı�ţ�
	system("pause");
	return 0;
}