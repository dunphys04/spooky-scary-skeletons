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
	_setmode(_fileno(stdout), _O_U16TEXT);
	int option;
	do
	{
		wcout << L"Welcome to spooktacular program of the year!" << endl;
		wcout << L"You options are as follows:" << endl;
		wcout << L"1) Open the spook function." << endl;
		wcout << L"2) Open the skelecounter function." << endl;
		wcout << L"3) Exit." << endl;
		cin >> option;

		if (option == 1)
		{
			string word;
			using namespace std::this_thread;
			using namespace std::chrono;
			wcout << "spook?" << endl;
			cin >> word;
			if (word == "skeletons" || word == "skeleton")
			{
				while (!kbhit()) //included from conio.h 
				{
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
				wcout << "Huh." << endl;
			}
		}
		if (option == 2)
		{
			wcout << L"Get ready to have me count some skeletors." << endl;
			wcout << L"Press any key to start the function." << endl;
			do //add cin
			{
				int count = 0;
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
					(count++);
			}while (!kbhit()) //escape using space
				//display counter
		}
	}while (option != 3);
	return 0;
}
