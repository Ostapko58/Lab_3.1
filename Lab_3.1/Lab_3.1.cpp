// Lab_03_1.cpp
// < ������� ������ >
// ����������� ������ No 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 5

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x= "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	
	A = 1 / abs(x + 2) + 1;
	if (x<1)
	{
		B = 7 * x * x + x - 8;
		cout << "x<1" << endl;
	}
	if (1 <= x && x <= 4)
	{
		B = cos((x + 4) / sqrt(11)) / sin((x + 4) / sqrt(11)) + 3;
		cout << "1 <= x && x <= 4" << endl;
	}
	if (x>4)
	{
		B = sqrt(1 + abs(pow(cos(x), 3)));
		cout << "x>4" << endl;
	}

	y = A - B;
	cout<<"1)y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	
	if (x<1)
	{
		B = 7 * x * x + x - 8;
		cout << "x<1" << endl;
	}
	else 
		if (x>4)
		{
			B = sqrt(1 + abs(pow(cos(x), 3)));
			cout << "x>4" << endl;
		}
		else
		{
			B = cos((x + 4) / sqrt(11)) / sin((x + 4) / sqrt(11)) + 3;
			cout << "1 <= x && x <= 4" << endl;
		}
	
	y = A - B;
	cout << "2)y = " << y << endl;
	
	return 0;
}