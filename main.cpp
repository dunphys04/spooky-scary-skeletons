#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <chrono>
#include <thread>
#include <Windows.h>
#include<conio.h>
using namespace std;

int main()
{
	string word;
	using namespace std::this_thread;
	using namespace std::chrono;
	cout << "spook?" << endl;
	cin >> word;
	if (word == "skeletons" || word == "skeleton")
	{
		while (!kbhit()) //included from conio.h 
		{
			_setmode(_fileno(stdout), _O_U16TEXT);
			system("cls");
			sleep_for(milliseconds(50));
			wcout << L"▒▒▒░░░░░░░░░░▄▐░░░░" << endl;
			wcout << L"▒░░░░░░▄▄▄░░▄██▄░░░ " << endl;
			wcout << L"░░░░░░▐▀█▀▌░░░░▀█▄░" << endl;
			wcout << L"░░░░░░▐█▄█▌░░░░░░▀█▄" << endl;
			wcout << L"░░░░░░░▀▄▀░░░▄▄▄▄▄▀▀" << endl;
			wcout << L"░░░░░▄▄▄██▀▀▀▀░░░░░" << endl;
			wcout << L"░░░░█▀▄▄▄█░▀▀░░░░░░" << endl;
			wcout << L"░░░░▌░▄▄▄▐▌▀▀▀░░░░░" << endl;
			wcout << L"░▄░▐░░░▄▄░█░▀▀░░░░░" << endl;
			wcout << L"░▀█▌░░░▄░▀█▀░▀░░░░░" << endl;
			wcout << L"░░░░░░░░▄▄▐▌▄▄░░░░░" << endl;
			wcout << L"░░░░░░░░▀███▀█░▄░░░" << endl;
			wcout << L"░░░░░░░▐▌▀▄▀▄▀▐▄░░░" << endl;
			wcout << L"░░░░░░░▐▀░░░░░░▐▌░░" << endl;
			wcout << L"░░░░░░░█░░░░░░░░█░░" << endl;
			wcout << L"░░░░░░▐▌░░░░░░░░░█░" << endl;
			sleep_for(milliseconds(125));
			system("cls");
			sleep_for(milliseconds(50));
			wcout << L"░░░░▐▄░░░░░░░░░░▒▒▒" << endl;
			wcout << L"░░░▄██▄░░▄▄▄░░░░░░▒ " << endl;
			wcout << L"░▄█▀░░░░▌▀█▀▐░░░░░░" << endl;
			wcout << L"█▀░░░░░░▌█▄█▐░░░░░░" << endl;
			wcout << L"▀▄▄▄▄▄░░░▀▄▀░░░░░░░" << endl;
			wcout << L"░░░░░▀▀▀▀██▄▄▄░░░░░" << endl;
			wcout << L"░░░░░░▀▀░█▄▄▄▀█░░░░" << endl;
			wcout << L"░░░░░▀▀▀▌▐▄▄▄░▌░░░░" << endl;
			wcout << L"░░░░░▀▀░█░▄▄░░░▐░▄░" << endl;
			wcout << L"░░░░░▀░▀█▀░▄░░░▌█▀░" << endl;
			wcout << L"░░░░░▄▄▌▐▄▄░░░░░░░░" << endl;
			wcout << L"░░░▄░█▀███▀░░░░░░░░" << endl;
			wcout << L"░░░▄▐▀▄▀▄▀▌▐░░░░░░░" << endl;
			wcout << L"░░▌▐░░░░░░▀▐░░░░░░░" << endl;
			wcout << L"░░█░░░░░░░░█░░░░░░░" << endl;
			wcout << L"░█░░░░░░░░░▌▐░░░░░░" << endl;
			sleep_for(milliseconds(125));
		}

	}
	else
	{
		cout << "Huh." << endl;
	}
}
