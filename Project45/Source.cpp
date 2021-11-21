#include <iostream>
#include <string>;
#include <algorithm>
using namespace std;

int main()
{
	srand(time(NULL));
	char name[] = "IGORi";
	int kol = 0;
	string code[12500];
	while (1)
	{
		string code1 = "ABOBUS";
		code1[0] = name[rand() % 5];
		code1[1] = name[rand() % 5];
		code1[2] = name[rand() % 5];
		code1[3] = name[rand() % 5];
		code1[4] = name[rand() % 5];
		code1[5] = name[rand() % 5];
		size_t I = count(code1.begin(), code1.end(), 'I');
		size_t O = count(code1.begin(), code1.end(), 'O');
		bool a = 1;
		if (code1[0] != 'i' and I <= 1 and O <= 1)
		{
			for (int i = 0; i < 12500; i++)
				if (code[i] == code1)
					a = 0;
		}
		else
			a = 0;
		if (a == 1)
		{
			code[kol] = code1;
			kol++;
			cout << kol;
		}
	}
}