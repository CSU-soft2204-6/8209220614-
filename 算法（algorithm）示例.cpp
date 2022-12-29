#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
void print(T &con)    //�������������Ԫ��
{
  if(con.empty())
     cout<<"Container is empty!"<<endl;
  else
  {
	  typename T::iterator it;   //���õ�����

	  for(it=con.begin(); it!=con.end();it++)
	  {
		cout<<*it<<" ";
      }
	  cout<<endl;
  }
}
int main()
{
  int num;
  vector<char> vec_A(8);  //��������vec_A

  cout<<"Fill vec_A with 'A':"<<endl;
  fill(vec_A.begin(),vec_A.end(),'A');  //�������Ԫ��
  print(vec_A);

  cout<<"Copy element of vector to vec_A:"<<endl;
  char array_B[]={'B','B','B','B',};
  vector<char> vec_B(array_B,array_B+4);  //��������vec_A,����ʼ��
  copy(vec_B.begin(),vec_B.end(),vec_A.begin()+2);   //��������Ԫ��
  print(vec_A);

  cout<<"Remove 'A' from vec_A:"<<endl;
  vector<char>::iterator it;
  it=remove(vec_A.begin(),vec_A.end(),'A');  //�Ƴ�����Ԫ��
  vec_A.erase(it,vec_A.end());               //ɾ������Ԫ��
  print(vec_A);

  cout<<"Repalce 'B' with 'C':"<<endl;
  replace(vec_A.begin(),vec_A.begin()+2,'B','C');  //�滻����Ԫ��
  replace(vec_B.begin(),vec_B.end(),'B','X');
  print(vec_A);

  cout<<"Inserting:"<<endl;
  vec_A.insert(vec_A.begin(),'D');  //��������Ԫ��
  vec_A.insert(vec_A.end(),'A');
  print(vec_A);
  cout<<"Sorting:"<<endl;
  sort(vec_A.begin(),vec_A.end());  //����
  print(vec_A);

  vector<char> vec_C(vec_A.size()+vec_B.size());
  cout<<"Merge vec_A and vec_B:"<<endl;
  merge(vec_A.begin(),vec_A.end(),vec_B.begin(),vec_B.end(),
vec_C.begin());  //�ϲ�
  print(vec_C);
  num=count(vec_C.begin(),vec_C.end(),'B');  //ͳ������Ԫ��
  cout<<"Counting the number of 'B' in vec_C:"<<endl;
  cout<<num<<endl;
  return 0;
}
