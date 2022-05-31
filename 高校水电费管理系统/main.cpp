#define _CRT_SECURE_NO_WARNINGS
//Sources     main.cpp:  //����������sourse
#include "student.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include "Student_message.h"
#include "People.h"
using namespace std;
//��ֹ�������࣬���峣�������ע��10000��(�����˿ڸ�5000)//��Individual����
//�ඨ����ͷ�ļ��У����������ж���       //���ܺ���������Դ�ļ��С�
void studentMenu() //ѧ��ҳ��˵�����
{
	Student_message students;//����ѧ����Ϣ���һ������students
	int choice = 9;
	while (choice != 0)
	{
		cout << "\n*============================================================================== * \n" << endl;
		cout << "\t\t\t\tѧ��ˮ��ѹ���ϵͳ\n" << endl;
		//ѧ��ˮ��ѹ���ϵͳ���ֹ��ܵ�ѡ��
		cout << "   1.���  2.��ѯ  3.��ʾ  4.�޸�  5.ɾ��  6.ͳ��  7.����  8.��ȡ  9.�ɷ�  0.�˳� \n\n" << endl;
		cout << "\n*============================================================================== * \n" << endl;
		cout << "����������ѡ�� " << endl;
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
		case 0:system("cls"); cout << "�����˳�ѧ����ϵͳ�� " << endl; break;
		default:system("cls"); cout << "ѡ��ʧ�� �����ԣ� " << endl; break;
		}
	}
}
void teacherMenu() //�̹�ҳ�����˵�����
{
	Teacher_message teachers;
	int choice = 9;
	while (choice != 0)
	{
		cout << "\n*============================================================================== * \n" << endl;
		cout << "\t\t\t�̹���ˮ��ѹ���ϵͳ\n" << endl;
		//�̹�ˮ��ѹ���ϵͳ���ֹ��ܵ�ѡ��
		cout << "   1.���  2.��ѯ  3.��ʾ  4.�޸�  5.ɾ��  6.ͳ��  7.����  8.��ȡ  9.�ɷ�  0.�˳� \n\n" << endl;
		cout << "\n*============================================================================== * \n" << endl;
		cout << "����������ѡ�� " << endl;
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
		case 0: system("cls"); cout << "�����˳��̹���ϵͳ�� " << endl; break;
		default: system("cls"); cout << "ѡ��ʧ�� �����ԣ� " << endl; break;
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
		cout << "\t\t1.����Ա�˿�       2.�ർʦ�˿�      0.�˳�\n" << endl;
		cout << "\n*============================================================================== * \n" << endl;
		cout << "����������ѡ�� " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: system("cls"); person.putStudent(); break;
		case 2: system("cls"); person.putclassStudent(); break;
		case 0: system("cls"); cout << "�����˳���ʦ��ѯϵͳ�� " << endl; break;
		default: system("cls"); cout << "ѡ��ʧ�� �����ԣ� " << endl; break;
		}
	}
}
int main() //������
{
	int choice = 3;
	while (choice != 0)
	{
		cout << "\n=================================================================================== = \n" << endl;
		cout << "\n\t\t\t* ��Уˮ��ѹ���ϵͳ *\n\n\n" << endl;
		// ����ϵͳ����Ŀ����������ϵͳ��һ���̹��ģ� һ��ѧ����
		cout << "     1.ѧ��ˮ��ѹ���ϵͳ    2.�̹�ˮ��ѹ���ϵͳ    3.��ʦ��ѯ�˿�     0.�˳�ϵͳ\n" << endl << endl;
		cout << "\n=================================================================================== = \n" << endl;
		cout << "����������ѡ�� " << endl;
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
			cout << "\n\n\t\t\t\t* �����˳�ϵͳ����ӭ�´�ʹ�� * \n\n\n" << endl;
			cout << "*=================================================================================== * \n" << endl; break;
		default:system("cls");
			cout << "ѡ����������ԣ� " << endl; break;
		}
	}
	return 0;
}


//Sources      Individual���ù��ܺ���.cpp
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
	out << "������ " << s.name << endl;
	out << "�Ա� " << s.sex << endl;
	out << "���䣺 " << s.age << endl;
	out << "�༶�� " << s.grade << endl;
	out << "ѧ�ţ� " << s.number << endl;
	out << "��ˮ���� " << s.water << endl;
	out << "�õ����� " << s.electric << endl;
	out << "ˮ�ѣ� " << s.waterfee << endl;
	out << "��ѣ� " << s.powerfare << endl;
	return out;
}
double Individual::CalculateWaterfee(double water)//����ˮ�Ѻ���
{
	if (water <= 50.0)  //��ˮ��50kg�ڵĲ��շ�
		return 0.0;
	else if (water <= 500.0)  //��ˮ����50~500kg֮��ģ�����50�Ĳ���ÿkg�շ�2.8Ԫ
		return ((water - 50.0) * 2.8);
	else
		return (450 * 2.8 + (water - 500.0) * 3.5);//Ϊ�����˷ѣ�����500kg���շ�Ϊÿkg3.5Ԫ
}
double Individual::CalculatePowerfare(double electric)//�����Ѻ���
{
	if (electric <= 3.0)  //�õ���3���ڵĲ��շ�
		return 0.0;
	else if (electric <= 50.0)  //�õ�����3~50��֮��ģ�����50�Ĳ���ÿ���շ�1.0Ԫ
		return ((electric - 3.0) * 1.0);
	else
		return (47 * 1.0 + (electric - 50.0) * 2.5);//Ϊ�����˷ѣ�����50�ȵ��շ�Ϊÿ��2.5Ԫ
}
void Individual::Pay()//�ɷѺ���
{
	waterfee = 0;
	powerfare = 0;  //ȷ�ϽɷѺ󣬽��轻ˮ��ѹ���
}


//Sources       student�˹��ܺ���.cpp
#include <fstream>
#include "individual.h"
#include "student.h"
#include "Student_message.h"

void Student::input() //ѧ����Ϣ���뺯��
{
	cout << "������������ " << endl;
	cin >> name;
	int choice;
	cout << "��ѡ���Ա�1. �У� 2. Ů���� " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: sex = "��"; break;
	case 2: sex = "Ů"; break;
	default:
	{
		system("cls");
		cout << "������� " << endl;
		return;
	}
	}
	cout << "���������䣺 " << endl;
	cin >> age;
	cout << "������༶�� " << endl;
	cin >> grade;
	cout << "������ѧ�ţ� " << endl;
	cin >> number;
	cout << "���������룺 " << endl;
	cin >> password;
	cout << "�����뱾����ˮ����Kg����" << endl;
	cin >> water;
	cout << "�����뱾���õ���(��)��" << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Student::input(int)//ѧ����Ϣ�������루�༭���أ�
{
	cout << "������������ " << endl;
	cin >> name;
	int choice;
	cout << "��ѡ���Ա�1. �У� 2. Ů���� " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: sex = "��"; break;
	case 2: sex = "Ů"; break;
	default:
	{
		system("cls");
		cout << "������� " << endl;
		return;
	}
	}
	cout << "���������䣺 " << endl;
	cin >> age;
	cout << "������༶�� " << endl;
	cin >> grade;
	cout << "�����뱾����ˮ����Kg����" << endl;
	cin >> water;
	cout << "�����뱾���õ���(��)��" << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Student::output() //ѧ����Ϣ�������
{
	cout << "������ " << name << endl;
	cout << "�Ա� " << sex << endl;
	cout << "���䣺 " << age << endl;
	cout << "�༶�� " << grade << endl;
	cout << "ѧ�ţ� " << number << endl;
	cout << "��ˮ���� " << water << endl;
	cout << "�õ����� " << electric << endl;
	cout << "ˮ�ѣ� " << waterfee << endl;
	cout << "��ѣ� " << powerfare << endl;
}
void Student_message::add() //ѧ����Ϣ��Ӻ���
{
	if (amount >= capacity)
	{
		cout << "���ʧ�ܣ��û������� " << endl;
	}
	Student stud;
	cout << "�����������Ա����Ϣ" << endl;
	stud.input();
	for (int i = 0; i < amount; i++)
	{
		if (stud.GetNumber() == stu[i].GetNumber())
		{
			cout << "��ѧ���Ѵ��ڣ������ظ���ӣ� " << endl;
			return;
		}
	}
	if (stud.GetSex() != "��" && stud.GetSex() != "Ů")
	{
		cout << "���Ժ�����" << endl;
		return;
	}
	stu[amount] = stud;
	amount++;
	cout << "��ӳɹ��� " << endl;
}
void Student_message::search() //ѧ����Ϣ��ѯ����
{
	if (amount == 0)
	{
		cout << "��ǰû����Ա��¼�� " << endl;
		return;
	}
	int choice;
	string pass;
	cout << "��ѡ���ѯ��ʽ�� 1. ѧ�Ų��� 2. �������� 3. ��ˮ������ 4. �õ�������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1://ѧ�Ų���
	{
		cout << "������Ҫ��ѯ��ѧ�ţ� " << endl;
		int number;
		cin >> number;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetNumber() == number)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	case 2://��������
	{
		cout << "������Ҫ��ѯ�������� " << endl;
		string name;
		cin >> name;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetName() == name)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	case 3:
	{
		cout << "������Ҫ��ѯ����ˮ���� " << endl;
		double water;
		cin >> water;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetWater() == water)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	case 4:
	{
		cout << "������Ҫ��ѯ���õ����� " << endl;
		double electric;
		cin >> electric;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetElectric() == electric)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << stu[i];
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	default: cout << "�޴�ѡ� �����ԣ� " << endl; break;
	}
}
void Student_message::show() //ѧ����Ϣ��ʾ����
{
	if (amount == 0)
	{
		cout << "û�����ݣ� " << endl;
		return;
	}
	for (int i = 0; i < amount; i++)
	{
		cout << stu[i] << endl;
	}
	cout << "\n\n�밴�س�������" << endl;
	getchar();
	getchar();
	system("cls");
}
void Student_message::compile() //ѧ����Ϣ�༭����
{
	if (amount == 0)
	{
		cout << "��ǰû����Ա��¼�� " << endl;
		return;
	}
	else
	{
		int num;
		cout << "������Ҫ���ҵ�ѧ�ţ� " << endl;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (stu[i].GetNumber() == num)
			{
				string pass;
				cout << "���������룺";
				cin >> pass;
				if (pass == stu[i].GetPassword())
				{
					cout << "�������޸ĺ����Ϣ" << endl;
					stu[i].input(i);
					if (stu[i].GetSex() != "��" && "Ů")
					{
						cout << "���Ժ�����" << endl;
						return;
					}
					system("cls");
					cout << "�޸ĳɹ��� " << endl;
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽���޸�����Ϣ���鲻����ʾ�����˲����ڣ���
	}
}
void Student_message::deleting() //ѧ����Ϣɾ������
{
	if (amount == 0)
	{
		cout << "��ǰû����Ա��¼�� " << endl;
		return;
	}
	cout << "����������ѡ�� " << endl;
	cout << "1. ѧ�Ų���ɾ��   2. ��������ɾ��" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������ѧ�ţ� " << endl;
		int num;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (num == stu[i].GetNumber())
			{
				cout << "�Ƿ�ȷ��ɾ���� " << endl;
				cout << "1. �� 2. ��" << endl;
				int choice1;
				cin >> choice1;
				switch (choice1)
				{
				case 1:
				{
					cout << "���������룺";
					string pass;
					cin >> pass;
					if (pass == stu[i].GetPassword())
					{
						for (int k = i; k < amount - 1; k++)
						{
							stu[k] = stu[k + 1];
						}
						cout << "ɾ���ɹ���" << endl;
						amount--;
						cout << "\n\n�밴�س�������" << endl;
						getchar();
						getchar();
						system("cls");
					}
					else
					{
						cout << "����������Ժ����ԣ�" << endl;
					}
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "�����ڴ�ѡ�" << endl; break;
				}return;
			}
		}
		system("cls");
		cout << "δ��ѯ�����ˣ����Ժ����ԣ� " << endl;
	}; break;
	case 2:
	{
		cout << "������������ " << endl;
		string name;
		cin >> name;
		for (int i = 0; i < amount; i++)
		{
			if (name == stu[i].GetName())
			{
				cout << "�Ƿ�ȷ��ɾ���� " << endl;
				cout << "1. �� 2. �� " << endl;
				int choice2;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
				{
					for (int k = i; k < amount - 1; k++)
					{
						cout << "���������룺";
						string pass;
						cin >> pass;
						if (pass == stu[k].GetPassword())
						{
							stu[k] = stu[k + 1];
							cout << "\n\n�밴�س�������" << endl;
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							cout << "���������˶Ժ����ԡ�" << endl;
						}
					}
					cout << "ɾ���ɹ��� " << endl;
					amount--;
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "�����ڴ�ѡ��� " << endl; break;
				} return;
			}
		}
		system("cls");
		cout << "δ��ѯ�����ˣ����Ժ����ԣ� " << endl;
	}; break;
	default: cout << "û�д�ѡ�ʧ�ܣ� " << endl; break;
	}
}
void Student_message::statistics() //ѧ����Ϣͳ�ƺ���
{
	cout << "1. ѧ������ˮ�������õ��� 2. ѧ���ܵ�ˮ���" << endl;
	int choice;
	cout << "��ѡ������ѡ� " << endl;
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
		cout << "ѧ������ˮ��Ϊ�� " << all_water << endl;
		cout << "ѧ�����õ���Ϊ�� " << all_electric << endl;
	} break;
	case 2:
	{
		double all_waterfare = 0.0, all_powerfee = 0.0;
		for (int i = 0; i < amount; i++)
		{
			all_waterfare += stu[i].GetWaterfee();
			all_powerfee += stu[i].GetPowerfare();
		}
		cout << "ѧ����ˮ��Ϊ�� " << all_waterfare << endl;
		cout << "ѧ���ܵ��Ϊ�� " << all_powerfee << endl;
	} break;
	default: cout << "������� ���������룡 " << endl; break;
	}
}
void Student_message::saving() //ѧ����Ϣ���溯��
{
	ofstream ofs;
	ofs.open("StudentMessage.txt", ios::out | ios::binary);
	for (int i = 0; i < this->amount; i++)
	{
		ofs.write((const char*)&stu[i], sizeof(Student_message));
	}
	ofs.close();
}
void Student_message::reading() //ѧ����Ϣ��ȡ����
{
	ifstream ifs;
	ifs.open("StudentMessage.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	for (int i = 0; i < this->amount; i++)
	{
		ifs.read((char*)&stu[i], sizeof(Student_message));
		cout << stu[i] << endl;
	}
	ifs.close();
}
void Student_message::payfee()//ѧ���ɷѺ���
{
	cout << "������Ҫ�ɷ��ߵ�ѧ�ţ�" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < amount; i++)
	{
		if (stu[i].GetNumber() == number)
		{
			string pass;
			cout << "���������룺";
			cin >> pass;
			if (pass == stu[i].GetPassword())
			{
				cout << stu[i].GetName() << "��ã�" << endl;
				cout << "   ������Ӧ����ˮ�ѣ�" << stu[i].GetWaterfee() << endl;
				cout << "   ������Ӧ���ɵ�ѣ�" << stu[i].GetPowerfare() << endl;
				cout << "   �Ƿ�ȷ�Ͻ��ɣ�" << endl;
				cout << "     1����    2����   " << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					if (stu[i].Getpowerfare() == 0 && stu[i].Getwaterfee() == 0)
					{
						system("cls");
						cout << "���ѽɹ��ѻ������Ͻ�ˮ��ѣ�" << endl; break;
					}
					else
					{
						stu[i].Pay();
						system("cls");
						cout << "�ɷѳɹ���" << endl; break;
					}
				}
				case 2:cout << "�뾡��ɷѣ�" << endl; break;
				default:cout << "ѡ���������Ժ����ԣ�" << endl; break;
				}
				cout << "\n\n�밴�س�������" << endl;
				getchar();
				getchar();
				system("cls"); return;
			}
			else
			{
				cout << "���������˶Ժ����ԡ�" << endl; return;
			}
		}
	}
	cout << "���޴��ˣ����Ժ����ԣ�" << endl;
}

//Sources       teacher�˹��ܺ���.cpp
#include "individual.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include <windows.h>

void Teacher::input() //�̹���Ϣ���뺯��
{
	int choice_sex;
	int choice_part;
	cout << "������������ " << endl;
	cin >> name;
	cout << "��ѡ���Ա�1. �У� 2. Ů���� " << endl;
	cin >> choice_sex;
	switch (choice_sex)
	{
	case 1: sex = "��"; break;
	case 2: sex = "Ů"; break;
	default:
	{
		system("cls");
		cout << "������� " << endl;
		return;
	}
	}
	cout << "���������䣺 " << endl;
	cin >> age;
	cout << "��ѡ�������ţ� " << endl;
	cout << "1. �ർʦ�� 2. ����Ա�� 3. �γ̵�ʦ�� 4. ���񴦣� 5.������Ա�� 6.������Ա" << endl;
	cin >> choice_part;
	switch (choice_part)
	{
	case 1:
	{
		department = "�ർʦ";
		cout << "���������İ༶��" << endl;
		cin >> Grade; break;
	}
	case 2: department = "����Ա"; break;
	case 3: department = "�γ̵�ʦ"; break;
	case 4: department = "����"; break;
	case 5: department = "������Ա"; break;
	case 6: department = "������Ա"; break;
	default: cout << "�������" << endl; return;
	}
	cout << "������ְ���ţ� " << endl;
	cin >> number;
	cout << "���������룺 " << endl;
	cin >> password;
	cout << "�����������ˮ���� " << endl;
	cin >> water;
	cout << "����������õ����� " << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Teacher::input(int)//�̹���Ϣ�������루�༭���أ�
{
	int choice_sex;
	int choice_part;
	cout << "������������ " << endl;
	cin >> name;
	cout << "��ѡ���Ա�1. �У� 2. Ů���� " << endl;
	cin >> choice_sex;
	switch (choice_sex)
	{
	case 1: sex = "��"; break;
	case 2: sex = "Ů"; break;
	default:
	{
		system("cls");
		cout << "������� " << endl;
		return;
	}
	}
	cout << "���������䣺 " << endl;
	cin >> age;
	cout << "��ѡ�������ţ� " << endl;
	cout << "1. �ർʦ�� 2. ����Ա�� 3. �γ̵�ʦ�� 4. ���񴦣� 5.������Ա�� 6.������Ա" << endl;
	cin >> choice_part;
	switch (choice_part)
	{
	case 1:
	{
		department = "�ർʦ";
		cout << "���������İ༶��" << endl;
		cin >> Grade; break;
	}
	case 2: department = "����Ա"; break;
	case 3: department = "�γ̵�ʦ"; break;
	case 4: department = "����"; break;
	case 5: department = "������Ա"; break;
	case 6: department = "������Ա"; break;
	default: cout << "�������" << endl; return;
	}
	cout << "�����������ˮ���� " << endl;
	cin >> water;
	cout << "����������õ����� " << endl;
	cin >> electric;
	waterfee = CalculateWaterfee(water);
	powerfare = CalculatePowerfare(electric);
	system("cls");
}
void Teacher::output() //�̹���Ϣ�������
{
	cout << "������ " << name << endl;
	cout << "�Ա� " << sex << endl;
	cout << "���䣺 " << age << endl;
	cout << "�������ţ� " << department << endl;
	cout << "ְ���ţ� " << number << endl;
	cout << "��ˮ���� " << water << endl;
	cout << "�õ����� " << electric << endl;
	cout << "ˮ�ѣ� " << waterfee << endl;
	cout << "��ѣ� " << powerfare << endl;
}
void Teacher_message::add() //�̹���Ϣ��Ӻ���
{
	if (amount >= capacity)
	{
		cout << "���棡 �û������� " << endl;
		return;
	}
	Teacher teache;//
	cout << "�����������Ա����Ϣ" << endl;
	teache.input();
	for (int i = 0; i < amount; i++)
		if (teache.GetNumber() == teach[i].GetNumber())
		{
			cout << "�ñ����Ա�Ѵ��ڣ� " << endl;
			return;
		}
	if (teache.GetSex() != "��" && "Ů")
	{
		cout << "����������Ժ�����" << endl;
		return;
	}
	teach[amount] = teache;
	amount++;
	cout << "��ӳɹ��� " << endl;
}
void Teacher_message::search() //�̹���Ϣ��ѯ����
{
	if (amount == 0)
	{
		cout << "��ǰû����Ա��¼�� " << endl;
		return;
	}
	int choice;
	string pass;
	cout << "��ѡ���ѯ��ʽ: 1.ְ���Ų��� 2.�������� 3.��ˮ������ 4.�õ�������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������Ҫ��ѯ��ְ���ţ� " << endl;
		int number;
		cin >> number;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetNumber() == number)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	case 2:
	{
		cout << "������Ҫ��ѯ�������� " << endl;
		string name;
		cin >> name;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetName() == name)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	}break;
	case 3:
	{
		cout << "������Ҫ��ѯ����ˮ���� " << endl;
		double water;
		cin >> water;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetWater() == water)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	case 4:
	{
		cout << "������Ҫ��ѯ���õ����� " << endl;
		double electric;
		cin >> electric;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetElectric() == electric)
			{
				cout << "���������룺";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					teach[i].output();
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽����ʾ����Ϣ���鲻����ʾ�����˲����ڣ���
	} break;
	default: cout << "�޴�ѡ� �����ԣ� " << endl; break;
	}
}
void Teacher_message::show() //�̹���Ϣ��ʾ����
{
	if (amount == 0)
	{
		cout << "û�����ݣ� " << endl;
		return;
	}

	for (int i = 0; i < amount; i++)
	{
		teach[i].output();
	}
	cout << "\n\n�밴�س�������" << endl;
	getchar();
	getchar();
	system("cls");
}
void Teacher_message::compile() //�̹���Ϣ�༭����
{
	if (amount == 0)
	{
		cout << "��ǰû����Ա��¼�� " << endl;
		return;
	}
	else
	{
		int num;
		cout << "������Ҫ���ҵ�ְ���ţ� " << endl;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (teach[i].GetNumber() == num)
			{
				string pass;
				cout << "���������룺";
				cin >> pass;
				if (pass == teach[i].GetPassword())
				{
					cout << "�������޸ĺ����Ϣ" << endl;
					teach[i].input(i);
					system("cls");
					cout << "�޸ĳɹ��� " << endl;
					cout << "\n\n�밴�س�������" << endl;
					getchar();
					getchar();
					system("cls"); return;
				}
				else
				{
					system("cls");
					cout << "���������˶Ժ����ԡ�" << endl; return;
				}
			}
		}
		system("cls");
		cout << "���˲����ڣ������ԣ� " << endl;
		getchar();
		getchar();
		return;//���鵽���޸�����Ϣ���鲻����ʾ�����˲����ڣ���

	}
	cout << "���޴�����Ϣ�����Ժ����ԣ� " << endl;
}
void Teacher_message::deleting() //�̹���Ϣɾ������
{
	if (amount == 0)
	{
		cout << "��ǰû����Ա��¼�� " << endl;
		return;
	}
	cout << "����������ѡ�� " << endl;
	cout << "1. ְ���Ų���ɾ��   2. ��������ɾ��" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������ְ���ţ� " << endl;
		int num;
		cin >> num;
		for (int i = 0; i < amount; i++)
		{
			if (num == teach[i].GetNumber())
			{
				cout << "�Ƿ�ȷ��ɾ���� " << endl;
				cout << "1. �� 2. ��" << endl;
				int choice1;
				cin >> choice1;
				switch (choice1)
				{
				case 1:
				{
					cout << "���������룺";
					string pass;
					cin >> pass;
					if (pass == teach[i].GetPassword())
					{
						for (int k = i; k < amount - 1; k++)
						{
							teach[k] = teach[k + 1];
						}
						cout << "ɾ���ɹ���" << endl;
						amount--;
						cout << "\n\n�밴�س�������" << endl;
						getchar();
						getchar();
						system("cls");
					}
					else
					{
						cout << "����������Ժ����ԣ�" << endl;
					}
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "�����ڴ�ѡ�" << endl; break;
				}return;
			}
		}
		system("cls");
		cout << "δ��ѯ�����ˣ����Ժ����ԣ� " << endl;
	}; break;
	case 2:
	{
		cout << "������������ " << endl;
		string name;
		cin >> name;
		for (int i = 0; i < amount; i++)
		{
			if (name == teach[i].GetName())
			{
				cout << "�Ƿ�ȷ��ɾ���� " << endl;
				cout << "1. �� 2. �� " << endl;
				int choice2;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
				{
					for (int k = i; k < amount - 1; k++)
					{
						cout << "���������룺";
						string pass;
						cin >> pass;
						if (pass == teach[k].GetPassword())
						{
							teach[k] = teach[k + 1];
							cout << "\n\n�밴�س�������" << endl;
							getchar();
							getchar();
							system("cls");
						}
						else
						{
							cout << "���������˶Ժ����ԡ�" << endl;
						}
					}
					cout << "ɾ���ɹ��� " << endl;
					amount--;
				}; break;
				case 2:
				{
					system("cls");
					return;
				}
				default:
					cout << "�����ڴ�ѡ��� " << endl; break;
				} return;
			}
		}
		system("cls");
		cout << "δ��ѯ�����ˣ����Ժ����ԣ� " << endl;
	}; break;
	default: cout << "û�д�ѡ�ʧ�ܣ� " << endl; break;
	}
}
void Teacher_message::statistics() //�̹���Ϣͳ�ƺ���
{
	cout << "1.��ʦ��ˮ�������õ�����    2.��ʦ�ܵ�ˮ���   3." << endl;
	int choice;
	cout << "����������ѡ�� " << endl;
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
		cout << "�̹�����ˮ��Ϊ�� " << all_water << endl;
		cout << "�̹����õ���Ϊ�� " << all_electric << endl;
	} break;
	case 2:
	{
		double all_waterfare = 0.0, all_powerfee = 0.0;
		for (int i = 0; i < Teacher_message::amount; i++)
		{
			all_waterfare += teach[i].GetWaterfee();
			all_powerfee += teach[i].GetPowerfare();
		}
		cout << "�̹���ˮ��Ϊ�� " << all_waterfare << endl;
		cout << "�̹��ܵ��Ϊ�� " << all_powerfee << endl;
	} break;
	default: cout << "������� ���������룡 " << endl; break;
	}
}
void Teacher_message::saving() //�̹���Ϣ���溯��
{
	ofstream ofs;
	ofs.open("TeacherMessage.txt", ios::out | ios::binary);
	for (int i = 0; i < this->amount; i++)
	{
		ofs.write((const char*)&teach[i], sizeof(Teacher_message));
	}
	ofs.close();
	cout << "�ļ�д��ɹ���" << endl;
}
void Teacher_message::reading() //�̹���Ϣ��ȡ����
{
	ifstream ifs;
	ifs.open("TeacherMessage.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	for (int i = 0; i < this->amount; i++)
	{
		ifs.read((char*)&teach[i], sizeof(Teacher_message));
	}
	ifs.close();
}
void Teacher_message::payfee()//�̹��ɷѺ���
{
	cout << "������Ҫ�ɷ��ߵ�ְ���źţ�" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < amount; i++)
	{
		if (teach[i].GetNumber() == number)
		{
			string pass;
			cout << "���������룺";
			cin >> pass;
			if (pass == teach[i].GetPassword())
			{
				cout << teach[i].GetName() << "��ã�" << endl;
				cout << "   ������Ӧ����ˮ�ѣ�" << teach[i].GetWaterfee() << endl;
				cout << "   ������Ӧ���ɵ�ѣ�" << teach[i].GetPowerfare() << endl;
				cout << "   �Ƿ�ȷ�Ͻ��ɣ�" << endl;
				cout << "     1����    2����   " << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					if (teach[i].Getpowerfare() == 0 && teach[i].Getwaterfee() == 0)
					{
						system("cls");
						cout << "���ѽɹ��ѻ������Ͻ�ˮ��ѣ�" << endl; break;
					}
					else
					{
						teach[i].Pay();
						system("cls");
						cout << "�ɷѳɹ���" << endl; break;
					}
				}
				case 2:cout << "�뾡��ɷѣ�" << endl; break;
				default:cout << "ѡ���������Ժ����ԣ�" << endl; break;
				}
				cout << "\n\n�밴�س�������" << endl;
				getchar();
				getchar();
				system("cls"); return;
			}
			else
			{
				cout << "���������˶Ժ����ԡ�" << endl; return;
			}
		}
	}
	cout << "���޴��ˣ����Ժ����ԣ�" << endl;
}

//Sources       people�˹��ܺ���.cpp
#include "student.h"
#include "Teacher.h"
#include "Teacher_message.h"
#include "Student_message.h"
#include "People.h"

void People::putStudent()
{
	cout << "������ְ����" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < Teacher_message::amount; i++)
	{
		if ((t + i)->GetNumber() == number)
		{
			string pass;
			cout << "���������룺";
			cin >> pass;
			if (pass == (t + i)->GetPassword())
			{
				if ((t + i)->department == "����Ա")
				{
					int choice;
					cout << "\n\n        1.�鿴ȫ��ͬѧ��Ϣ      2.�鿴δ�ɷ�ͬѧ��Ϣ\n\n" << endl;
					cin >> choice;
					switch (choice)
					{
					case 1:
					{
						for (int j = 0; j < Student_message::amount; j++)
						{
							(s + j)->output();
						}
						cout << "��Ŀ���Ա��" << endl;
					}
					case 2:
					{
						for (int j = 0; j < Student_message::amount; j++)
						{
							if ((s + j)->GetPowerfare() != 0 || (s + j)->GetWaterfee() != 0)
								(s + j)->output();
						}
						cout << "��Ŀ���Ա��" << endl;
					}
					}

				}
				else
				{
					cout << "���Ǹ���Ա���޷���Ȩ��" << endl;
				}
				cout << "\n\n�밴�س�������" << endl;
				getchar();
				getchar();
				system("cls");
				return;
			}
			else
			{
				system("cls");
				cout << "���������˶Ժ����ԡ�" << endl;
				return;
			}
		}
	}
	system("cls");
	cout << "���˲����ڣ������ԣ� " << endl;
}
void People::putclassStudent()
{
	cout << "������ְ����" << endl;
	int number;
	cin >> number;
	for (int i = 0; i < Teacher_message::amount; i++)
	{
		if ((t + i)->GetNumber() == number)
		{
			string pass;
			cout << "���������룺";
			cin >> pass;
			if (pass == (t + i)->GetPassword())
			{
				if ((t + i)->department == "�ർʦ")
				{
					int choice;
					cout << "\n\n        1.�鿴ȫ��ͬѧ��Ϣ      2.�鿴δ�ɷ�ͬѧ��Ϣ\n\n" << endl;
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
						cout << "��Ŀ���Ա��" << endl;
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
						cout << "��Ŀ���Ա��" << endl;
					}
					}

				}
				else
				{
					cout << "���ǰർʦ���޷���Ȩ��" << endl;
				}
				cout << "\n\n�밴�س�������" << endl;
				getchar();
				getchar();
				system("cls");
			}
			else
			{
				system("cls");
				cout << "���������˶Ժ����ԡ�" << endl;
			}
		}
	}
	system("cls");
	cout << "���˲����ڣ������ԣ� " << endl;
}

//�Զ���ͷ�ļ���
//Headers individual.h
#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
const int capacity = 5000;
class Individual //������Ա��
{
protected:  //Ϊ������Ϣ��ȫ����������Ϣ����Ϊprotected����
	string name; //����
	string sex; //�Ա�
	int age; //����
	int number; //ѧ�Ż�ְ����
	string password; //�������룬���ڵ�¼����ֹ���˶������
	double water; //��ˮ��
	double electric; //�õ���
	double waterfee; //ˮ��
	double powerfare; //���
public:    //���ܺ���
	virtual void input() = 0; //�������뺯��
	virtual void output() = 0; //�����������    //���ʦ��ѧ�����롢�������Ϣ��ͬ�������ô��麯��ʵ��
	string GetName() { return name; } //��ȡ����
	string GetSex() { return sex; }//��ȡ�Ա�
	int GetAge() { return age; } //��ȡ����
	int GetNumber() { return number; } //��ȡѧ�Ż�ְ����
	string GetPassword() { return password; }//��ȡ��������
	double GetWater() { return water; } //��ȡ��ˮ��
	double GetElectric() { return electric; } //��ȡ�õ���
	double GetWaterfee() { return CalculateWaterfee(water); }//���Ӧ��ˮ��
	double GetPowerfare() { return CalculatePowerfare(electric); }//���Ӧ�����
	double Getwaterfee() { return waterfee; }//��ýɷѺ�ˮ��
	double Getpowerfare() { return powerfare; }//��ýɷѺ���
	void Pay();//�����ɷѺ���
	double CalculateWaterfee(double);//��������ˮ�Ѻ���
	double CalculatePowerfare(double);//���������Ѻ���
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

class Student : public Individual //�������Individual��ѧ����
{
	friend ostream& operator <<(ostream& out, Student& s);
public:
	string grade; //����ѧ���༶����̹���ͬ��
	void input(); //����ѧ�������뺯������̹���ͬ��
	void output(); //����ѧ���������������̹���ͬ��
	void input(int);//����ѧ����༭����������input��
};

//Header Student_message.h
#pragma once
#include "individual.h"
#include "student.h"
class Student_message //����ѧ����Ϣ��
{
protected:
	int amount; //��ǰ��������
	Student stu[capacity]; //����ѧ�����飬���ڴ���ѧ����Ϣ
public:
	Student_message() { amount = 0; } //���嵱ǰѧ����Ϣ����Ϊ0
	void add(); //����ѧ����Ϣ��Ӻ���
	void search(); //����ѧ����Ϣ��ѯ����
	void show(); //����ѧ����Ϣ��ʾ����
	void compile(); //����ѧ����Ϣ�༭����
	void deleting(); //����ѧ����Ϣɾ������
	virtual void statistics(); //����ѧ����Ϣͳ�ƺ���(�����ڽ̹���
	void saving(); //����ѧ����Ϣ���溯��
	void reading(); //����ѧ����Ϣ��ȡ����
	void payfee(); //����ѧ����Ϣ�ɷѺ���
};

//Header Teacher.h
#pragma once
#include "individual.h"
class Teacher : public Individual //�������Individual�Ľ̹���
{
public: //�������ݳ�Ա
	string department;
	string Grade;
	void input(); //�����̹������뺯������ѧ����ͬ��
	void output(); //�����̹��������������ѧ����ͬ��
	void input(int);//�����̹���༭����������input��
};

//Header Teacher_message.h
#pragma once
#include "individual.h"
#include "Teacher.h"

class Teacher_message //�����̹���Ϣ��
{
protected:
	Teacher teach[capacity];//����̹����飬���ڴ���̹���Ϣ
	int amount; //��ǰ��������
public:
	Teacher_message() { amount = 0; } //��ʼ��¼������Ϊ 0
	void add(); //�����̹���Ϣ��Ӻ���
	void search(); //�����̹���Ϣ��ѯ����
	void show(); //�����̹���Ϣ��ʾ����
	void compile(); //�����̹���Ϣ�༭����
	void deleting(); //�����̹���Ϣɾ������
	void saving(); //�����̹���Ϣ���溯��
	void statistics();//�����̹���Ϣͳ�ƺ���
	void reading(); //�����̹���Ϣ��ȡ����
	void payfee();  //�����̹���Ϣ �ɷѺ���
};
