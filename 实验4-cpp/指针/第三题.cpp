#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void swap(int array[], int size)
{
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1])
			{
				int temp;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
//ʹ�ú���swap��������Ԫ������
int main() {
	cout << "�����붯̬����Ĵ�С:";
	int size = 0;

	cin >> size;
	int* p = new int[size];
	int* array = p;
	cout << "�����붯̬�����е�Ԫ�أ�";
	for (int i = 0; i < size; i++) 
	{
		cin >> array[i];
	}

	swap(array, size);

	
	cout << "��С�����������Ԫ�أ�";
	for (int i = 0; i < size; i++)
	{
		cout << *(array + i) << " ";
	}
	cout << endl;
	//����ָ�뷽ʽ�������Ԫ�أ�

	cout << "�۲�ָ���Լ�ָ��ָ������ݣ�" << endl;
	cout << "��̬����array�еĵ�����Ԫ��ָ��Ϊ��" << (array + 2) << endl;
	cout << "ָ��ָ������ݣ�" << *(array + 2) << endl;

	delete [] p;
	//delete�ͷ������ڴ�ռ䣻

	system("pause");
	return 0;
}