#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
int parseHex(const char* const hexString) 
{	
	int sum = 0;
	for (int i = 0; i < strlen(hexString); i++) 
	{
		if (hexString[strlen(hexString) - i - 1] >= '0' && hexString[strlen(hexString) - i - 1] <= '9')
		{
			sum += (int)(hexString[strlen(hexString) - i - 1] - 48) * pow(16, i);
		}
		//ʮ�����ƴ�0��9��
		if (hexString[strlen(hexString) - i - 1] > '9')
		{
			sum += (int)(hexString[strlen(hexString) - i - 1] - 55) * pow(16, i);
		}
		//ʮ�����ƴ�A��F��
	}
	return sum;
}
int main() {
	cout << "������һ��ʮ�����Ƶ����֣�";
	char hexString[40];
	cin >> hexString;
	cout << "��ʮ����������ת��Ϊʮ��������Ϊ��"<<parseHex(hexString) << endl;
	system("pause");
	return 0;
}