﻿// lab8.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

////Дано літерний рядок, який містить послідовність символів s0, …, sn, … . Групи
//символів, відокремлені пробілами(одним або кількома) і які не містять пробілів, будемо
//називати словами.Знайти кількість слів, у яких перший і останній символ – однакові.
#include <string>
#include <iostream>
using namespace std;


size_t The_same_Element_words(const string s)
{
	int k = 0;
	size_t len = 0;
	size_t start = 0, finish = 0;
	//слово буде рахуватись якщо воно між двома пробілами
	while ((start = s.find_first_of(" ", start)) != -1)
	{
		start += 1;
		
		while (finish = s.find_first_of(" ", start) != -1)
		{

			if (s[start] == s[finish - 1])//порівнюється перша і остання літера слова
					k++;	
			start++;
		}
	}
	return k;
	
}

int main()
{
	string simb = " ";//перший символ строки буде " ",а слово 
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	simb.append(str);
	cout << "Count element : " << The_same_Element_words(simb) << endl;
	//кількість слів де перша і остання буква співпадають
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
