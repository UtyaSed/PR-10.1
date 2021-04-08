// PR_10_2.cpp
// Обухов Віктор
// Лабораторна робота № 10.2
// Пошук слів у текстовому файлі
// Варіант 7


#include <iostream>
#include <fstream>

using namespace std;

int Count(ifstream& f, int kilk, const char c)
{
	char words[101];
	char c = 'a';

	f.open("t.txt");
	while (f >> words)
	{
		int kilk = 0;
		for (int i = strlen(words) - 1; !isspace(words[i]) && i >= 0; i--)
			if (c == words[i])
		kilk++;
		return kilk;
	}
	f.close();
	return kilk;
}

int main()
{
	ifstream f;

	char c;

	cout << "The number: " << Count(f, c, 0) << endl;

	return 0;
}