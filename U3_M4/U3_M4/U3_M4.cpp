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
		cout << "Введите номер задания: ";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
				{

				/*1. Для заданного n в одном цикле вычислить n! и n2.*/

				cout << "Введите число n: ";
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

				/*2. Задано натуральные числа от 10 до N.
				Найти наибольшую цифру целого десятичного числа.*/

				cout << "Введите натуральные числа от 10 до N: ";
				cin >> number;

					while (number < 10)
					{
						cout << "Число должно быть в интервале от 10 до N. " << endl;
						cout << "Введите число еще раз." << endl;
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

					cout << "Максимальное цифра в числе " << number << " = " << max << endl;
					cout << endl;

				system("pause");
				system("cls");

				}
			break;

			case 3:
				{
				/*3. Задано натуральные числа от 10 до N.
				Для натурального числа найти первую цифру и сумму его цифр.*/

				cout << "Введите натуральные числа от 10 до N: ";
				cin >> number;

					while (number < 10)
					{
						cout << "Число должно быть в интервале от 10 до N. " << endl;
						cout << "Введите число еще раз." << endl;
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
					cout << "Первая цифра числа это " << temp << endl;

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

					cout << "Сумма цифр в числе " << number << " = " << sum << endl;
					cout << endl;

				system("pause");
				system("cls");

				}
			break;

			case 4:
			{

			/*4. Определить, является ли целое число симметричным,
			т. е. таким числом, которое одинаково читается слева направо и
			справа налево (палиндром, перевертыш).
			Например, числа 123321, 202, 9889, 5555.*/

				int reversed;

				cout << "Введите натуральное число: ";
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
						cout << "Число являестя полиндромом." << endl;
					else
						cout << "Число не являестя полиндромом." << endl;

					cout << endl;

					system("pause");
					system("cls");

				}
			break;

			case 5:
				{
				/*5. Вывести сумму квадратов чисел от 12 до 80 по 1-числу в строке.*/

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
			/*6. Вывести разность квадратов чисел от 22 до 88
			по 1- числу в строке.*/

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
			/*7. Дано вещественное число A и натуральные числа от 1 до N (> 0).
			Найти разности квадратов A и натуральных чисел N.*/
			double A;

			cout << "Введите вещественное число А: ";
			cin >> A;
			cout << "Введите натуральное число N: ";
			cin >> number;

			for (i = 1; i <= number; i++)
			{
				if (i % 10 != 0) cout << pow(A, 2) - pow(i, 2) << " ";
				else cout << endl;
			}
			cout << endl;
			break;

		case 8:
			/*8. Задано натуральные числа от 10 до N.
			Найти наименьшую цифру целого десятичного числа.*/

			cout << "Введите натуральные числа от 10 до N: ";
			cin >> number;

			while (number < 10)
			{
				cout << "Число должно быть в интервале от 10 до N. " << endl;
				cout << "Введите число еще раз." << endl;
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

			cout << "Минимальная цифра в числе " << number << " = " << min << endl;
			cout << endl;
			break;

		case 9:
			/*9. Известно количество очков, набранных каждой из 20-ти команд-участниц
			первенства по футболу. Перечень очков дан в порядке убывания
			(ни одна пара команд не набрала одинаковое количество очков).
			Определить, какое место заняла команда, набравшая N очков
			(естественно, что значение N имеется  в перечне).
			Условный оператор не использовать.
			a.	в каком году урожайность превысит 22 центнера с гектара;
			b.	в каком году площадь участка станет больше 120 гектаров;
			c.	в каком году общий урожай, собранный за все время,
			начиная с первого года, превысит 800 центнеров */

			srand(time(NULL));

			int point;

			cout << "Введите количество очков (максимальное количество очков 40): ";
			cin >> number;

			max = 41;

			for (i = 1; i <= 20; i++)
			{
				temp = 1 + rand() % 2;
				max = max - temp;
				cout << "Команда " << i << " набрала " << max << " очков" << endl;

				if (max == number) cout << "Номер команды " << i << endl;

			}

			cout << "Команды с таким количеством очков нет." << endl;
			cout << endl;
			break;

		case 10:
			/*10. Дано натуральное число  n (n<9999).
			Найти предпоследнюю цифру числа (в предположении, что n>10).*/

			int second;

			cout << "Введите натуральное число между 10 до 9 999: ";
			cin >> number;

			while (number < 10 || number > 9999)
			{
				cout << "Число должно быть в интервале между 10 до 9 999. " << endl;
				cout << "Введите число еще раз." << endl;
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

			cout << "Предпоследнее цифра в числе: " << second << endl;
			cout << endl;
			break;

		case 11:
			/*11. Даны числа от 1 до 1000 и число m.
			Вывести все остатки от деления четных сотен на число m.*/

			cout << "Введите натуральное число m: ";

			cin >> number;

			cout << "Остаток от деления четных сотен на число " << number << endl;

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