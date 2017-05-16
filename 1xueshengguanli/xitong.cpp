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
	cout << "请输入要增加的学生人数：" << endl;
//	getline(cin, Num);
	
	cin >> Num;
	cin.get();
//	Num = 1;
	for (i = 1; i < Num+1; i++)
	{
		cout << "请输入第" << i << "个学生的姓名" << endl;
		getline(cin, Student[i].Name);
		cout << "请一次输入第" << i << "个学生的年龄、学号、语文成绩、数学成绩、英语成绩：" << endl;
		cin >> Student[i].Age >> Student[i].StuNumber >> Student[i].ChineseScore >> Student[i].MathScore >> Student[i].EnglishScore;
		cin.get();
	}
	cout << "请输入要查询的学生个数" << endl;
	cin >>n;
	for (k = 1; k < n+1 ; k++)
	{
		
		cout << "请输入第"<<k<<"个要查询的学生编号" << endl;
		cin >> j;
        cout <<"学生姓名："<< Student[j].Name << "   "<<"年龄："<<Student[j].Age<<"   " << "学号："
			<<Student[j].StuNumber <<"   "<<"语文成绩："<< Student[j].ChineseScore << "   " << "数学成绩：" 
			<< Student[j].MathScore << "   " << "英语成绩：" << Student[j].EnglishScore << endl;
	}
	
}



