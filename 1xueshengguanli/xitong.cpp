#include<iostream>
#include<string>
using namespace std;

struct student
{
	string Name;
	int Age;
	int StuNumber;
	double ChineseScore;
	double MathScore;
	double EnglishScore;

};
student Student[10];
int main()
{
	int Num;
	int i, j,k,n,m;
	cout << "������Ҫ���ӵ�ѧ��������" << endl;
//	getline(cin, Num);
	
	cin >> Num;
	cin.get();
//	Num = 1;
	for (i = 1; i < Num+1; i++)
	{
		cout << "�������" << i << "��ѧ��������" << endl;
		getline(cin, Student[i].Name);
		cout << "��һ�������" << i << "��ѧ�������䡢ѧ�š����ĳɼ�����ѧ�ɼ���Ӣ��ɼ���" << endl;
		cin >> Student[i].Age >> Student[i].StuNumber >> Student[i].ChineseScore >> Student[i].MathScore >> Student[i].EnglishScore;
		cin.get();
	}
	cout << "������Ҫ��ѯ��ѧ������" << endl;
	cin >>n;
	for (k = 1; k < n+1 ; k++)
	{
		
		cout << "�������"<<k<<"��Ҫ��ѯ��ѧ�����" << endl;
		cin >> j;
        cout <<"ѧ��������"<< Student[j].Name << "   "<<"���䣺"<<Student[j].Age<<"   " << "ѧ�ţ�"
			<<Student[j].StuNumber <<"   "<<"���ĳɼ���"<< Student[j].ChineseScore << "   " << "��ѧ�ɼ���" 
			<< Student[j].MathScore << "   " << "Ӣ��ɼ���" << Student[j].EnglishScore << endl;
	}
	
}



