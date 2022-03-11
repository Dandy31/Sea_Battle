#include <iostream>
#include <Windows.h>

using namespace std;

int win = 0, botORfriend = 0;

char** Create(int row, int column)
{
	char** arr = new char* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new char[column];
	}
	return arr;
}

int* CreateNum(int size)
{
	int* arr = new int[size];
	return arr;
}

int* InitNum(int* num, int size)
{
	for (int i = 0; i < size; i++)
	{
		num[i] = i;
	}
	return num;
}

char** InitTable(char** arr, int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = ' ';
		}
	}

	return arr;
}


void Show(char** arr, int* num, int row, int column)
{
	cout << "\n\t   ";
	for (int i = 0; i < row; i++)
	{
		cout << num[i] << "   ";
	}
	cout << endl;
	cout << "\t -----------------------------------------";
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t | ";
		for (int j = 0; j < column; j++)
		{
			cout << arr[i][j] << " | ";
		}
		cout << num[i] << endl << "\t -----------------------------------------" << endl;
	}
}

char** InitKey1(char** arr, int row, int column, int key2, int key1)
{
	arr[key1][key2] = '0';
	return arr;
}
char** InitKey2(char** arr, int row, int column, int key2, int key1)
{
	arr[key1][key2] = 'X';
	return arr;
}

void Check(char** arr, int size, int botORfriend)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0)
			{
				if ((arr[i][j] == '0' && arr[i][j + 1] == '0' && arr[i][j + 2] == '0' && arr[i][j + 3] == '0' && arr[i][j + 4] == '0') || (arr[i][j] == '0' && arr[i + 1][j + 1] == '0' && arr[i + 2][j + 2] == '0' && arr[i + 3][j + 3] == '0' && arr[i + 4][j + 4] == '0'))
				{
					if (botORfriend == 1)
						cout << "\n\t\t Поздравляю вы победили!!!\n\n";
					else
						cout << "\n\t\t Победил First Player!!!\n\n";
					win = 1;
					break; break;
				}
				else if ((arr[i][j] == 'X' && arr[i][j + 1] == 'X' && arr[i][j + 2] == 'X' && arr[i][j + 3] == 'X' && arr[i][j + 4] == 'X') || (arr[i][j] == 'X' && arr[i + 1][j + 1] == 'X' && arr[i + 2][j + 2] == 'X' && arr[i + 3][j + 3] == 'X' && arr[i + 4][j + 4] == 'X') || (arr[i][j] == 'X' && arr[i + 1][j] == 'X' && arr[i + 2][j] == 'X' && arr[i + 3][j] == 'X' && arr[i + 4][j] == 'X'))
				{
					if (botORfriend == 1)
						cout << "\n\t\t Вы проиграли!!!\n\n";
					else
						cout << "\n\t\t Победил Second Player!!!\n\n";
					win = 1;
					break; break;
				}
			}
			else if (i == 9)
			{
				if ((arr[i][j] == '0' && arr[i][j + 1] == '0' && arr[i][j + 2] == '0' && arr[i][j + 3] == '0' && arr[i][j + 4] == '0') || (arr[i][j] == '0' && arr[i - 1][j - 1] == '0' && arr[i - 2][j - 2] == '0' && arr[i - 3][j - 3] == '0' && arr[i - 4][j - 4] == '0'))
				{
					if (botORfriend == 1)
						cout << "\n\t\t Поздравляю вы победили!!!\n\n";
					else
						cout << "\n\t\t Победил First Player!!!\n\n";
					win = 1;
					break; break;
				}
				else if ((arr[i][j] == 'X' && arr[i][j + 1] == 'X' && arr[i][j + 2] == 'X' && arr[i][j + 3] == 'X' && arr[i][j + 4] == 'X') || (arr[i][j] == 'X' && arr[i - 1][j - 1] == 'X' && arr[i - 2][j - 2] == 'X' && arr[i - 3][j - 3] == 'X' && arr[i - 4][j - 4] == 'X'))
				{
					if (botORfriend == 1)
						cout << "\n\t\t Вы проиграли!!!\n\n";
					else
						cout << "\n\t\t Победил Second Player!!!\n\n";
					win = 1;
					break; break;
				}
			}
			else
			{
				if ((arr[i][j] == '0' && arr[i][j + 1] == '0' && arr[i][j + 2] == '0' && arr[i][j + 3] == '0' && arr[i][j + 4] == '0') || (arr[i][j] == '0' && arr[i + 1][j] == '0' && arr[i + 2][j] == '0' && arr[i + 3][j] == '0' && arr[i + 4][j] == '0') || (arr[i][j] == '0' && arr[i + 1][j + 1] == '0' && arr[i + 2][j + 2] == '0' && arr[i + 3][j + 3] == '0' && arr[i + 4][j + 4] == '0') || (arr[i][j] == '0' && arr[i - 1][j - 1] == '0' && arr[i - 2][j - 2] == '0' && arr[i - 3][j - 3] == '0' && arr[i - 4][j - 4] == '0'))
				{
					if (botORfriend == 1)
						cout << "\n\t\t Поздравляю вы победили!!!\n\n";
					else
						cout << "\n\t\t Победил First Player!!!\n\n";
					win = 1;
					break; break;
				}
				else if ((arr[i][j] == 'X' && arr[i][j + 1] == 'X' && arr[i][j + 2] == 'X' && arr[i][j + 3] == 'X' && arr[i][j + 4] == 'X') || (arr[i][j] == 'X' && arr[i + 1][j] == 'X' && arr[i + 2][j] == 'X' && arr[i + 3][j] == 'X' && arr[i + 4][j] == 'X') || (arr[i][j] == 'X' && arr[i + 1][j + 1] == 'X' && arr[i + 2][j + 2] == 'X' && arr[i + 3][j + 3] == 'X' && arr[i + 4][j + 4] == 'X') || (arr[i][j] == 'X' && arr[i - 1][j - 1] == 'X' && arr[i - 2][j - 2] == 'X' && arr[i - 3][j - 3] == 'X' && arr[i - 4][j - 4] == 'X'))
				{
					if (botORfriend == 1)
						cout << "\n\t\t Вы проиграли!!!\n\n";
					else
						cout << "\n\t\t Победил Second Player!!!\n\n";
					win = 1;
					break; break;
				}
			}
		}
	}
}

void Delete(char**& arr, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

void GamePlayBot(char** arr, int* num, int size)
{
	for (int i = 0; i < 100; i++)
	{
		Check(arr, size, 1);

		if (win == 1)
		{
			break;
		}
		if (i % 2 == 0)
		{
			cout << "\n\n\t Ваш ход: \n Введите две цифры куда хотите походить: ";
			int key1, key2;
		restartBot: cout << "\n 1: ";
			cin >> key1;
			cout << " 2: ";
			cin >> key2;
			if (arr[key2][key1] == ' ')
			{
				arr = InitKey1(arr, size, size, key1, key2);
			}
			else {
				cout << "Выберите поле которое не занято";
				goto restartBot;
			}

			system("cls");
			Show(arr, num, size, size);
		}
		else
		{
		restartBot1: int key1 = rand() % 10, key2 = rand() % 10;
			if (arr[key2][key1] == ' ')
			{
				arr = InitKey2(arr, size, size, key1, key2);
			}
			else {
				goto restartBot1;
			}

			system("cls");
			Show(arr, num, size, size);
		}
	}
}

void GamePlayFriend(char** arr, int* num, int size)
{
	int key1, key2;
	for (int i = 0; i < 100; i++)
	{
		Check(arr, size, 2);

		if (win == 1)
		{
			break;
		}
		if (i % 2 == 0)
		{
			cout << "\n\n\t First player: \n Введите две цифры куда хотите походить: ";
			key1 = 0, key2 = 0;
		restartFriend: cout << "\n 1: ";
			cin >> key1;
			cout << " 2: ";
			cin >> key2;
			if (arr[key2][key1] == ' ')
			{
				arr = InitKey1(arr, size, size, key1, key2);
			}
			else {
				cout << "Выберите поле которое не занято";
				goto restartFriend;
			}

			system("cls");
			Show(arr, num, size, size);
		}
		else
		{
			cout << "\n\n\t Second player: \n Введите две цифры куда хотите походить: ";
			key1 = 0, key2 = 0;
		restartFriend1: cout << "\n 1: ";
			cin >> key1;
			cout << " 2: ";
			cin >> key2;
			if (arr[key2][key1] == ' ')
			{
				arr = InitKey2(arr, size, size, key1, key2);
			}
			else {
				cout << "Выберите поле которое не занято";
				goto restartFriend1;
			}

			system("cls");
			Show(arr, num, size, size);
		}


	}
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	srand(time(NULL));


	const int size = 10;
	char** arr = Create(size, size);
	InitTable(arr, size, size);

	int* num = CreateNum(size);
	InitNum(num, size);


	cout << "Выберите против кого хотите сыграть: \n ( BOT -> 1 )( Friend -> 2) \n   -----> ";
	int key1;
rep: cin >> key1;
	system("Cls");

	switch (key1)
	{
	case 1:
	{
		// Показ стола
		Show(arr, num, size, size);
		GamePlayBot(arr, num, size);
		break;
	}
	case 2:
	{
		// Показ стола
		Show(arr, num, size, size);
		GamePlayFriend(arr, num, size);
		break;
	}
	default:
		cout << " Enter 1(BOT) or 2(FRIEND)\n   -----> ";
		goto rep;
		break;
	}




	Delete(arr, size);
	delete[] num;

}