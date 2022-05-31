#define _CRT_SECURE_NO_WARNINGS
//Sources     main.cpp:  //主函数所在sourse
#include "student.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include "Student_message.h"
#include "People.h"
using namespace std;
//防止人数过多，定义常量，最多注册10000人(两个端口各5000)//在Individual类中
//类定义在头文件中，函数在类中定义       //功能函数定义在源文件中。
void studentMenu() //学生页面菜单函数
{
	Student_message students;//建立学生信息类的一个对象students
	int choice = 9;
	while (choice != 0)
	{
		cout << "\n*============================================================================== * \n" << endl;
		cout << "\t\t\t\t学生水电费管理系统\n" << endl;
		//学生水电费管理系统各种功能的选择
		cout << "   1.添加  2.查询  3.显示  4.修改  5.删除  6.统计  7.保存  8.读取  9.缴费  0.退出 \n\n" << endl;
		cout << "\n*============================================================================== * \n" << endl;
		cout << "请输入您的选择： " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:system("cls"); students.add(); break;
		case 2:system("cls"); students.search(); break;
		case 3:system("cls"); students.show(); break;
		case 4:system("cls"); students.compile(); break;
		case 5:system("cls"); students.deleting(); break;
		case 6:system("cls"); students.statistics(); break;
		case 7:system("cls"); students.saving(); break;
		case 8:system("cls"); students.reading(); break;
		case 9:system("cls"); students.payfee(); break;
		case 0:system("cls"); cout << "您已退出学生端系统！ " << endl; break;
		default:system("cls"); cout << "选择失误！ 请重试！ " << endl; break;
		}
	}
}
void teacherMenu() //教工页面主菜单函数
{
	Teacher_message teachers;
	int choice = 9;
	while (choice != 0)
	{
		cout << "\n*============================================================================== * \n" << endl;
		cout << "\t\t\t教工端水电费管理系统\n" << endl;
		//教工水电费管理系统各种功能的选择
		cout << "   1.添加  2.查询  3.显示  4.修改  5.删除  6.统计  7.保存  8.读取  9.缴费  0.退出 \n\n" << endl;
		cout << "\n*============================================================================== * \n" << endl;
		cout << "请输入您的选择： " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: system("cls"); teachers.add(); break;
		case 2: system("cls"); teachers.search(); break;
		case 3: system("cls"); teachers.show(); break;
		case 4: system("cls"); teachers.compile(); break;
		case 5: system("cls"); teachers.deleting(); break;
		case 6: system("cls"); teachers.statistics(); break;
		case 7: system("cls"); teachers.saving(); break;
		case 8: system("cls"); teachers.reading(); break;
		case 9: system("cls"); teachers.payfee(); break;
		case 0: system("cls"); cout << "您已退出教工端系统！ " << endl; break;
		default: system("cls"); cout << "选择失误！ 请重试！ " << endl; break;
		}
	}
}
void guideMenu()
{
	People person;
	int choice = 2;
	while (choice != 0)
	{
		cout << "\n*============================================================================== * \n" << endl;
		cout << "\t\t1.辅导员端口       2.班导师端口      0.退出\n" << endl;
		cout << "\n*============================================================================== * \n" << endl;
		cout << "请输入您的选择： " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: system("cls"); person.putStudent(); break;
		case 2: system("cls"); person.putclassStudent(); break;
		case 0: system("cls"); cout << "您已退出导师查询系统！ " << endl; break;
		default: system("cls"); cout << "选择失误！ 请重试！ " << endl; break;
		}
	}
}
int main() //主函数
{
	int choice = 3;
	while (choice != 0)
	{
		cout << "\n=================================================================================== = \n" << endl;
		cout << "\n\t\t\t* 高校水电费管理系统 *\n\n\n" << endl;
		// 管理系统的项目，有两个子系统，一个教工的， 一个学生的
		cout << "     1.学生水电费管理系统    2.教工水电费管理系统    3.导师查询端口     0.退出系统\n" << endl << endl;
		cout << "\n=================================================================================== = \n" << endl;
		cout << "请输入您的选择： " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: system("cls");
			studentMenu(); break;
		case 2: system("cls");
			teacherMenu(); break;
		case 3:system("cls");
			guideMenu(); break;
		case 0: system("cls");
			cout << "*=================================================================================== * \n" << endl;
			cout << "\n\n\t\t\t\t* 您已退出系统，欢迎下次使用 * \n\n\n" << endl;
			cout << "*=================================================================================== * \n" << endl; break;
		default:system("cls");
			cout << "选择错误，请重试！ " << endl; break;
		}
	}
	return 0;
}


//Sources      Individual公用功能函数.cpp
#include <fstream>
#include "individual.h"
#include "student.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include "Student_message.h"
#include "People.h"
#include <windows.h>


ostream& operator <<(ostream& out, Student& s)
{
	out << "姓名： " << s.name << endl;
	out << "性别： " << s.sex << endl;
	out << "年龄： " << s.age << endl;
	out << "班级： " << s.grade << endl;
	out << "学号： " << s.number << endl;
	out << "用水量： " << s.water << endl;
	out << "用电量： " << s.electric << endl;
	out << "水费： " << s.waterfee << endl;
	out << "电费： " << s.powerfare << endl;
	return out;
}
double Individual::CalculateWaterfee(double water)//计算水费函数
{
	if (water <= 50.0)  //用水在50kg内的不收费
		return 0.0;
	else if (water <= 500.0)  //用水量在50~500kg之间的，超过50的部分每kg收费2.8元
		return ((water - 50.0) * 2.8);
	else
		return (450 * 2.8 + (water - 500.0) * 3.5);//为避免浪费，超过500kg的收费为每kg3.5元
}
double Individual::CalculatePowerfare(double electric)//计算电费函数
{
	if (electric <= 3.0)  //用电在3度内的不收费
		return 0.0;
	else if (electric <= 50.0)  //用电量在3~50度之间的，超过50的部分每度收费1.0元
		return ((electric - 3.0) * 1.0);
	else
		return (47 * 1.0 + (electric - 50.0) * 2.5);//为避免浪费，超过50度的收费为每度2.5元
}
void Individual::Pay()//缴费函数
{
	waterfee = 0;
	powerfare = 0;  //确认缴费后，将需交水电费归零
}


//Sources       student端功能函数.cpp
#include <fstream>
#include "individual.h"
#include "student.h"
#include "Student_message.h"

void Student::input() //学生信息输入函数
{
	cout << "请输入姓名： " << endl;
	cin >> name;
	int choice;
	cout << "请选择性别（1. 男， 2. 女）： " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: sex = "男"; break;
	case 2: sex = "女"; break;
	default:
	{
		system("cls");
		cout << "输入错误！ " << endl;
		return;
	}
	}
	cout << "请输入年龄： " << endl;
	cin >> age;
	cout << "请输入班级： " << endl;
	cin >> grade;
	cout << "请输入学号： " << endl;
	cin >> number;
	cout << "请设置密码： " << endl;
	cin >> password;
	cout << "请输入本月用水量（Kg）：" << endl;
	cin >> water;
	cout << "请输入本月用电量(度)：" << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Student::input(int)//学生信息重新输入（编辑重载）
{
	cout << "请输入姓名： " << endl;
	cin >> name;
	int choice;
	cout << "请选择性别（1. 男， 2. 女）： " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: sex = "男"; break;
	case 2: sex = "女"; break;
	default:
	{
		system("cls");
		cout << "输入错误！ " << endl;
		return;
	}
	}
	cout << "请输入年龄： " << endl;
	cin >> age;
	cout << "请输入班级： " << endl;
	cin >> grade;
	cout << "请输入本月用水量（Kg）：" << endl;
	cin >> water;
	cout << "请输入本月用电量(度)：" << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Student::output() //学生信息输出函数
{
	cout << "姓名： " << name << endl;
	cout << "性别： " << sex << endl;
	cout << "年龄： " << age << endl;
	cout << "班级： " << grade << endl;
	cout << "学号： " << number << endl;
	cout << "用水量： " << water << endl;
	cout << "用电量： " << electric << endl;
	cout << "水费： " << waterfee << endl;
	cout << "电费： " << powerfare << endl;
}
void Student_message::add() //学生信息添加函数
{
	if (amount >= capacity)
	{
		cout << "添加失败！用户已满！ " << endl;
	}
	Student stud;
	cout << "请输入添加人员的信息" << endl;
	stud.input();
	for (int i = 0; i < amount; i++)
	{
		if (stud.GetNumber() == stu[i].GetNumber())
		{
			cout << "该学号已存在，请勿重复添加！ " << endl;
			return;
		}
	}
	if (stud.GetSex() != "男" && stud.GetSex() != "女")
	{
		cout << "请稍后再试" << endl;
		return;
	}
	stu[amount] = stud;
	amount++;
	cout << "添加成功！ " << endl;
}
void Student_message::search() //学生信息查询函数
{
	if (amount == 0)
	{
		cout << "当前没有人员记录！ " << endl;
		return;
	}
	int choice;
	string pass;
	cout << "请选择查询方式： 1. 学号查找 2. 姓名查找 3. 用水量查找 4. 用电量查找" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1://学号查找
	{
		cout << "请输入要查询的学号： " << endl;
		int number;
		cin >> number;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetNumber() == number)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	case 2://姓名查找
	{
		cout << "请输入要查询的姓名： " << endl;
		string name;
		cin >> name;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetName() == name)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	case 3:
	{
		cout << "请输入要查询的用水量： " << endl;
		double water;
		cin >> water;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetWater() == water)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	case 4:
	{
		cout << "请输入要查询的用电量： " << endl;
		double electric;
		cin >> electric;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetElectric() == electric)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	default: cout << "无此选项， 请重试！ " << endl; break;
	}
}
void Student_message::show() //学生信息显示函数
{
	if (amount == 0)
	{
		cout << "没有数据！ " << endl;
		return;
	}
	for (int i = 0; i < amount; i++)
	{
		cout << stu[i] << endl;
	}
	cout << "\n\n请按回车键返回" << endl;
	getchar();
	getchar();
	system("cls");
}
void Student_message::compile() //学生信息编辑函数
{
	if (amount == 0)
	{
		cout << "当前没有人员记录！ " << endl;
		return;
	}
	else
	{
		int num;
		cout << "请输入要查找的学号： " << endl;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetNumber() == num)
			{
				string pass;
				cout << "请输入密码：";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << "请输入修改后的信息" << endl;
					stu[i].input(i);
					if (stu[i].GetSex() != "男" && "女")
					{
						cout << "请稍后再试" << endl;
						return;
					}
					system("cls");
					cout << "修改成功！ " << endl;
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就修改其信息，查不到显示“此人不存在！”
	}
}
void Student_message::deleting() //学生信息删除函数
{
	if (amount == 0)
	{
		cout << "当前没有人员记录！ " << endl;
		return;
	}
	cout << "请输入您的选择： " << endl;
	cout << "1. 学号查找删除   2. 姓名查找删除" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入学号： " << endl;
		int num;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (num == stu[i].GetNumber())
			{
				cout << "是否确认删除？ " << endl;
				cout << "1. 是 2. 否" << endl;
				int choice1;
				cin >> choice1;
				switch (choice1)
				{
				case 1:
				{
					cout << "请输入密码：";
					string pass;
					cin >> pass;
					if (pass == stu[i].GetPassword())
					{
						for (int k = i; k < amount - 1; k++)
						{
							stu[k] = stu[k + 1];
						}
						cout << "删除成功！" << endl;
						amount--;
						cout << "\n\n请按回车键继续" << endl;
						getchar();
						getchar();
						system("cls");
					}
					else
					{
						cout << "密码错误，请稍后重试！" << endl;
					}
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "不存在此选项！" << endl; break;
				}return;
			}
		}
		system("cls");
		cout << "未查询到此人！请稍后重试！ " << endl;
	}; break;
	case 2:
	{
		cout << "请输入姓名： " << endl;
		string name;
		cin >> name;
		for (int i = 0; i < amount; i++)
		{
			if (name == stu[i].GetName())
			{
				cout << "是否确认删除？ " << endl;
				cout << "1. 是 2. 否 " << endl;
				int choice2;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
				{
					for (int k = i; k < amount - 1; k++)
					{
						cout << "请输入密码：";
						string pass;
						cin >> pass;
						if (pass == stu[k].GetPassword())
						{
							stu[k] = stu[k + 1];
							cout << "\n\n请按回车键继续" << endl;
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							cout << "密码错误，请核对后重试。" << endl;
						}
					}
					cout << "删除成功！ " << endl;
					amount--;
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "不存在此选项！！ " << endl; break;
				} return;
			}
		}
		system("cls");
		cout << "未查询到此人！请稍后重试！ " << endl;
	}; break;
	default: cout << "没有此选项，失败！ " << endl; break;
	}
}
void Student_message::statistics() //学生信息统计函数
{
	cout << "1. 学生总用水量和总用电量 2. 学生总的水电费" << endl;
	int choice;
	cout << "请选择您的选项： " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		double all_water = 0.0, all_electric = 0.0;
		for (int i = 0; i < amount; i++)
		{
			all_water += stu[i].GetWater();
			all_electric += stu[i].GetElectric();
		}
		cout << "学生总用水量为： " << all_water << endl;
		cout << "学生总用电量为： " << all_electric << endl;
	} break;
	case 2:
	{
		double all_waterfare = 0.0, all_powerfee = 0.0;
		for (int i = 0; i < amount; i++)
		{
			all_waterfare += stu[i].GetWaterfee();
			all_powerfee += stu[i].GetPowerfare();
		}
		cout << "学生总水费为： " << all_waterfare << endl;
		cout << "学生总电费为： " << all_powerfee << endl;
	} break;
	default: cout << "输入错误！ 请重新输入！ " << endl; break;
	}
}
void Student_message::saving() //学生信息保存函数
{
	ofstream ofs;
	ofs.open("StudentMessage.txt", ios::out | ios::binary);
	for (int i = 0; i < this->amount; i++)
	{
		ofs.write((const char*)&stu[i], sizeof(Student_message));
	}
	ofs.close();
}
void Student_message::reading() //学生信息读取函数
{
	ifstream ifs;
	ifs.open("StudentMessage.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	for (int i = 0; i < this->amount; i++)
	{
		ifs.read((char*)&stu[i], sizeof(Student_message));
		cout << stu[i] << endl;
	}
	ifs.close();
}
void Student_message::payfee()//学生缴费函数
{
	cout << "请输入要缴费者的学号：" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < amount; i++)
	{
		if (stu[i].GetNumber() == number)
		{
			string pass;
			cout << "请输入密码：";
			cin >> pass;
			if (pass == stu[i].GetPassword())
			{
				cout << stu[i].GetName() << "你好！" << endl;
				cout << "   您本月应缴纳水费：" << stu[i].GetWaterfee() << endl;
				cout << "   您本月应缴纳电费：" << stu[i].GetPowerfare() << endl;
				cout << "   是否确认缴纳？" << endl;
				cout << "     1、是    2、否   " << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					if (stu[i].Getpowerfare() == 0 && stu[i].Getwaterfee() == 0)
					{
						system("cls");
						cout << "您已缴过费或无需上缴水电费！" << endl; break;
					}
					else
					{
						stu[i].Pay();
						system("cls");
						cout << "缴费成功！" << endl; break;
					}
				}
				case 2:cout << "请尽快缴费！" << endl; break;
				default:cout << "选择有误，请稍后重试！" << endl; break;
				}
				cout << "\n\n请按回车键返回" << endl;
				getchar();
				getchar();
				system("cls"); return;
			}
			else
			{
				cout << "密码错误，请核对后重试。" << endl; return;
			}
		}
	}
	cout << "查无此人，请稍后重试！" << endl;
}

//Sources       teacher端功能函数.cpp
#include "individual.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include <windows.h>

void Teacher::input() //教工信息输入函数
{
	int choice_sex;
	int choice_part;
	cout << "请输入姓名： " << endl;
	cin >> name;
	cout << "请选择性别（1. 男， 2. 女）： " << endl;
	cin >> choice_sex;
	switch (choice_sex)
	{
	case 1: sex = "男"; break;
	case 2: sex = "女"; break;
	default:
	{
		system("cls");
		cout << "输入错误！ " << endl;
		return;
	}
	}
	cout << "请输入年龄： " << endl;
	cin >> age;
	cout << "请选择工作部门： " << endl;
	cout << "1. 班导师， 2. 辅导员， 3. 课程导师， 4. 教务处， 5.安保人员， 6.后勤人员" << endl;
	cin >> choice_part;
	switch (choice_part)
	{
	case 1:
	{
		department = "班导师";
		cout << "请输入您的班级：" << endl;
		cin >> Grade; break;
	}
	case 2: department = "辅导员"; break;
	case 3: department = "课程导师"; break;
	case 4: department = "教务处"; break;
	case 5: department = "安保人员"; break;
	case 6: department = "后勤人员"; break;
	default: cout << "输入错误！" << endl; return;
	}
	cout << "请输入职工号： " << endl;
	cin >> number;
	cout << "请设置密码： " << endl;
	cin >> password;
	cout << "请输入该月用水量： " << endl;
	cin >> water;
	cout << "请输入该月用电量： " << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Teacher::input(int)//教工信息重新输入（编辑重载）
{
	int choice_sex;
	int choice_part;
	cout << "请输入姓名： " << endl;
	cin >> name;
	cout << "请选择性别（1. 男， 2. 女）： " << endl;
	cin >> choice_sex;
	switch (choice_sex)
	{
	case 1: sex = "男"; break;
	case 2: sex = "女"; break;
	default:
	{
		system("cls");
		cout << "输入错误！ " << endl;
		return;
	}
	}
	cout << "请输入年龄： " << endl;
	cin >> age;
	cout << "请选择工作部门： " << endl;
	cout << "1. 班导师， 2. 辅导员， 3. 课程导师， 4. 教务处， 5.安保人员， 6.后勤人员" << endl;
	cin >> choice_part;
	switch (choice_part)
	{
	case 1:
	{
		department = "班导师";
		cout << "请输入您的班级：" << endl;
		cin >> Grade; break;
	}
	case 2: department = "辅导员"; break;
	case 3: department = "课程导师"; break;
	case 4: department = "教务处"; break;
	case 5: department = "安保人员"; break;
	case 6: department = "后勤人员"; break;
	default: cout << "输入错误！" << endl; return;
	}
	cout << "请输入该月用水量： " << endl;
	cin >> water;
	cout << "请输入该月用电量： " << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Teacher::output() //教工信息输出函数
{
	cout << "姓名： " << name << endl;
	cout << "性别： " << sex << endl;
	cout << "年龄： " << age << endl;
	cout << "工作部门： " << department << endl;
	cout << "职工号： " << number << endl;
	cout << "用水量： " << water << endl;
	cout << "用电量： " << electric << endl;
	cout << "水费： " << waterfee << endl;
	cout << "电费： " << powerfare << endl;
}
void Teacher_message::add() //教工信息添加函数
{
	if (amount >= capacity)
	{
		cout << "警告！ 用户已满！ " << endl;
		return;
	}
	Teacher teache;//
	cout << "请输入添加人员的信息" << endl;
	teache.input();
	for (int i = 0; i < amount; i++)
		if (teache.GetNumber() == teach[i].GetNumber())
		{
			cout << "该编号人员已存在！ " << endl;
			return;
		}
	if (teache.GetSex() != "男" && "女")
	{
		cout << "添加有误，请稍后再试" << endl;
		return;
	}
	teach[amount] = teache;
	amount++;
	cout << "添加成功！ " << endl;
}
void Teacher_message::search() //教工信息查询函数
{
	if (amount == 0)
	{
		cout << "当前没有人员记录！ " << endl;
		return;
	}
	int choice;
	string pass;
	cout << "请选择查询方式: 1.职工号查找 2.姓名查找 3.用水量查找 4.用电量查找" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入要查询的职工号： " << endl;
		int number;
		cin >> number;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetNumber() == number)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n请按回车键返回" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	case 2:
	{
		cout << "请输入要查询的姓名： " << endl;
		string name;
		cin >> name;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetName() == name)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	}break;
	case 3:
	{
		cout << "请输入要查询的用水量： " << endl;
		double water;
		cin >> water;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetWater() == water)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	case 4:
	{
		cout << "请输入要查询的用电量： " << endl;
		double electric;
		cin >> electric;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetElectric() == electric)
			{
				cout << "请输入密码：";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就显示其信息，查不到显示“此人不存在！”
	} break;
	default: cout << "无此选项， 请重试！ " << endl; break;
	}
}
void Teacher_message::show() //教工信息显示函数
{
	if (amount == 0)
	{
		cout << "没有数据！ " << endl;
		return;
	}

	for (int i = 0; i < amount; i++)
	{
		teach[i].output();
	}
	cout << "\n\n请按回车键返回" << endl;
	getchar();
	getchar();
	system("cls");
}
void Teacher_message::compile() //教工信息编辑函数
{
	if (amount == 0)
	{
		cout << "当前没有人员记录！ " << endl;
		return;
	}
	else
	{
		int num;
		cout << "请输入要查找的职工号： " << endl;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetNumber() == num)
			{
				string pass;
				cout << "请输入密码：";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					cout << "请输入修改后的信息" << endl;
					teach[i].input(i);
					system("cls");
					cout << "修改成功！ " << endl;
					cout << "\n\n请按回车键继续" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "密码错误，请核对后重试。" << endl; return;
				}
			}
		}
		system("cls");
		cout << "此人不存在！请重试！ " << endl;
		getchar();
		getchar();
		return;//若查到就修改其信息，查不到显示“此人不存在！”

	}
	cout << "查无此人信息，请稍后重试！ " << endl;
}
void Teacher_message::deleting() //教工信息删除函数
{
	if (amount == 0)
	{
		cout << "当前没有人员记录！ " << endl;
		return;
	}
	cout << "请输入您的选择： " << endl;
	cout << "1. 职工号查找删除   2. 姓名查找删除" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "请输入职工号： " << endl;
		int num;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (num == teach[i].GetNumber())
			{
				cout << "是否确认删除？ " << endl;
				cout << "1. 是 2. 否" << endl;
				int choice1;
				cin >> choice1;
				switch (choice1)
				{
				case 1:
				{
					cout << "请输入密码：";
					string pass;
					cin >> pass;
					if (pass == teach[i].GetPassword())
					{
						for (int k = i; k < amount - 1; k++)
						{
							teach[k] = teach[k + 1];
						}
						cout << "删除成功！" << endl;
						amount--;
						cout << "\n\n请按回车键继续" << endl;
						getchar();
						getchar();
						system("cls");
					}
					else
					{
						cout << "密码错误，请稍后重试！" << endl;
					}
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "不存在此选项！" << endl; break;
				}return;
			}
		}
		system("cls");
		cout << "未查询到此人！请稍后重试！ " << endl;
	}; break;
	case 2:
	{
		cout << "请输入姓名： " << endl;
		string name;
		cin >> name;
		for (int i = 0; i < amount; i++)
		{
			if (name == teach[i].GetName())
			{
				cout << "是否确认删除？ " << endl;
				cout << "1. 是 2. 否 " << endl;
				int choice2;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
				{
					for (int k = i; k < amount - 1; k++)
					{
						cout << "请输入密码：";
						string pass;
						cin >> pass;
						if (pass == teach[k].GetPassword())
						{
							teach[k] = teach[k + 1];
							cout << "\n\n请按回车键继续" << endl;
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							cout << "密码错误，请核对后重试。" << endl;
						}
					}
					cout << "删除成功！ " << endl;
					amount--;
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "不存在此选项！！ " << endl; break;
				} return;
			}
		}
		system("cls");
		cout << "未查询到此人！请稍后重试！ " << endl;
	}; break;
	default: cout << "没有此选项，失败！ " << endl; break;
	}
}
void Teacher_message::statistics() //教工信息统计函数
{
	cout << "1.老师用水总量和用电总量    2.老师总的水电费   3." << endl;
	int choice;
	cout << "请输入您的选择： " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		double all_water = 0.0, all_electric = 0.0;
		for (int i = 0; i < Teacher_message::amount; i++)
		{
			all_water += teach[i].GetWater();
			all_electric += teach[i].GetElectric();
		}
		cout << "教工总用水量为： " << all_water << endl;
		cout << "教工总用电量为： " << all_electric << endl;
	} break;
	case 2:
	{
		double all_waterfare = 0.0, all_powerfee = 0.0;
		for (int i = 0; i < Teacher_message::amount; i++)
		{
			all_waterfare += teach[i].GetWaterfee();
			all_powerfee += teach[i].GetPowerfare();
		}
		cout << "教工总水费为： " << all_waterfare << endl;
		cout << "教工总电费为： " << all_powerfee << endl;
	} break;
	default: cout << "输入错误！ 请重新输入！ " << endl; break;
	}
}
void Teacher_message::saving() //教工信息保存函数
{
	ofstream ofs;
	ofs.open("TeacherMessage.txt", ios::out | ios::binary);
	for (int i = 0; i < this->amount; i++)
	{
		ofs.write((const char*)&teach[i], sizeof(Teacher_message));
	}
	ofs.close();
	cout << "文件写入成功！" << endl;
}
void Teacher_message::reading() //教工信息读取函数
{
	ifstream ifs;
	ifs.open("TeacherMessage.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	for (int i = 0; i < this->amount; i++)
	{
		ifs.read((char*)&teach[i], sizeof(Teacher_message));
	}
	ifs.close();
}
void Teacher_message::payfee()//教工缴费函数
{
	cout << "请输入要缴费者的职工号号：" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < amount; i++)
	{
		if (teach[i].GetNumber() == number)
		{
			string pass;
			cout << "请输入密码：";
			cin >> pass;
			if (pass == teach[i].GetPassword())
			{
				cout << teach[i].GetName() << "你好！" << endl;
				cout << "   您本月应缴纳水费：" << teach[i].GetWaterfee() << endl;
				cout << "   您本月应缴纳电费：" << teach[i].GetPowerfare() << endl;
				cout << "   是否确认缴纳？" << endl;
				cout << "     1、是    2、否   " << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					if (teach[i].Getpowerfare() == 0 && teach[i].Getwaterfee() == 0)
					{
						system("cls");
						cout << "您已缴过费或无需上缴水电费！" << endl; break;
					}
					else
					{
						teach[i].Pay();
						system("cls");
						cout << "缴费成功！" << endl; break;
					}
				}
				case 2:cout << "请尽快缴费！" << endl; break;
				default:cout << "选择有误，请稍后重试！" << endl; break;
				}
				cout << "\n\n请按回车键返回" << endl;
				getchar();
				getchar();
				system("cls"); return;
			}
			else
			{
				cout << "密码错误，请核对后重试。" << endl; return;
			}
		}
	}
	cout << "查无此人，请稍后重试！" << endl;
}

//Sources       people端功能函数.cpp
#include "student.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include "Student_message.h"
#include "People.h"

void People::putStudent()
{
	cout << "请输入职工号" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < Teacher_message::amount; i++)
	{
		if ((t + i)->GetNumber() == number)
		{
			string pass;
			cout << "请输入密码：";
			cin >> pass;
			if (pass == (t + i)->GetPassword())
			{
				if ((t + i)->department == "辅导员")
				{
					int choice;
					cout << "\n\n        1.查看全体同学信息      2.查看未缴费同学信息\n\n" << endl;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						for (int j = 0; j < Student_message::amount; j++)
						{
							(s + j)->output();
						}
						cout << "无目标成员！" << endl;
					}
					case 2:
					{
						for (int j = 0; j < Student_message::amount; j++)
						{
							if ((s + j)->GetPowerfare() != 0 || (s + j)->GetWaterfee() != 0)
								(s + j)->output();
						}
						cout << "无目标成员！" << endl;
					}
					}

				}
				else
				{
					cout << "您非辅导员，无访问权限" << endl;
				}
				cout << "\n\n请按回车键继续" << endl;
				getchar();
				getchar();
				system("cls");
				return;
			}
			else
			{
				system("cls");
				cout << "密码错误，请核对后重试。" << endl;
				return;
			}
		}
	}
	system("cls");
	cout << "此人不存在！请重试！ " << endl;
}
void People::putclassStudent()
{
	cout << "请输入职工号" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < Teacher_message::amount; i++)
	{
		if ((t + i)->GetNumber() == number)
		{
			string pass;
			cout << "请输入密码：";
			cin >> pass;
			if (pass == (t + i)->GetPassword())
			{
				if ((t + i)->department == "班导师")
				{
					int choice;
					cout << "\n\n        1.查看全班同学信息      2.查看未缴费同学信息\n\n" << endl;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						for (int j = 0; j < Student_message::amount; j++)
						{
							if ((s + j)->grade == (t + i)->Grade)
								(s + j)->output();
						}
						cout << "无目标成员！" << endl;
					}
					case 2:
					{
						for (int j = 0; j < Student_message::amount; j++)
						{
							if ((s + j)->grade == (t + i)->Grade)
							{
								if ((s + j)->GetPowerfare() != 0 || (s + j)->GetWaterfee() != 0)
									(s + j)->output();
							}
						}
						cout << "无目标成员！" << endl;
					}
					}

				}
				else
				{
					cout << "您非班导师，无访问权限" << endl;
				}
				cout << "\n\n请按回车键继续" << endl;
				getchar();
				getchar();
				system("cls");
			}
			else
			{
				system("cls");
				cout << "密码错误，请核对后重试。" << endl;
			}
		}
	}
	system("cls");
	cout << "此人不存在！请重试！ " << endl;
}

//自定义头文件：
//Headers individual.h
#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
const int capacity = 5000;
class Individual //声明人员类
{
protected:  //为保护信息安全，将个人信息定义为protected类型
	string name; //姓名
	string sex; //性别
	int age; //年龄
	int number; //学号或职工号
	string password; //个人密码，用于登录，防止他人恶意操作
	double water; //用水量
	double electric; //用电量
	double waterfee; //水费
	double powerfare; //电费
public:    //功能函数
	virtual void input() = 0; //声明输入函数
	virtual void output() = 0; //声明输出函数    //因教师和学生输入、输出的信息不同，所以用纯虚函数实现
	string GetName() { return name; } //获取姓名
	string GetSex() { return sex; }//获取性别
	int GetAge() { return age; } //获取年龄
	int GetNumber() { return number; } //获取学号或职工号
	string GetPassword() { return password; }//获取个人密码
	double GetWater() { return water; } //获取用水量
	double GetElectric() { return electric; } //获取用电量
	double GetWaterfee() { return CalculateWaterfee(water); }//获得应交水费
	double GetPowerfare() { return CalculatePowerfare(electric); }//获得应交电费
	double Getwaterfee() { return waterfee; }//获得缴费后水费
	double Getpowerfare() { return powerfare; }//获得缴费后电费
	void Pay();//声明缴费函数
	double CalculateWaterfee(double);//声明计算水费函数
	double CalculatePowerfare(double);//声明计算电费函数
};

//Header People.h
#pragma once
#include "Student_message.h"
#include "Teacher_message.h"
class People : public Student_message, public Teacher_message
{
public:
	Student* s = stu;
	Teacher* t = teach;
	void putStudent();
	void putUnfareStudent();
};

//Header student.h
#pragma once
#include "individual.h"

class Student : public Individual //定义基于Individual的学生类
{
	friend ostream& operator <<(ostream& out, Student& s);
public:
	string grade; //声明学生班级（与教工不同）
	void input(); //声明学生类输入函数（与教工不同）
	void output(); //声明学生类输出函数（与教工不同）
	void input(int);//声明学生类编辑函数（重载input）
};

//Header Student_message.h
#pragma once
#include "individual.h"
#include "student.h"
class Student_message //声明学生信息类
{
protected:
	int amount; //当前的数据量
	Student stu[capacity]; //定义学生数组，用于储存学生信息
public:
	Student_message() { amount = 0; } //定义当前学生信息容量为0
	void add(); //声明学生信息添加函数
	void search(); //声明学生信息查询函数
	void show(); //声明学生信息显示函数
	void compile(); //声明学生信息编辑函数
	void deleting(); //声明学生信息删除函数
	virtual void statistics(); //声明学生信息统计函数(区别于教工）
	void saving(); //声明学生信息保存函数
	void reading(); //声明学生信息读取函数
	void payfee(); //声明学生信息缴费函数
};

//Header Teacher.h
#pragma once
#include "individual.h"
class Teacher : public Individual //定义基于Individual的教工类
{
public: //公用数据成员
	string department;
	string Grade;
	void input(); //声明教工类输入函数（与学生不同）
	void output(); //声明教工类输出函数（与学生不同）
	void input(int);//声明教工类编辑函数（重载input）
};

//Header Teacher_message.h
#pragma once
#include "individual.h"
#include "Teacher.h"

class Teacher_message //声明教工信息类
{
protected:
	Teacher teach[capacity];//定义教工数组，用于储存教工信息
	int amount; //当前的数据量
public:
	Teacher_message() { amount = 0; } //初始记录数据数为 0
	void add(); //声明教工信息添加函数
	void search(); //声明教工信息查询函数
	void show(); //声明教工信息显示函数
	void compile(); //声明教工信息编辑函数
	void deleting(); //声明教工信息删除函数
	void saving(); //声明教工信息保存函数
	void statistics();//声明教工信息统计函数
	void reading(); //声明教工信息读取函数
	void payfee();  //声明教工信息 缴费函数
};
