#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <limits>
#include <Windows.h>
using namespace std;

/*--------------------------------------
	Programmer: Darius Nguyen
	Date: 10/26/2021
	Description: This program will be a slot machine made to entertain the user
--------------------------------------*/

//prints title
void printTitle()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	// creates = sign bars on top of ascii box
	cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
	//creates the blank space for the ascii box
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	//text info inside of ascii box
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "|" << setw(36) << setfill('\x20') << "Programmer: Darius Nguyen" << setw(13) << setfill('\x20') << "|\n";
	cout << "|" << setw(32) << setfill('\x20') << "Slot Machine Program" << setw(17) << setfill('\x20') << "|\n";
	cout << "|" << setw(28) << setfill('\x20') << "10/14/21" << setw(21) << setfill('\x20') << "|\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	//more blank space for ascii box
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	//= sign bars to close off ascii box
	cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	return;
}

//prints trademark
void printTrademark()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	cout << "                      _._" << endl;
	cout << "                   ,-`   `-." << endl;
	cout << "                  /s.      ,|" << endl;
	cout << "                 /SSSSs.,nMM|" << endl;
	cout << "       _._      /SSSSSS/MMMM|         _._" << endl;
	cout << "    ,-`   `-.  /SSSSSS/MMMMM|      ,-'   '-." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	cout << "   |s.     _, /SSSSSS/MMMMMM|    ,s.       ,|" << endl;
	cout << "   |SSs._.oOOO SSSSS/MMMMMMM|  ,sSSSSs._,nMM|" << endl;
	cout << "   |SSSSS OOOOO SSS/MMMMMMMM|,sSSSSSSSS|NMMM|" << endl;
	cout << "   |SSSSSS OOOOO S/MM`   `MMVSSSSSSSSSS|MMMM|" << endl;
	cout << "   |SSSSSSS OOOOO 's.      .;SSSS'SSSSS|MMMM|" << endl;
	cout << "   |SSSSSSSS OOOOO|SSs._,-'nMM:  |SSSSS|MMMM|" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	cout << "   |SSSSYSSSS OOOO|SSSS|MMMMMMMn.|SSSSS|MMMM|" << endl;
	cout << "   |SSSS|YSSSS OOO|SSSS|MMMMMMMMMn:SSSS|MMMM|" << endl;
	cout << "   |SSSS|MYSSS' OO|SSSS|MMMMMMMMMMMn:SS|MMMM|" << endl;
	cout << "   |SSSS|MMYSSS' O|SSSS|MMMMMOoYMMMMMn:|MMMM|" << endl;
	cout << "   |SSSS|MMMYSSS' |SSSS|MMMM|`OOoYMMMMMMMMMM|" << endl;
	cout << "   |SSSS|MMMnYSSSS|SSSS|MMMM|  `OOoYMMMMMMMM|" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << "   'SSSS|MMMM'YSSSSSSSS|MMMM|    `OOoYMMMMMM'" << endl;
	cout << "     `SS|MMM   YSSSSSSS|MMMM|      `OowMMM`" << endl;
	cout << "                YSSSSSS|MMMM|" << endl;
	cout << "                 YSSSSS|MMMM|" << endl;
	cout << "                   SSSS|MMMM'" << endl;
	cout << "                    `SS|MMM" << endl;
	return;
}

void colorChange(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void setPos(unsigned short xPos, unsigned short yPos)
{
	COORD pos = { xPos,yPos };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void dudMachine(char icon1, int tokes, int wis)
{
	//Displays the slot machine
	system("cls");
	setPos(35, 0);
	cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
	setPos(35, 1);
	cout << "|" << setw(36) << setfill('\x20') << "Casino Royale: Slot Machine" << setw(13) << setfill('\x20') << "|\n";
	setPos(35, 2);
	cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
	colorChange(7);
	setPos(35, 3);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(35, 4);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(35, 5);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(35, 7);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(35, 8);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(35, 9);
	cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
	setPos(35, 10);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(54, 10);
	cout << "Tokens: " << tokes << icon1;
	setPos(35, 11);
	cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
	setPos(54, 11);
	cout << icon1 << " Won: " << wis << icon1;
}

void help(char icon1, int tokes, int wis)
{
	char tokenIcon = icon1;
	int tokens = tokes;
	int wins = wis;
	system("cls");
	setPos(35, 0);
	cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
	setPos(58, 0);
	cout << "Help" << endl;
	setPos(0, 3);
	cout << "- This is the currency (" << icon1 << ") taken at Casino Royale of which you start off with 200 of." << endl;
	cout << "- Your goal is to either get: " << endl;
	cout << " 	~ Three of the same numbers which gives you tokens in terms of (wager)x(number repeated on slot machine)" << endl;
	cout << "		EX: wager: 10; Slot Machine: 5 7 5 5 -> Coins gained: 50" << endl << endl;
	cout << " 	~ Four of the same numbers in a row which gives you tokens in terms of" << endl;
	cout << "	(wager)x(number repeated on slot machine)x(2)" << endl;
	cout << "		EX: wager: 10; Slot Machine: 5 5 5 5 -> Coins gained: 100" << endl << endl;
	cout << " 	~ If you instead get three/four 1's, then you will receive 50 tokens or 100 tokens respectively" << endl;
	cout << "		EX: wager: 10; Slot Machine: 1 1 1 5 -> Coins gained: 100 OR" << endl;
	cout << "		wager: 10; Slot Machine: 1 1 1 1 -> Coins gained: 100" << endl << endl;
	cout << " 	~ If you get three/four consecutive ascending/descending numbers, then you will receive" << endl;
	cout << "	x3 or x6 your wager respectively" << endl;
	cout << "		EX: wager: 10; Slot Machine: 2 3 4 5 -> Coins gained: 60 OR" << endl;
	cout << "		wager: 10; Slot Machine: 7 6 5 1 -> Coins gained: 30" << endl << endl;
	cout << " 	~ If you instead get three/four 1's, then you will receive 50 tokens or 100 tokens respectively" << endl << endl;

	cout << " 	~ If you get four 7's, then you win everything" << endl;

	cout << endl << endl << endl;
	system("pause");
	system("cls");
	dudMachine(tokenIcon, tokens, wins);
}

int randomize(int slots)
{
	slots = rand() % 9 + 1;
	return slots;
}

int checkWins(int N1, int N2, int N3, int N4, int waged)
{
	if (N1 * N2 * N3 * N4 == 2401)
	{
		return 99999;
	}
	else if (N1 * N2 * N3 * N4 == 1)
	{
		return 100;
	}
	else if (N1 == N2 && N2 == N3)
	{
		if (N1 != 1)
		{
			return waged * N1;
		}
		else
			return 50;
	}
	else if (N1 == N2 && N2 == N4)
	{
		if (N1 != 1)
		{
			return waged * N1;
		}
		else
			return 50;
	}
	else if (N1 == N3 && N3 == N4)
	{
		if (N1 != 1)
		{
			return waged * N1;
		}
		else
			return 50;
	}
	else if (N2 == N3 && N3 == N4)
	{
		if (N2 != 1)
		{
			return waged * N2;
		}
		else
			return 50;
	}
	else if (N1 == N2 && N2 == N3 && N3 == N4)
	{
		return waged * N1 * 2;
	}
	else if ((N2 == N1 + 1 && N3 == N2 + 1 && N4 == N3 + 1) || (N2 == N1 - 1 && N3 == N2 - 1 && N4 == N3 - 1))
	{
		return waged * 6;
	}
	else if ((N2 == N1 + 1 && N3 == N2 + 1) || (N2 == N1 - 1 && N3 == N2 - 1))
	{
		return waged * 3;
	}
	else if ((N3 == N4 + 1 && N2 == N3 + 1) || (N3 == N4 - 1 && N2 == N3 - 1))
	{
		return waged * 3;
	}
	else
		return 0;
}

int main()
{
	//Declare Variables
	int slot1 = 0, slot2 = 0, slot3 = 0, slot4 = 0;
	int wager = 10;
	int tokens = 200;
	int wins = 0;
	int tokenWin = 0;
	char tokenIcon = 231;
	string userResponse;
	srand((unsigned int)time(NULL));

	//Prints intro title
	printTitle();
	system("pause");

	while (userResponse.length() == 0 && tokens > 0) // while loop to display menu and ask for user input as well as slot machine
	{
		//Displays the slot machine
		system("cls");
		colorChange(rand() % 9 + 1);
		setPos(35, 0);
		cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
		setPos(35, 1);
		cout << "|" << setw(36) << setfill('\x20') << "Casino Royale: Slot Machine" << setw(13) << setfill('\x20') << "|\n";
		setPos(35, 2);
		cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
		colorChange(7);
		setPos(35, 3);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(35, 4);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(35, 5);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(44, 5);
		cout << slot1;
		setPos(54, 5);
		cout << slot2;
		setPos(64, 5);
		cout << slot3;
		setPos(74, 5);
		cout << slot4;
		setPos(35, 6);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(35, 7);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(35, 8);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(35, 9);
		cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
		setPos(35, 10);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(54, 10);
		cout << "Tokens: " << tokens << tokenIcon;
		setPos(35, 11);
		cout << "|" << setw(48) << setfill('\x20') << "|" << endl;
		setPos(54, 11);
		cout << tokenIcon << " Won: " << wins << tokenIcon;
		if (tokenWin > 0)
		{ 
			setPos(54, 15);
			cout << "You won " << tokenWin << tokenIcon;
			wins = wins + tokenWin;
		}
		
		cout << endl << endl << endl;

		// Display menu navigation underneath slot machine animation

		setPos(35, 13);
		cout << "Press enter to spin (" << wager << tokenIcon << ")";
		setPos(35, 14);
		cout << "enter h for help, c to change wager, e to exit: ";
		if (cin.peek() != '\n') // checks for user input
		{
			cin >> userResponse; // takes in user input
			if (userResponse == "h") // if user input is "h", calls help menu function
			{
				help(tokenIcon, tokens, wins);
			}
			else if (userResponse == "c")
			{
				cout << "Please enter your new wager: "; // if user input is "c", pulls up menu of changing wager
				cin >> wager;
				while (wager > tokens)
				{
					cout << "Don't be cheap, that's cheating, enter an actual wager: ";
					cin >> wager;
				}
			}
			else if (userResponse == "e") // if user input is "e", exits out of program
			{
				system("cls");
				printTrademark();
				return 0;
			}
			else // if user response anything else, ignore and spin slot machine
			{
				userResponse.clear(); 
				continue;
			}
		}
		cin.ignore();

		// updates slot machine animations 
		for (int i = 0; i < 10; i++)
		{
			slot1 = randomize(slot1);
			slot2 = randomize(slot2);
			slot3 = randomize(slot3);
			slot4 = randomize(slot4);
			setPos(44, 5);
			cout << slot1;
			setPos(54, 5);
			cout << slot2;
			setPos(64, 5);
			cout << slot3;
			setPos(74, 5);
			cout << slot4;
			colorChange(rand() % 8 + 1);
			setPos(35, 0);
			cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
			setPos(35, 1);
			cout << "|" << setw(36) << setfill('\x20') << "Casino Royale: Slot Machine" << setw(13) << setfill('\x20') << "|\n";
			setPos(35, 2);
			cout << "\x2A" << setw(48) << setfill('\x3D') << "\x2A" << endl;
			colorChange(7);
			Sleep(50);
		}
		userResponse.clear();
		
		//check for any wins
		tokenWin = checkWins(slot1, slot2, slot3, slot4, wager);
		tokens = tokens - wager + tokenWin;
	}

	setPos(44, 17);
	cout << "Better luck next time :)" << endl << endl;
	system("pause");

	for (int i = 0; i < 13; i++)
	{
		system("cls");
		setPos(58, i);
		colorChange(4);
		cout << "GAME OVER";
		Sleep(150);
	}
	colorChange(7);
	if (wins == 0)
	{
		setPos(62, 13);
		cout << ":(";
	}
	else
	{
		setPos(56, 13);
		cout << "Total " << tokenIcon << ": " << wins;
	}
	cout << endl << endl << endl << endl << endl;
	system("pause>nul");
	printTrademark();
	return 0;
}