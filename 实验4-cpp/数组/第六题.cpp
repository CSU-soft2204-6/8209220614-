#include<iostream>
#include<string>
using std::cin;
using std::endl;
using std::cout;
void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			counts[(int)s[i] - 97]++;
		}
		if (s[i] >= 'A' && s[i] <= 'Z') {
			counts[(int)s[i] - 65]++;
		}
	}
	for (int i = 0; i < 26; i++) {//Ϊʲô������sizeof(counts)/sizeof(counts[0])?   ����������ָ�룬ͨ������ִ���Ľ����
		if (counts[i] != 0) {
			cout << (char)(i + 97) << "  " << counts[i] << " times" << endl;
		}
	}
}
int main() {
	cout << "Enter a string:" << endl;
	char s[50];
	int counts[26];
	cin.getline(s, 20);
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	count(s, counts);
	system("pause");
	return 0;
}
