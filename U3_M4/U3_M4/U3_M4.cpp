#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int n, i, j, number, max, min, temp, temp2, count, sum;

	do
	{
		cout << "������� ����� �������: ";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
				{

				/*1. ��� ��������� n � ����� ����� ��������� n! � n2.*/

				cout << "������� ����� n: ";
				cin >> number;

				int factorial, square;

				cout << "\tn\t" << "\tn!\t" << "\tn^2\t" << endl;
				cout << "--------------------------------------------------" << endl;

					for (factorial = 1, i = 1; i <= number; i++)
					{
						factorial *= i;
						square = pow(i, 2);
						cout << "\t" << i << "\t\t" << factorial << "\t\t" << square << endl;
					}

					cout << endl;

				system("pause");
				system("cls");

				}
			break;

			case 2:
				{

				/*2. ������ ����������� ����� �� 10 �� N.
				����� ���������� ����� ������ ����������� �����.*/

				cout << "������� ����������� ����� �� 10 �� N: ";
				cin >> number;

					while (number < 10)
					{
						cout << "����� ������ ���� � ��������� �� 10 �� N. " << endl;
						cout << "������� ����� ��� ���." << endl;
						cin >> number;
					}

					count = 0;
					max = -1;
					temp = number;

					while (temp > 0)
					{
						temp /= 10;
						count++;
					}

					temp = number;
					temp2 = number;

					for (i = 1; i <= count; i++)
					{
						temp %= 10;
						if (temp > max) max = temp;
						temp2 /= 10;
						temp = temp2;
					}

					cout << "������������ ����� � ����� " << number << " = " << max << endl;
					cout << endl;

				system("pause");
				system("cls");

				}
			break;

			case 3:
				{
				/*3. ������ ����������� ����� �� 10 �� N.
				��� ������������ ����� ����� ������ ����� � ����� ��� ����.*/

				cout << "������� ����������� ����� �� 10 �� N: ";
				cin >> number;

					while (number < 10)
					{
						cout << "����� ������ ���� � ��������� �� 10 �� N. " << endl;
						cout << "������� ����� ��� ���." << endl;
						cin >> number;
					}

					count = 0;
					temp = number;

					while (temp > 0)
					{
						temp /= 10;
						count++;
					}

					temp = number;

					for (i = 1; i < count; i++) temp /= 10;
					cout << "������ ����� ����� ��� " << temp << endl;

					temp = number;
					temp2 = number;
					sum = 0;

					for (i = 1; i <= count; i++)
					{
						temp2 %= 10;
						sum += temp2;
						temp /= 10;
						temp2 = temp;
					}

					cout << "����� ���� � ����� " << number << " = " << sum << endl;
					cout << endl;

				system("pause");
				system("cls");

				}
			break;

			case 4:
			{

			/*4. ����������, �������� �� ����� ����� ������������,
			�. �. ����� ������, ������� ��������� �������� ����� ������� �
			������ ������ (���������, ����������).
			��������, ����� 123321, 202, 9889, 5555.*/

				int reversed;

				cout << "������� ����������� �����: ";
				cin >> number;

				temp = number;
				count = 0;

					while (temp > 0)
					{
						temp /= 10;
						count++;
					}

					temp = number;
					temp2 = number;
					reversed = 0;

					for (i = 1; i <= count; i++)
					{
						temp2 %= 10;
						reversed = (reversed * 10) + temp2;
						temp /= 10;
						temp2 = temp;
					}

					if (number == reversed)
						cout << "����� �������� �����������." << endl;
					else
						cout << "����� �� �������� �����������." << endl;

					cout << endl;

					system("pause");
					system("cls");

				}
			break;

			case 5:
				{
				/*5. ������� ����� ��������� ����� �� 12 �� 80 �� 1-����� � ������.*/

					int sumSq;

					for (i = 12; i <= 80; i++)
					{
						for (j = 12; j <= 80; j++)
						{
							sumSq = pow(j, 2) + pow(i, 2);
							cout << sumSq << "\t";
						}

						cout << endl;
						cout << endl;
					}

					cout << endl;

					system("pause");
					system("cls");

				}
			break;

			case 6:
			/*6. ������� �������� ��������� ����� �� 22 �� 88
			�� 1- ����� � ������.*/

			int remainderSq;

			for (i = 22; i <= 88; i++)
			{
				for (j = 22; j <= 88; j++)
				{
					remainderSq = pow(j, 2) - pow(i, 2);
					/*if (j % 11 != 0) cout << remainderSq << "\t";
					else cout << endl;	*/
					cout << remainderSq << "\t";
				}
				cout << endl;
				cout << endl;
			}
			cout << endl;
			break;

		case 7:
			/*7. ���� ������������ ����� A � ����������� ����� �� 1 �� N (> 0).
			����� �������� ��������� A � ����������� ����� N.*/
			double A;

			cout << "������� ������������ ����� �: ";
			cin >> A;
			cout << "������� ����������� ����� N: ";
			cin >> number;

			for (i = 1; i <= number; i++)
			{
				if (i % 10 != 0) cout << pow(A, 2) - pow(i, 2) << " ";
				else cout << endl;
			}
			cout << endl;
			break;

		case 8:
			/*8. ������ ����������� ����� �� 10 �� N.
			����� ���������� ����� ������ ����������� �����.*/

			cout << "������� ����������� ����� �� 10 �� N: ";
			cin >> number;

			while (number < 10)
			{
				cout << "����� ������ ���� � ��������� �� 10 �� N. " << endl;
				cout << "������� ����� ��� ���." << endl;
				cin >> number;
			}

			count = 0;
			min = number + 1;
			temp = number;

			while (temp > 0)
			{
				temp /= 10;
				count++;
			}

			temp = number;
			temp2 = number;

			for (i = 1; i <= count; i++)
			{
				temp %= 10;
				if (temp < min) min = temp;
				temp2 /= 10;
				temp = temp2;
			}

			cout << "����������� ����� � ����� " << number << " = " << min << endl;
			cout << endl;
			break;

		case 9:
			/*9. �������� ���������� �����, ��������� ������ �� 20-�� ������-��������
			���������� �� �������. �������� ����� ��� � ������� ��������
			(�� ���� ���� ������ �� ������� ���������� ���������� �����).
			����������, ����� ����� ������ �������, ��������� N �����
			(�����������, ��� �������� N �������  � �������).
			�������� �������� �� ������������.
			a.	� ����� ���� ����������� �������� 22 �������� � �������;
			b.	� ����� ���� ������� ������� ������ ������ 120 ��������;
			c.	� ����� ���� ����� ������, ��������� �� ��� �����,
			������� � ������� ����, �������� 800 ��������� */

			srand(time(NULL));

			int point;

			cout << "������� ���������� ����� (������������ ���������� ����� 40): ";
			cin >> number;

			max = 41;

			for (i = 1; i <= 20; i++)
			{
				temp = 1 + rand() % 2;
				max = max - temp;
				cout << "������� " << i << " ������� " << max << " �����" << endl;

				if (max == number) cout << "����� ������� " << i << endl;

			}

			cout << "������� � ����� ����������� ����� ���." << endl;
			cout << endl;
			break;

		case 10:
			/*10. ���� ����������� �����  n (n<9999).
			����� ������������� ����� ����� (� �������������, ��� n>10).*/

			int second;

			cout << "������� ����������� ����� ����� 10 �� 9 999: ";
			cin >> number;

			while (number < 10 || number > 9999)
			{
				cout << "����� ������ ���� � ��������� ����� 10 �� 9 999. " << endl;
				cout << "������� ����� ��� ���." << endl;
				cin >> number;
			}

			temp = number;
			temp2 = number;

			for (i = 1; i <= 2; i++)
			{
				temp %= 10;
				second = temp;
				temp2 /= 10;
				temp = temp2;
			}

			cout << "������������� ����� � �����: " << second << endl;
			cout << endl;
			break;

		case 11:
			/*11. ���� ����� �� 1 �� 1000 � ����� m.
			������� ��� ������� �� ������� ������ ����� �� ����� m.*/

			cout << "������� ����������� ����� m: ";

			cin >> number;

			cout << "������� �� ������� ������ ����� �� ����� " << number << endl;

			for (i = 200; i <= 1000; i += 200)
			{
				cout << i;
				temp = i;
				temp2 = i;
				while (temp2 != 0)
				{
					temp = temp%number;
					cout << "\t" << temp;
					temp2 /= number;
					temp = temp2;
				}
				cout << endl;
			}
			cout << endl;
			break;

		}

	} while (n != 0);

}