//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	char str[20];
//	cin.getline(str, 20);
//	int letter = 0, blank = 0, num = 0, other = 0;
//	for (int i = 0; i < sizeof(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
//		{
//			letter++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9') {
//			num++;
//		}
//		else if (str[i] == ' ') {
//			blank++;
//		}
//		else if (str[i] == '\0') {
//			break;
//		}
//		else   {
//			other++;
//		}
//	}
//	cout << "Ӣ����ĸ�У�" << letter << "��" << endl;
//	cout << "�ո��У�" << blank << "��" << endl;
//	cout << "�����У�" << num << "��" << endl;
//	cout << "�����У�" << other << "��" << endl;
//	system("pause");
//	return 0;
//}