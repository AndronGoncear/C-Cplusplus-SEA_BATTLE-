#define  _CRT_SECURE_NO_WARNINGS
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 77
#define KEY_LEFT 75
#define KEY_ENTER 13
#include <iostream> 
#include <conio.h>
#include <iomanip>
#include<Windows.h>
#include"Header.h"



using namespace std;


void SetColor(int ForgC)
{
	WORD wColor;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
}

void SetColor(int textColor, int backgroundColor)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, (WORD)((backgroundColor << 4) | textColor));
}


void show_menu(int key)
{
	key--;
	system("CLS");
	cout << endl << endl;
	const int size = 4;
	char menu[size][250] = { "New Game.................","Stop of the Game.........", "Continue the paused game.","Exit from the menu......." };

	for (int i = 0; i < size; i++) {
		SetColor(15, 0);
		if (i == key) SetColor(0, 14);
		cout << "\t " << i + 1 << ". " << menu[i];
		if (i == key) cout << " --->  ";
		cout << endl << endl;
		SetColor(7, 0);
	}
	cout << "\t =======================" << endl;
	SetColor(8);
	cout << "\tNavigation: UP key, DOWN key, ENTER to select" << endl;
	SetColor(7);
}


void show_menu2(int key)
{
	key--;
	system("CLS");
	cout << endl << endl;
	const int size = 3;
	char menu2[size][250] = { "Game mode : Human - Computer.....","Game mode : Computer - Computer..", "Exit from the menu..............." };


	for (int i = 0; i < size; i++) {
		SetColor(15, 0);
		if (i == key) SetColor(0, 14);
		cout << "\t " << i + 1 << ". " << menu2[i];
		if (i == key) cout << " --->  ";
		cout << endl << endl;
		SetColor(7, 0);
	}
	cout << "\t =======================" << endl;
	SetColor(8);
	cout << "\tNavigation: UP key, DOWN key, ENTER to select" << endl;
	SetColor(7);
}

void show_menu3(int key)
{
	key--;
	system("CLS");
	cout << endl << endl;
	const int size = 3;
	char menu[size][250] = { "Spacing of Ships - Manual...........","Spacing of Ships - By the Computer..",  "Exit from the menu.................." };

	for (int i = 0; i < size; i++) {
		SetColor(15, 0);
		if (i == key) SetColor(0, 14);
		cout << "\t " << i + 1 << ". " << menu[i];
		if (i == key) cout << " --->  ";
		cout << endl << endl;
		SetColor(7, 0);
	}
	cout << "\t =======================" << endl;
	SetColor(8);
	cout << "\tNavigation: UP key, DOWN key, ENTER to select" << endl;
	SetColor(7);
}

void show_menu4(int key)
{
	key--;
	system("CLS");
	cout << endl << endl;
	const int size = 3;
	char menu[size][250] = { "Random Shot.........","Intelectual  Game...",  "Exit from the menu.." };

	for (int i = 0; i < size; i++) {
		SetColor(15, 0);
		if (i == key) SetColor(0, 14);
		cout << "\t " << i + 1 << ". " << menu[i];
		if (i == key) cout << " --->  ";
		cout << endl << endl;
		SetColor(7, 0);
	}
	cout << "\t =======================" << endl;
	SetColor(8);
	cout << "\tNavigation: UP key, DOWN key, ENTER to select" << endl;
	SetColor(7);
}
void show_menu5(int key)
{
	key--;
	system("CLS");
	cout << endl << endl;
	const int size = 2;
	char menu[size][250] = {"Spacing of Ships - By the Computer..",  "Exit from the menu.................." };

	for (int i = 0; i < size; i++) {
		SetColor(15, 0);
		if (i == key) SetColor(0, 14);
		cout << "\t " << i + 1 << ". " << menu[i];
		if (i == key) cout << " --->  ";
		cout << endl << endl;
		SetColor(7, 0);
	}
	cout << "\t =======================" << endl;
	SetColor(8);
	cout << "\tNavigation: UP key, DOWN key, ENTER to select" << endl;
	SetColor(7);
}


void show_battlefield()
{


	int x = 30, y = 0;
	int size = 10;
	gotoxy(x, y);
	SetColor(1);
	
	cout << " !!BATTLESHIP (GAME)!! ";

	x = 5, y = 2;

	gotoxy(x, y);
	cout << "Battle field of the COMPUTER";
	SetColor(7);
	x = 5, y = 3;
	gotoxy(x, y);
	for (int i = 0; i < 28; i++)
	{
		cout << "=";

	}

	x = 5, y = 4;

	gotoxy(x, y);

	cout << '0' << "  " << '1' << "  " << '2' << "  " << '3' << "  " << '4' << "  " << '5' << "  " << '6' << "  " << '7' << "  " << '8' << "  " << '9';
	x = 3, y = 5;
	gotoxy(x, y);

	for (int i = 0; i < size; i++)
	{

		cout << i;
		y++;
		gotoxy(x, y);

	}

	x = 5, y = 5;

	gotoxy(x, y);
	for (int i = 0; i < size; i++)
	{

		gotoxy(x, y);
		for (int j = 0; j < size; j++)
		{
			cout << "-  ";
		}
		cout << endl;
		y++;

	}

	x = 55, y = 2;

	gotoxy(x, y);
	SetColor(1);
	cout << "Battle field of the PLAYER";
	SetColor(7);
	x = 55, y = 3;
	gotoxy(x, y);
	for (int i = 0; i < 28; i++)
	{
		cout << "=";

	}

	x = 55, y = 4;

	gotoxy(x, y);

	cout << '0' << "  " << '1' << "  " << '2' << "  " << '3' << "  " << '4' << "  " << '5' << "  " << '6' << "  " << '7' << "  " << '8' << "  " << '9';
	x = 53, y = 5;
	gotoxy(x, y);

	for (int i = 0; i < size; i++)
	{


		cout << i;
		y++;
		gotoxy(x, y);

	}

	x = 55, y = 5;

	gotoxy(x, y);
	for (int i = 0; i < size; i++)
	{

		gotoxy(x, y);
		for (int j = 0; j < size; j++)
		{
			cout << "-  ";
		}
		cout << endl;
		y++;

	}
	x = 5; y = 16;
	gotoxy(x, y);
	cout << "Battleship  (4):" << endl;
	x = 5; y = 17;
	gotoxy(x, y);
	cout << "Cruiser     (3):" << endl;
	x = 5; y = 18;
	gotoxy(x, y);
	cout << "Destroyer   (2):" << endl;
	x = 5; y = 19;
	gotoxy(x, y);
	cout << "Torpedo boat(1):" << endl;

	x = 55; y = 16;
	gotoxy(x, y);
	cout << "Battleship  (4):" << endl;
	x = 55; y = 17;
	gotoxy(x, y);
	cout << "Cruiser     (3):" << endl;
	x = 55; y = 18;
	gotoxy(x, y);
	cout << "Destroyer   (2):" << endl;
	x = 55; y = 19;
	gotoxy(x, y);
	cout << "Torpedo boat(1):" << endl;



	x = 30; y = 20;
	gotoxy(x, y);
	cout << "Current state of the GAME    " << endl;
	x = 30; y = 21;
	gotoxy(x, y);
	cout << "Battlefield of the PLAYER   :" << endl;
	x = 30; y = 22;
	gotoxy(x, y);
	cout << "Battlefield of the COMPUTER :" << endl;
}

void show_battlefield_comp_comp()
{


	int x = 30, y = 0;
	int size = 10;
	gotoxy(x, y);
	SetColor(1);

	cout << " !!BATTLESHIP (GAME)!! ";

	x = 3, y = 2;

	gotoxy(x, y);
	cout << "Battle field of the COMPUTER 1";
	SetColor(7);
	x = 5, y = 3;
	gotoxy(x, y);
	for (int i = 0; i < 28; i++)
	{
		cout << "=";

	}

	x = 5, y = 4;

	gotoxy(x, y);

	cout << '0' << "  " << '1' << "  " << '2' << "  " << '3' << "  " << '4' << "  " << '5' << "  " << '6' << "  " << '7' << "  " << '8' << "  " << '9';
	x = 3, y = 5;
	gotoxy(x, y);

	for (int i = 0; i < size; i++)
	{

		cout << i;
		y++;
		gotoxy(x, y);

	}

	x = 5, y = 5;

	gotoxy(x, y);
	for (int i = 0; i < size; i++)
	{

		gotoxy(x, y);
		for (int j = 0; j < size; j++)
		{
			cout << "-  ";
		}
		cout << endl;
		y++;

	}

	x = 53, y = 2;

	gotoxy(x, y);
	SetColor(1);
	cout << "Battle field of the COMPUTER 2";
	SetColor(7);
	x = 55, y = 3;
	gotoxy(x, y);
	for (int i = 0; i < 28; i++)
	{
		cout << "=";

	}

	x = 55, y = 4;

	gotoxy(x, y);

	cout << '0' << "  " << '1' << "  " << '2' << "  " << '3' << "  " << '4' << "  " << '5' << "  " << '6' << "  " << '7' << "  " << '8' << "  " << '9';
	x = 53, y = 5;
	gotoxy(x, y);

	for (int i = 0; i < size; i++)
	{


		cout << i;
		y++;
		gotoxy(x, y);

	}

	x = 55, y = 5;

	gotoxy(x, y);
	for (int i = 0; i < size; i++)
	{

		gotoxy(x, y);
		for (int j = 0; j < size; j++)
		{
			cout << "-  ";
		}
		cout << endl;
		y++;

	}
	x = 5; y = 16;
	gotoxy(x, y);
	cout << "Battleship  (4):" << endl;
	x = 5; y = 17;
	gotoxy(x, y);
	cout << "Cruiser     (3):" << endl;
	x = 5; y = 18;
	gotoxy(x, y);
	cout << "Destroyer   (2):" << endl;
	x = 5; y = 19;
	gotoxy(x, y);
	cout << "Torpedo boat(1):" << endl;

	x = 55; y = 16;
	gotoxy(x, y);
	cout << "Battleship  (4):" << endl;
	x = 55; y = 17;
	gotoxy(x, y);
	cout << "Cruiser     (3):" << endl;
	x = 55; y = 18;
	gotoxy(x, y);
	cout << "Destroyer   (2):" << endl;
	x = 55; y = 19;
	gotoxy(x, y);
	cout << "Torpedo boat(1):" << endl;



	x = 30; y = 20;
	gotoxy(x, y);
	cout << "Current state of the GAME    " << endl;
	x = 30; y = 21;
	gotoxy(x, y);
	cout << "Battlefield of the COMPUTER1:" << endl;
	x = 30; y = 22;
	gotoxy(x, y);
	cout << "Battlefield of the COMPUTER2:" << endl;
}


void gotoxy(int xpos, int ypos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos;
	scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput, scrn);


}


void spacing_of_ships_manual(int &a, int &b, int size, int(&mas)[10][10])
{   
	int k = 3;
	bool p = true;
	
	int counter = 0;
	int x = b * k + 55;
	int y = a + 5;
 
	
	while (counter != size)
	{
	     		

			if (GetAsyncKeyState(VK_DOWN))
			{
				if (a + size <= 10)
				{
					while (counter != size)
					{
						gotoxy(x, y);
						cout << 0;
						mas[a][b] = 0;
						a++;
						y++;
						counter++;

					}
				}
			}
			else if (GetAsyncKeyState(VK_UP))
			{
					if (a + 1 - size >= 0)
					{
						while (counter != size)
						{

							gotoxy(x, y);
							cout << 0;
							mas[a][b] = 0;
							a--;
							y--;
							counter++;
						}
					}

			}

			else if (GetAsyncKeyState(VK_LEFT))
			{
				if (b+1-size>=0)
				{   

					
					if (p)
					{
						while (counter != size)
						{
							gotoxy(x, y);
							if (a < 0) a = 0;
							cout << 0;
							mas[a][b] = 0;
							b--;
							x -= k;
							counter++;
						}
					}
				}
				
			}
			else if (GetAsyncKeyState(VK_RIGHT))
			{
				
				if (b + size <= 10)
				{
					
					
					if (p)
					{
						while (counter != size)
						{
							gotoxy(x, y);
							cout << 0;
							mas[a][b] = 0;
							b++;
							x += k;
							counter++;
							

						}
					}
				}
			}
		
		
		
		
	}

}

void spacing_of_ships_random_player( int(&mas)[10][10])
{
	int k = 3;
	bool p = true;
	int q,x,y;
	int counter;
	int size,keys;
	int  a, b;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	while (count1 + count2 + count3 + count4 != 10)
	{
	exit:
			
		size = rand() % 4 + 1;
		a = rand() % 10;
		b = rand() % 10;

		if (a - size < 0 || a + size >= 9)
		{
			q = rand() % 2+2;
		}
		else if (b - size < 0 || b + size >= 9)
		{
			q = rand() % 2;
		}
		else
		{
			q = rand()%4;
		}
		
		if (q == 0)
		{
			keys = KEY_UP;
		}
		else if (q == 1)
		{
			keys = KEY_DOWN;
		}
		else if (q == 2)
		{
			keys = KEY_RIGHT;
		}
		else 
		{
			keys = KEY_LEFT;
		}
		
		



		switch (keys)
		{

		case KEY_UP:


			if (a <= 9 && a - size >= -1)
			{
				for (int i = a+1; i >= a - size; i--)
				{

					if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

					{
						goto exit;
					}

				}

				
			}
			else
			{
				goto exit;
			}
			
			break;

		case KEY_DOWN:

			if (a >= 0 && a + size <= 10)
			{
				for (int i = a-1; i <= a + size; i++)
				{

					if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

					{
						goto exit;
					}

				}

			
			}
			else
			{
				goto exit;
			}
		

			break;

		case KEY_RIGHT:

			if (b >= 0 && b + size <= 10)
			{
				for (int i = b-1; i <= b + size; i++)
				{

					if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

					{

						goto exit;
					}

				}

			
			}
			else
			{
				goto exit;
			}
			
			break;

		case KEY_LEFT:

			if (b <= 9 && b - size >= -1)
			{
				for (int i = b+1; i >= b - size; i--)
				{

					if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

					{
						goto exit;
					}

				}

			
			}
			else
			{
				goto exit;
			}
			

			break;

		}

	
		if (size == 1 && count1 < 4)
		{

			x = 73, y = 19;
			gotoxy(x, y);
			count1++;
			cout << count1;



		}
		else if (size == 2 && count2 < 3)
		{
			x = 73, y = 18;
			gotoxy(x, y);
			count2++;
			cout << count2;

		}
		else if (size == 3 && count3 < 2)
		{

			x = 73, y = 17;
			gotoxy(x, y);
			count3++;
			cout << count3;


		}
		else if (size == 4 && count4 < 1)
		{

			x = 73, y = 16;
			gotoxy(x, y);
			count4++;
			cout << count4;

		}
		else
		{
			
			goto exit;
		}


		    x = b * k + 55;
	    	y = a + 5;
			counter = 0;
	    while (counter != size)
	    {


		if (keys==80)
		{
			if (a + size <= 10)
			{
				while (counter != size)
				{
					gotoxy(x, y);
					cout << 0;
					mas[a][b] = 0;
					a++;
					y++;
					counter++;

				}
			}
			else
				goto exit;
		}
		else if (keys==72)
		{
			if (a + 1 - size >= 0)
			{
				while (counter != size)
				{

					gotoxy(x, y);
					cout << 0;
					mas[a][b] = 0;
					a--;
					y--;
					counter++;
				}
			}
			else
				goto exit;

		}

		else if (keys==75)
		{
			if (b + 1 - size >= 0)
			{


				if (p)
				{
					while (counter != size)
					{
						gotoxy(x, y);
						if (a < 0) a = 0;
						cout << 0;
						mas[a][b] = 0;
						b--;
						x -= k;
						counter++;
					}
				}
			}
			else
				goto exit;

		}
		else if (keys==77)
		{

			if (b + size <= 10)
			{


				if (p)
				{
					while (counter != size)
					{
						gotoxy(x, y);
						cout << 0;
						mas[a][b] = 0;
						b++;
						x += k;
						counter++;


					}
				}
			}
			else
				goto exit;
		}

	}
    }

	
}




void spacing_of_ships_saved_player(int(&mas)[10][10], int &state)
{
	int k = 3;
	int  x, y;
	state = 20;
	
	x = 22, y = 19;
	gotoxy(x, y);
	cout << 4;


	x = 22, y = 18;
	gotoxy(x, y);
		
	cout << 3;


	x = 22, y = 17;
	gotoxy(x, y);
	cout << 2;


	
	x = 22, y = 16;
	gotoxy(x, y);
	cout << 1;


	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			
			x = j * k + 55;
			y = i + 5;
			gotoxy(x, y);
			if (mas[i][j] == 42)
			{
				cout << char(mas[i][j]);
			}
			if (mas[i][j] == 88)
			{
				SetColor(4);
				cout << char(mas[i][j]);
				SetColor(7);
				state--;
			}
			if (mas[i][j] == 0)
			{
				cout << mas[i][j];
			}
		}

	}

}
void spacing_of_ships_saved_comp(int(&mas)[10][10], int& state)
{
	int k = 3;
	int  x, y;
	state = 20;

	x = 72, y = 19;
	gotoxy(x, y);
	cout << 4;


	x = 72, y = 18;
	gotoxy(x, y);

	cout << 3;


	x = 72, y = 17;
	gotoxy(x, y);
	cout << 2;



	x = 72, y = 16;
	gotoxy(x, y);
	cout << 1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			
			x = j * k + 5;
			y = i + 5;
			gotoxy(x, y);
			if (mas[i][j] == 42)
			{
				cout << char(mas[i][j]);
			}
			if (mas[i][j] == 88)
			{
				SetColor(4);
				cout << char(mas[i][j]);
				SetColor(7);
				state--;
			}
			if (mas[i][j] == 0)
			{
				cout << mas[i][j];
			}
		}

	}

}
void spacing_of_ships_saved_comp2(int(&mas)[10][10], int& state)
{
	int k = 3;
	int  x, y;
	state = 20;

	x = 72, y = 19;
	gotoxy(x, y);
	cout << 4;


	x = 72, y = 18;
	gotoxy(x, y);

	cout << 3;


	x = 72, y = 17;
	gotoxy(x, y);
	cout << 2;



	x = 72, y = 16;
	gotoxy(x, y);
	cout << 1;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			x = j * k + 5;
			y = i + 5;
			gotoxy(x, y);
			if (mas[i][j] == 42)
			{
				cout << char(mas[i][j]);
			}
			if (mas[i][j] == 88)
			{
				SetColor(4);
				cout << char(mas[i][j]);
				SetColor(7);
				state--;
			}
			if (mas[i][j] == 0)
			{
				//cout << mas[i][j];
			}
		}

	}

}


void spacing_of_ships_random_comp(int(&mas)[10][10])
{
	int k = 3;
	bool p = true;
	int q, x, y;
	int counter;
	int size, keys;
	int  a, b;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	while (count1 + count2 + count3 + count4 != 10)
	{
	exit:

		size = rand() % 4 + 1;
		a = rand() % 10;
		b = rand() % 10;

		if (a - size < 0 || a + size >= 9)
		{
			q = rand() % 2 + 2;
		}
		else if (b - size < 0 || b + size >= 9)
		{
			q = rand() % 2;
		}
		else
		{
			q = rand() % 4;
		}

		if (q == 0)
		{
			keys = KEY_UP;
		}
		else if (q == 1)
		{
			keys = KEY_DOWN;
		}
		else if (q == 2)
		{
			keys = KEY_RIGHT;
		}
		else
		{
			keys = KEY_LEFT;
		}


		switch (keys)
		{

		case KEY_UP:


			if (a <= 9 && a - size >= -1)
			{
				for (int i = a + 1; i >= a - size; i--)
				{

					if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

					{
						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}

			break;

		case KEY_DOWN:

			if (a >= 0 && a + size <= 10)
			{
				for (int i = a - 1; i <= a + size; i++)
				{

					if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

					{
						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}


			break;

		case KEY_RIGHT:

			if (b >= 0 && b + size <= 10)
			{
				for (int i = b - 1; i <= b + size; i++)
				{

					if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

					{

						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}

			break;

		case KEY_LEFT:

			if (b <= 9 && b - size >= -1)
			{
				for (int i = b + 1; i >= b - size; i--)
				{

					if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

					{
						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}


			break;

		}


		if (size == 1 && count1 < 4)
		{

			x = 22, y = 19;
			gotoxy(x, y);
			count1++;
			cout << count1;



		}
		else if (size == 2 && count2 < 3)
		{
			x = 22, y = 18;
			gotoxy(x, y);
			count2++;
			cout << count2;

		}
		else if (size == 3 && count3 < 2)
		{

			x = 22, y = 17;
			gotoxy(x, y);
			count3++;
			cout << count3;


		}
		else if (size == 4 && count4 < 1)
		{

			x = 22, y = 16;
			gotoxy(x, y);
			count4++;
			cout << count4;

		}
		else
		{

			goto exit;
		}


		x = b * k + 5;
		y = a + 5;
		counter = 0;
		while (counter != size)
		{


			if (keys == 80)
			{
				if (a + size <= 10)
				{
					while (counter != size)
					{
				
						mas[a][b] = 0;
						a++;
						counter++;

					}
				}
				else
					goto exit;
			}
			else if (keys == 72)
			{
				if (a + 1 - size >= 0)
				{
					while (counter != size)
					{
						
						mas[a][b] = 0;
						a--;					
						counter++;
					}
				}
				else
					goto exit;

			}

			else if (keys == 75)
			{
				if (b + 1 - size >= 0)
				{


					if (p)
					{
						while (counter != size)
						{
							if (a < 0) a = 0;
							mas[a][b] = 0;
							b--;					
							counter++;
						}
					}
				}
				else
					goto exit;

			}
			else if (keys == 77)
			{

				if (b + size <= 10)
				{


					if (p)
					{
						while (counter != size)
						{
							
							mas[a][b] = 0;
							b++;
							counter++;


						}
					}
				}
				else
					goto exit;
			}

		}
	}


}

void spacing_of_ships_random_comp_comp(int(&mas)[10][10])
{
	int k = 3;
	bool p = true;
	int q, x, y;
	int counter;
	int size, keys;
	int  a, b;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	while (count1 + count2 + count3 + count4 != 10)
	{
	exit:

		size = rand() % 4 + 1;
		a = rand() % 10;
		b = rand() % 10;

		if (a - size < 0 || a + size >= 9)
		{
			q = rand() % 2 + 2;
		}
		else if (b - size < 0 || b + size >= 9)
		{
			q = rand() % 2;
		}
		else
		{
			q = rand() % 4;
		}

		if (q == 0)
		{
			keys = KEY_UP;
		}
		else if (q == 1)
		{
			keys = KEY_DOWN;
		}
		else if (q == 2)
		{
			keys = KEY_RIGHT;
		}
		else
		{
			keys = KEY_LEFT;
		}


		switch (keys)
		{

		case KEY_UP:


			if (a <= 9 && a - size >= -1)
			{
				for (int i = a + 1; i >= a - size; i--)
				{

					if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

					{
						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}

			break;

		case KEY_DOWN:

			if (a >= 0 && a + size <= 10)
			{
				for (int i = a - 1; i <= a + size; i++)
				{

					if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

					{
						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}


			break;

		case KEY_RIGHT:

			if (b >= 0 && b + size <= 10)
			{
				for (int i = b - 1; i <= b + size; i++)
				{

					if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

					{

						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}

			break;

		case KEY_LEFT:

			if (b <= 9 && b - size >= -1)
			{
				for (int i = b + 1; i >= b - size; i--)
				{

					if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

					{
						goto exit;
					}

				}


			}
			else
			{
				goto exit;
			}


			break;

		}


		if (size == 1 && count1 < 4)
		{

			x = 22, y = 19;
			gotoxy(x, y);
			count1++;
			cout << count1;



		}
		else if (size == 2 && count2 < 3)
		{
			x = 22, y = 18;
			gotoxy(x, y);
			count2++;
			cout << count2;

		}
		else if (size == 3 && count3 < 2)
		{

			x = 22, y = 17;
			gotoxy(x, y);
			count3++;
			cout << count3;


		}
		else if (size == 4 && count4 < 1)
		{

			x = 22, y = 16;
			gotoxy(x, y);
			count4++;
			cout << count4;

		}
		else
		{

			goto exit;
		}


		x = b * k + 5;
		y = a + 5;
		counter = 0;
		while (counter != size)
		{


			if (keys == 80)
			{
				if (a + size <= 10)
				{
					while (counter != size)
					{
						gotoxy(x, y);
						cout << 0;
						mas[a][b] = 0;
						a++;
						y++;
						counter++;

					}
				}
				else
					goto exit;
			}
			else if (keys == 72)
			{
				if (a + 1 - size >= 0)
				{
					while (counter != size)
					{

						gotoxy(x, y);
						cout << 0;
						mas[a][b] = 0;
						a--;
						y--;
						counter++;
					}
				}
				else
					goto exit;

			}

			else if (keys == 75)
			{
				if (b + 1 - size >= 0)
				{


					if (p)
					{
						while (counter != size)
						{
							gotoxy(x, y);
							if (a < 0) a = 0;
							cout << 0;
							mas[a][b] = 0;
							b--;
							x -= k;
							counter++;
						}
					}
				}
				else
					goto exit;

			}
			else if (keys == 77)
			{

				if (b + size <= 10)
				{


					if (p)
					{
						while (counter != size)
						{
							gotoxy(x, y);
							cout << 0;
							mas[a][b] = 0;
							b++;
							x += k;
							counter++;


						}
					}
				}
				else
					goto exit;
			}

		}
	}


}



bool check_spacing_of_ships(int& a, int& b, int size, int(&mas)[10][10],int&keys)

{
		switch ((keys = _getch()))
		{

		case KEY_UP:


			if (a <= 9 && a - size >= -1)
			{
				if (a == 9)
				{
					for (int i = a; i >= a - size; i--)
					{
						if (!b)
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0 )

							{
								return 1;
							}

						}
						else if (b == 9)
						{
							if (mas[i][b] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}
						
						else
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}

					}
				}
				else
				{
					for (int i = a; i >= a - size; i--)
					{
						if (!b)
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0)

							{
								return 1;
							}

						}
						else if (b == 9)
						{
							if (mas[i][b] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}

						else
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}

					}
				}
			
				return 0;
			}
			
			break;

		case KEY_DOWN:

			if (a >= 0 && a + size <= 10)
			{   
				if (!a)
				{
					for (int i = a; i <= a + size; i++)
					{
						if (!b)
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0)

							{
								return 1;
							}

						}
						else if (b == 9)
						{
							if (mas[i][b] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}

						else
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}


					}
				}
				else
				{
					for (int i = a - 1; i <= a + size; i++)
					{

						if (!b)
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0)

							{
								return 1;
							}

						}
						else if (b == 9)
						{
							if (mas[i][b] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}

						else
						{
							if (mas[i][b] == 0 || mas[i][b + 1] == 0 || mas[i][b - 1] == 0)

							{
								return 1;
							}
						}


					}
				}
			
				return 0;
			}
			

			break;

		case KEY_RIGHT:

			if (b >= 0 && b + size <= 10)
			{   
				if (!b)
				{
					for (int i = b; i <= b + size; i++)
					{
						if (!a)
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0 )

							{

								return 1;
							}
						}

						else if (a == 9)
						{
							if (mas[a][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

						else
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

					}
				}
				else
				{
					for (int i = b - 1; i <= b + size; i++)
					{

						if (!a)
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0)

							{

								return 1;
							}
						}

						else if (a == 9)
						{
							if (mas[a][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

						else
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

					}
				}
			   
				return 0;
			}
	

			break;

		case KEY_LEFT:

			if (b <= 9 && b - size >= -1)
			{  
				if (b == 9)
				{
					for (int i = b; i >= b - size; i--)
					{


						if (!a)
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0)

							{

								return 1;
							}
						}

						else if (a == 9)
						{
							if (mas[a][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

						else
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

					}
				}
				else
				{
					for (int i = b + 1; i >= b - size; i--)
					{


						if (!a)
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0)

							{

								return 1;
							}
						}

						else if (a == 9)
						{
							if (mas[a][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}

						else
						{
							if (mas[a][i] == 0 || mas[a + 1][i] == 0 || mas[a - 1][i] == 0)

							{

								return 1;
							}
						}
					}
				}
		
				return 0;
			}
	

			break;

		}

		
	

}
void random_shoot(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp)
{

	double state_play_total;
	double state_comp_total;
	int x, y, k=0, a, b, size, keys;
	int count1;
	int count2;
	int count3;
	int count4;
	exit777:
	while (state_comp != 0 || state_play != 0)
	{

		int cant = 0;
		int m = 0;
		int c, d;
		bool i = true;
		int temp1, temp2;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "\nIf you want to EXIT Press 5. Another digit to continue                     ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		int g;
		x = 5, y = 26;
		gotoxy(x, y);
		cin >> g;
		if (g == 5)
		{
			state_comp = 0;
			state_play = 0;
			goto exit777;
		}
	exit_1_2:
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Computer move                                                         ";
		cout << "                                                                      ";
		cout << "                                                                      ";
		cout << "                                                                      ";

		c = rand() % 10;
		d = rand() % 10;
		if (mas_play[c][d] == '*' || mas_play[c][d] == 'X')
		{
			goto exit_1_2;
		}
		temp1 = c;
		temp2 = d;

		if (mas_play[c][d] == 0)
		{
			if (!c)
			{
				if (!d)
				{
					if (mas_play[c + 1][d] == 0 || mas_play[c][d + 1] == 0
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}


				}
				else

				{
					if (d != 9)
					{
						if (mas_play[c + 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
							|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
							|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer hurt                                      ";
							state_play--;
							cant++;
							x = d * k + 55;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[c][d] = 'X';
							i = false;
							x = 60, y = 21;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_1_2;
						}
					}
					else
					{
						if (mas_play[c + 1][d] == 0 || (mas_play[c][d - 1] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer hurt                                      ";
							state_play--;
							cant++;
							x = d * k + 55;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[c][d] = 'X';
							i = false;
							x = 60, y = 21;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_1_2;
						}
					}

				}

			}
			else
			{
				if (c != 9 && d != 9)
				{
					if (mas_play[c + 1][d] == 0 || mas_play[c - 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}
				}
				else if (c == 9 && d != 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}

				}
				else if (d == 9 && c != 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d - 1] == 0 || mas_play[c + 1][d] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}

				}
				else if (d == 9 && c == 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d - 1] == 0 || mas_play[c + 1][d] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}

				}

			}


			{
				k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship sunk";
				state_play--;
				cant++;
				x = d * k + 55;
				y = c + 5;
				gotoxy(x, y);

				SetColor(4);
				cout << 'X';
				SetColor(7);
				mas_play[c][d] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_play[c + 1][d] == 'X')
				{

					dir = true;
				}
				else if (mas_play[c - 1][d] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (d != 0)
						{
							if (mas_play[c][d - 1] == 1)
							{
								mas_play[c][d - 1] = '*';
								x = (d - 1) * k + 55;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_play[c][d + 1] == 1)
							{
								mas_play[c][d + 1] = '*';
								x = (d + 1) * k + 55;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_play[c + 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_play[c + 1][d - 1] == 1)
								{
									mas_play[c + 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_play[c + 1][d + 1] == 1)
								{
									mas_play[c + 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c + 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_play[c + 2][d - 1] == 1)
									{
										mas_play[c + 2][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_play[c + 2][d + 1] == 1)
									{
										mas_play[c + 2][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c + 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_play[c + 3][d - 1] == 1)
										{
											mas_play[c + 3][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_play[c + 3][d + 1] == 1)
										{
											mas_play[c + 3][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c + 4 < 10)
									{
										if (d != 0)
										{
											if (mas_play[c + 4][d - 1] == 1)
											{
												mas_play[c + 4][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[c + 4][d] == 1)
										{
											mas_play[c + 4][d] = '*';
											x = (d)*k + 55;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_play[c + 4][d + 1] == 1)
											{
												mas_play[c + 4][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d != 0)
									{
										if (c + 3 < 10)
										{
											if (mas_play[c + 3][d - 1] == 1)
											{
												mas_play[c + 3][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c + 3 < 10)
									{
										if (mas_play[c + 3][d] == 1)
										{
											mas_play[c + 3][d] = '*';
											x = (d)*k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c + 3 < 10)
										{
											if (mas_play[c + 3][d + 1] == 1)
											{
												mas_play[c + 3][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (d != 0)
								{
									if (c + 2 <= 9)
									{
										if (mas_play[c + 2][d - 1] == 1)
										{
											mas_play[c + 2][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c + 2 <= 9)
								{
									if (mas_play[c + 2][d] == 1)
									{
										mas_play[c + 2][d] = '*';
										x = (d)*k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c + 2 <= 9)
									{
										if (mas_play[c + 2][d + 1] == 1)
										{
											mas_play[c + 2][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c + 1 <= 9)
								{
									if (mas_play[c + 1][d - 1] == 1)
									{
										mas_play[c + 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}

							if (c + 1 <= 9)
							{
								if (mas_play[c + 1][d] == 1)
								{
									mas_play[c + 1][d] = '*';
									x = (d)*k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c + 1 <= 9)
								{
									if (mas_play[c + 1][d + 1] == 1)
									{
										mas_play[c + 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[c - 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_play[c - 1][d - 1] == 1)
								{
									mas_play[c - 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_play[c - 1][d + 1] == 1)
								{
									mas_play[c - 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c - 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_play[c - 2][d - 1] == 1)
									{
										mas_play[c - 2][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_play[c - 2][d + 1] == 1)
									{
										mas_play[c - 2][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c - 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_play[c - 3][d - 1] == 1)
										{
											mas_play[c - 3][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_play[c - 3][d + 1] == 1)
										{
											mas_play[c - 3][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c - 4 >= 0)
									{
										if (d != 0)
										{
											if (mas_play[c - 4][d - 1] == 1)
											{
												mas_play[c - 4][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[c - 4][d] == 1)
										{
											mas_play[c - 4][d] = '*';
											x = (d)*k + 55;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_play[c - 4][d + 1] == 1)
											{
												mas_play[c - 4][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (d != 0)
									{
										if (c - 3 >= 0)
										{
											if (mas_play[c - 3][d - 1] == 1)
											{
												mas_play[c - 3][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c - 3 >= 0)
									{
										if (mas_play[c - 3][d] == 1)
										{
											mas_play[c - 3][d] = '*';
											x = (d)*k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c - 3 >= 0)
										{
											if (mas_play[c - 3][d + 1] == 1)
											{
												mas_play[c - 3][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (d != 0)
								{
									if (c - 2 >= 0)
									{
										if (mas_play[c - 2][d - 1] == 1)
										{
											mas_play[c - 2][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c - 2 >= 0)
								{
									if (mas_play[c - 2][d] == 1)
									{
										mas_play[c - 2][d] = '*';
										x = (d)*k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c - 2 >= 0)
									{
										if (mas_play[c - 2][d + 1] == 1)
										{
											mas_play[c - 2][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c - 1 >= 0)
								{
									if (mas_play[c - 1][d - 1] == 1)
									{
										mas_play[c - 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (c - 1 >= 0)
							{
								if (mas_play[c - 1][d] == 1)
								{
									mas_play[c - 1][d] = '*';
									x = (d)*k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c - 1 >= 0)
								{
									if (mas_play[c - 1][d + 1] == 1)
									{
										mas_play[c - 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (c != 0)
						{
							if (mas_play[c - 1][d] == 1)
							{
								mas_play[c - 1][d] = '*';
								x = (d)*k + 55;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_play[c + 1][d] == 1)
							{
								mas_play[c + 1][d] = '*';
								x = (d)*k + 55;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}

						if (mas_play[c][d + 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_play[c - 1][d + 1] == 1)
								{
									mas_play[c - 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_play[c + 1][d + 1] == 1)
								{
									mas_play[c + 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c][d + 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_play[c - 1][d + 2] == 1)
									{
										mas_play[c - 1][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_play[c + 1][d + 2] == 1)
									{
										mas_play[c + 1][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c][d + 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_play[c - 1][d + 3] == 1)
										{
											mas_play[c - 1][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_play[c + 1][d + 3] == 1)
										{
											mas_play[c + 1][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d + 4 < 10)
									{
										if (c != 0)
										{
											if (mas_play[c - 1][d + 4] == 1)
											{
												mas_play[c - 1][d + 4] = '*';
												x = (d + 4) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_play[c][d + 4] == 1)
										{
											mas_play[c][d + 4] = '*';
											x = (d + 4) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_play[c + 1][d + 4] == 1)
											{
												mas_play[c + 1][d + 4] = '*';
												x = (d + 4) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (c != 0)
									{
										if (d + 3 < 10)
										{
											if (mas_play[c - 1][d + 3] == 1)
											{
												mas_play[c - 1][d + 3] = '*';
												x = (d + 3) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (d + 3 < 10)
									{
										if (mas_play[c][d + 3] == 1)
										{
											mas_play[c][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (c != 9)
									{
										if (d + 3 < 10)
										{
											if (mas_play[c + 1][d + 3] == 1)
											{
												mas_play[c + 1][d + 3] = '*';
												x = (d + 3) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (c != 0)
								{
									if (d + 2 < 10)
									{
										if (mas_play[c - 1][d + 2] == 1)
										{
											mas_play[c - 1][d + 2] = '*';
											x = (d + 2) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d + 2 < 10)
								{
									if (mas_play[c][d + 2] == 1)
									{
										mas_play[c][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d + 2 < 10)
									{
										if (mas_play[c + 1][d + 2] == 1)
										{
											mas_play[c + 1][d + 2] = '*';
											x = (d + 2) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d + 1 < 10)
								{
									if (mas_play[c - 1][d + 1] == 1)
									{
										mas_play[c - 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (d + 1 < 10)
							{
								if (mas_play[c][d + 1] == 1)
								{
									mas_play[c][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d + 1 < 10)
								{
									if (mas_play[c + 1][d + 1] == 1)
									{
										mas_play[c + 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[c][d - 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_play[c - 1][d - 1] == 1)
								{
									mas_play[c - 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_play[c + 1][d - 1] == 1)
								{
									mas_play[c + 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c][d - 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_play[c - 1][d - 2] == 1)
									{
										mas_play[c - 1][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_play[c + 1][d - 2] == 1)
									{
										mas_play[c + 1][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c][d - 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_play[c - 1][d - 3] == 1)
										{
											mas_play[c - 1][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_play[c + 1][d - 3] == 1)
										{
											mas_play[c + 1][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d - 4 >= 0)
									{
										if (c != 0)
										{
											if (mas_play[c - 1][d - 4] == 1)
											{
												mas_play[c - 1][d - 4] = '*';
												x = (d - 4) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_play[c][d - 4] == 1)
										{
											mas_play[c][d - 4] = '*';
											x = (d - 4) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_play[c + 1][d - 4] == 1)
											{
												mas_play[c + 1][d - 4] = '*';
												x = (d - 4) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (c != 0)
									{
										if (d - 3 >= 0)
										{
											if (mas_play[c - 1][d - 3] == 1)
											{
												mas_play[c - 1][d - 3] = '*';
												x = (d - 3) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (d - 3 >= 0)
									{
										if (mas_play[c][d - 3] == 1)
										{
											mas_play[c][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (c != 9)
									{
										if (d - 3 >= 0)
										{
											if (mas_play[c + 1][d - 3] == 1)
											{
												mas_play[c + 1][d - 3] = '*';
												x = (d - 3) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (c != 0)
								{
									if (d - 2 >= 0)
									{
										if (mas_play[c - 1][d - 2] == 1)
										{
											mas_play[c - 1][d - 2] = '*';
											x = (d - 2) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d - 2 >= 0)
								{
									if (mas_play[c][d - 2] == 1)
									{
										mas_play[c][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d - 2 >= 0)
									{
										if (mas_play[c + 1][d - 2] == 1)
										{
											mas_play[c + 1][d - 2] = '*';
											x = (d - 2) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d - 1 >= 0)
								{
									if (mas_play[c - 1][d - 1] == 1)
									{
										mas_play[c - 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

							}


							if (d - 1 >= 0)
							{
								if (mas_play[c][d - 1] == 1)
								{
									mas_play[c][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d - 1 >= 0)
								{
									if (mas_play[c + 1][d - 1] == 1)
									{
										mas_play[c + 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				x = 60, y = 21;
				gotoxy(x, y);
				state_play_total = double(state_play) / 20 * 100;
				cout << state_play_total << " %    ";
				m = 0;
				i = true;
				if (!state_play)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer WON!!!! Congratulations!!!"<<endl;
					cout << "Press Enter ";
					_getch();
					break;

				}

				goto exit_1_2;

			}
		}
		else
		{
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "Computer missed                                                          ";
			x = d * k + 55;
			y = c + 5;
			gotoxy(x, y);
			cout << '*';
			mas_play[c][d] = '*';
			c = temp1;
			d = temp2;
		}


		cant = 0;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Your move" << endl;
	exit_1_0:
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Enter number of the ROW from 0 to 9                                                       " << endl;
		cin >> a;
		x = 5, y = 28;
		gotoxy(x, y);
		cout << "Enter number of the COL from 0 to 9                                                       " << endl;
		cin >> b;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		if (a > 9 || a < 0 || b>9 || b < 0)
		{
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "You entered wrong coordinates!!! It must be from 0 to 9";
			cout << "Press Enter                                                                           ";
			_getch();
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
		}

		if (mas_comp[a][b] == '*' || mas_comp[a][b] == 'X')

		{
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "You have already erased in this cell                                                  " << endl;
			cout << "Press Enter                                                                           ";
			_getch();
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";

			goto exit_1_0;
		}

		if (mas_comp[a][b] == 0)
		{
			if (!a)
			{
				if (!b)
				{
					if (mas_comp[a + 1][b] == 0 || mas_comp[a][b + 1] == 0
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 'X' && mas_comp[a + 3][b] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   " << endl;
						_getch();
						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_1_0;
					}


				}
				else

				{
					if (b != 9)
					{
						if (mas_comp[a + 1][b] == 0 || mas_comp[a][b + 1] == 0 || mas_comp[a][b - 1] == 0
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
							|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
							|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "You hurt                                      " << endl;
							cout << "Press Enter                                   " << endl;
							_getch();
							state_comp--;
							cant++;
							x = b * k + 5;
							y = a + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_comp[a][b] = 'X';
							x = 60, y = 22;
							gotoxy(x, y);
							state_comp_total = double(state_comp) / 20 * 100;
							cout << state_comp_total << " %      ";
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							goto exit_1_0;
						}
					}
					else
					{
						if (mas_comp[a + 1][b] == 0 || (mas_comp[a][b - 1] == 0)
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "You hurt                                      " << endl;
							cout << "Press Enter                                   ";
							_getch();

							state_comp--;
							cant++;
							x = b * k + 5;
							y = a + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_comp[a][b] = 'X';
							x = 60, y = 22;
							gotoxy(x, y);
							state_comp_total = double(state_comp) / 20 * 100;
							cout << state_comp_total << " %      ";
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							goto exit_1_0;
						}
					}

				}

			}
			else
			{
				if (a != 9 && b != 9)
				{
					if (mas_comp[a + 1][b] == 0 || mas_comp[a - 1][b] == 0 || mas_comp[a][b + 1] == 0 || mas_comp[a][b - 1] == 0
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 'X' && mas_comp[a + 3][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();

						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_1_0;
					}
				}
				else if (a == 9 && b != 9)
				{
					if (mas_comp[a - 1][b] == 0 || mas_comp[a][b + 1] == 0 || mas_comp[a][b - 1] == 0
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();

						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_1_0;
					}

				}
				else if (b == 9 && a != 9)
				{
					if (mas_comp[a - 1][b] == 0 || mas_comp[a][b - 1] == 0 || mas_comp[a + 1][b] == 0
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 'X' && mas_comp[a + 3][b] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();

						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_1_0;
					}

				}
				else if (b == 9 && a == 9)
				{
					if (mas_comp[a - 1][b] == 0 || mas_comp[a][b - 1] == 0 || mas_comp[a + 1][b] == 0
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();

						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_1_0;
					}

				}

			}


			{
				k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship sunk" << endl;
				cout << "Press Enter                                   ";
				_getch();

				state_comp--;
				cant++;
				x = b * k + 5;
				y = a + 5;
				gotoxy(x, y);
				SetColor(4);
				cout << 'X';
				SetColor(7);
				c = a;
				d = b;
				mas_comp[c][d] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_comp[c + 1][d] == 'X')
				{

					dir = true;
				}
				else if (mas_comp[c - 1][d] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (d != 0)
						{
							if (mas_comp[c][d - 1] == 1)
							{
								mas_comp[c][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_comp[c][d + 1] == 1)
							{
								mas_comp[c][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c + 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c + 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c + 2][d - 1] == 1)
									{
										mas_comp[c + 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c + 2][d + 1] == 1)
									{
										mas_comp[c + 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c + 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_comp[c + 3][d - 1] == 1)
										{
											mas_comp[c + 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_comp[c + 3][d + 1] == 1)
										{
											mas_comp[c + 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c + 4 < 10)
									{
										if (d != 0)
										{
											if (mas_comp[c + 4][d - 1] == 1)
											{
												mas_comp[c + 4][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c + 4][d] == 1)
										{
											mas_comp[c + 4][d] = '*';
											x = (d)*k + 5;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c + 4][d + 1] == 1)
											{
												mas_comp[c + 4][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d != 0)
									{
										if (c + 3 < 10)
										{
											if (mas_comp[c + 3][d - 1] == 1)
											{
												mas_comp[c + 3][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c + 3 < 10)
									{
										if (mas_comp[c + 3][d] == 1)
										{
											mas_comp[c + 3][d] = '*';
											x = (d)*k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c + 3 < 10)
										{
											if (mas_comp[c + 3][d + 1] == 1)
											{
												mas_comp[c + 3][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (c + 2 < 10)
								{
									if (d != 0)
									{
										if (mas_comp[c + 2][d - 1] == 1)
										{
											mas_comp[c + 2][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c + 2][d] == 1)
									{
										mas_comp[c + 2][d] = '*';
										x = (d)*k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c + 2][d + 1] == 1)
										{
											mas_comp[c + 2][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c + 1 < 10)
							{
								if (d != 0)
								{
									if (mas_comp[c + 1][d - 1] == 1)
									{
										mas_comp[c + 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (mas_comp[c + 1][d] == 1)
								{
									mas_comp[c + 1][d] = '*';
									x = (d)*k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}


								if (d != 9)
								{
									if (mas_comp[c + 1][d + 1] == 1)
									{
										mas_comp[c + 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_comp[c - 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c - 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c - 2][d - 1] == 1)
									{
										mas_comp[c - 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c - 2][d + 1] == 1)
									{
										mas_comp[c - 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c - 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_comp[c - 3][d - 1] == 1)
										{
											mas_comp[c - 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_comp[c - 3][d + 1] == 1)
										{
											mas_comp[c - 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c - 4 >= 0)
									{
										if (d != 0)
										{
											if (mas_comp[c - 4][d - 1] == 1)
											{
												mas_comp[c - 4][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c - 4][d] == 1)
										{
											mas_comp[c - 4][d] = '*';
											x = (d)*k + 5;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c - 4][d + 1] == 1)
											{
												mas_comp[c - 4][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (c - 3 >= 0)
									{
										if (d != 0)
										{
											if (mas_comp[c - 3][d - 1] == 1)
											{
												mas_comp[c - 3][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c - 3][d] == 1)
										{
											mas_comp[c - 3][d] = '*';
											x = (d)*k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c - 3][d + 1] == 1)
											{
												mas_comp[c - 3][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (c - 2 >= 0)
								{
									if (d != 0)
									{
										if (mas_comp[c - 2][d - 1] == 1)
										{
											mas_comp[c - 2][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c - 2][d] == 1)
									{
										mas_comp[c - 2][d] = '*';
										x = (d)*k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c - 2][d + 1] == 1)
										{
											mas_comp[c - 2][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c - 1 >= 0)
							{
								if (d != 0)
								{
									if (mas_comp[c - 1][d - 1] == 1)
									{
										mas_comp[c - 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c - 1][d] == 1)
								{
									mas_comp[c - 1][d] = '*';
									x = (d)*k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}


								if (d != 9)
								{
									if (mas_comp[c - 1][d + 1] == 1)
									{
										mas_comp[c - 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (c != 0)
						{
							if (mas_comp[c - 1][d] == 1)
							{
								mas_comp[c - 1][d] = '*';
								x = (d)*k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_comp[c + 1][d] == 1)
							{
								mas_comp[c + 1][d] = '*';
								x = (d)*k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}

						if (mas_comp[c][d + 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d + 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 2] == 1)
									{
										mas_comp[c - 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d + 2] == 1)
									{
										mas_comp[c + 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c][d + 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 3] == 1)
										{
											mas_comp[c - 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_comp[c + 1][d + 3] == 1)
										{
											mas_comp[c + 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d + 4 < 10)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d + 4] == 1)
											{
												mas_comp[c - 1][d + 4] = '*';
												x = (d + 4) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d + 4] == 1)
										{
											mas_comp[c][d + 4] = '*';
											x = (d + 4) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d + 4] == 1)
											{
												mas_comp[c + 1][d + 4] = '*';
												x = (d + 4) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d + 3 < 10)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d + 3] == 1)
											{
												mas_comp[c - 1][d + 3] = '*';
												x = (d + 3) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d + 3] == 1)
										{
											mas_comp[c][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d + 3] == 1)
											{
												mas_comp[c + 1][d + 3] = '*';
												x = (d + 3) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (d + 2 < 10)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 2] == 1)
										{
											mas_comp[c - 1][d + 2] = '*';
											x = (d + 2) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d + 2] == 1)
									{
										mas_comp[c][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d + 2] == 1)
										{
											mas_comp[c + 1][d + 2] = '*';
											x = (d + 2) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d + 1 < 10)
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 1] == 1)
									{
										mas_comp[c - 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c][d + 1] == 1)
								{
									mas_comp[c][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}


								if (c != 9)
								{
									if (mas_comp[c + 1][d + 1] == 1)
									{
										mas_comp[c + 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_comp[c][d - 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d - 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 2] == 1)
									{
										mas_comp[c - 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d - 2] == 1)
									{
										mas_comp[c + 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c][d - 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 3] == 1)
										{
											mas_comp[c - 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_comp[c + 1][d - 3] == 1)
										{
											mas_comp[c + 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d - 4 >= 0)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d - 4] == 1)
											{
												mas_comp[c - 1][d - 4] = '*';
												x = (d - 4) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_comp[c][d - 4] == 1)
										{
											mas_comp[c][d - 4] = '*';
											x = (d - 4) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d - 4] == 1)
											{
												mas_comp[c + 1][d - 4] = '*';
												x = (d - 4) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (d - 3 >= 0)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d - 3] == 1)
											{
												mas_comp[c - 1][d - 3] = '*';
												x = (d - 3) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d - 3] == 1)
										{
											mas_comp[c][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d - 3] == 1)
											{
												mas_comp[c + 1][d - 3] = '*';
												x = (d - 3) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (d - 2 >= 0)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 2] == 1)
										{
											mas_comp[c - 1][d - 2] = '*';
											x = (d - 2) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d - 2] == 1)
									{
										mas_comp[c][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d - 2] == 1)
										{
											mas_comp[c + 1][d - 2] = '*';
											x = (d - 2) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d - 1 >= 0)
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 1] == 1)
									{
										mas_comp[c - 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c][d - 1] == 1)
								{
									mas_comp[c][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}


								if (c != 9)
								{
									if (mas_comp[c + 1][d - 1] == 1)
									{
										mas_comp[c + 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}


				x = 5, y = 26;
				gotoxy(x, y);
				cout << "                                                                                          ";
				cout << "                                                                                          ";
				cout << "                                                                                          ";
				cout << "                                                                                          ";
				cout << "                                                                                          ";

				x = 60, y = 22;
				gotoxy(x, y);
				state_comp_total = double(state_comp) / 20 * 100;
				cout << state_comp_total << " %      ";
				cant = 0;
				if (!state_comp)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "You WIN!!!! Congratulations!!!"<<endl;
					cout << "Press Enter ";
					_getch();
					break;

				}

				goto exit_1_0;

			}
		}
		else
		{
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "You missed                                                                            " << endl;
			cout << "Press Enter                                                                           ";
			_getch();
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";


			x = b * k + 5;
			y = a + 5;
			gotoxy(x, y);
			cout << '*';
			mas_comp[a][b] = '*';

		}


		//goto exit_1_2;
	}

}

void random_shoot_comp_comp(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp)
{

	double state_play_total;
	double state_comp_total;
	int x, y, k = 0, a, b, size, keys;
	int count1;
	int count2;
	int count3;
	int count4;
	exit777:
	while (state_comp != 0 || state_play != 0)
	{
		int cant = 0;
		int m = 0;
		int c, d;
		bool i = true;
		int temp1, temp2;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "\nIf you want to EXIT Press 5. Another digit to continue                     ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		int g;
		x = 5, y = 26;
		gotoxy(x, y);
		cin >> g;
		if (g == 5)
		{
			state_comp = 0;
			state_play = 0;
			goto exit777;
		}
	exit_1_2:
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Computer1 move                                                           ";
		cout << "\nPress Enter                                                            ";
		cout << "                                                                         ";
		cout << "                                                                         ";
		_getch();
		c = rand() % 10;
		d = rand() % 10;
		if (mas_play[c][d] == '*' || mas_play[c][d] == 'X')
		{
			goto exit_1_2;
		}
		temp1 = c;
		temp2 = d;

		if (mas_play[c][d] == 0)
		{
			if (!c)
			{
				if (!d)
				{
					if (mas_play[c + 1][d] == 0 || mas_play[c][d + 1] == 0
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}


				}
				else

				{
					if (d != 9)
					{
						if (mas_play[c + 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
							|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
							|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y); 
							cout << "Computer1 hurt                                                           ";
							cout << "\nPress Enter                                                            ";
							cout << "                                                                         ";
							cout << "                                                                         ";
							_getch();
							state_play--;
							cant++;
							x = d * k + 55;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[c][d] = 'X';
							i = false;
							x = 60, y = 22;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_1_2;
						}
					}
					else
					{
						if (mas_play[c + 1][d] == 0 || (mas_play[c][d - 1] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer1 hurt                                                           ";
							cout << "\nPress Enter                                                            ";
							cout << "                                                                         ";
							cout << "                                                                         ";
							_getch();
							state_play--;
							cant++;
							x = d * k + 55;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[c][d] = 'X';
							i = false;
							x = 60, y = 22;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_1_2;
						}
					}

				}

			}
			else
			{
				if (c != 9 && d != 9)
				{
					if (mas_play[c + 1][d] == 0 || mas_play[c - 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}
				}
				else if (c == 9 && d != 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}

				}
				else if (d == 9 && c != 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d - 1] == 0 || mas_play[c + 1][d] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}

				}
				else if (d == 9 && c == 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d - 1] == 0 || mas_play[c + 1][d] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_1_2;
					}

				}

			}


			{
				k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship Computer1 sunk                                                      ";
				cout << "\nPress Enter                                                            ";
				cout << "                                                                         ";
				cout << "                                                                         ";
				_getch();
				state_play--;
				cant++;
				x = d * k + 55;
				y = c + 5;
				gotoxy(x, y);
				SetColor(4);
				cout << 'X';
				SetColor(7);
				mas_play[c][d] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_play[c + 1][d] == 'X')
				{

					dir = true;
				}
				else if (mas_play[c - 1][d] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (d != 0)
						{
							if (mas_play[c][d - 1] == 1)
							{
								mas_play[c][d - 1] = '*';
								x = (d - 1) * k + 55;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_play[c][d + 1] == 1)
							{
								mas_play[c][d + 1] = '*';
								x = (d + 1) * k + 55;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_play[c + 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_play[c + 1][d - 1] == 1)
								{
									mas_play[c + 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_play[c + 1][d + 1] == 1)
								{
									mas_play[c + 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c + 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_play[c + 2][d - 1] == 1)
									{
										mas_play[c + 2][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_play[c + 2][d + 1] == 1)
									{
										mas_play[c + 2][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c + 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_play[c + 3][d - 1] == 1)
										{
											mas_play[c + 3][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_play[c + 3][d + 1] == 1)
										{
											mas_play[c + 3][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c + 4 < 10)
									{
										if (d != 0)
										{
											if (mas_play[c + 4][d - 1] == 1)
											{
												mas_play[c + 4][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[c + 4][d] == 1)
										{
											mas_play[c + 4][d] = '*';
											x = (d)*k + 55;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_play[c + 4][d + 1] == 1)
											{
												mas_play[c + 4][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d != 0)
									{
										if (c + 3 < 10)
										{
											if (mas_play[c + 3][d - 1] == 1)
											{
												mas_play[c + 3][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c + 3 < 10)
									{
										if (mas_play[c + 3][d] == 1)
										{
											mas_play[c + 3][d] = '*';
											x = (d)*k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c + 3 < 10)
										{
											if (mas_play[c + 3][d + 1] == 1)
											{
												mas_play[c + 3][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (d != 0)
								{
									if (c + 2 <= 9)
									{
										if (mas_play[c + 2][d - 1] == 1)
										{
											mas_play[c + 2][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c + 2 <= 9)
								{
									if (mas_play[c + 2][d] == 1)
									{
										mas_play[c + 2][d] = '*';
										x = (d)*k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c + 2 <= 9)
									{
										if (mas_play[c + 2][d + 1] == 1)
										{
											mas_play[c + 2][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c + 1 <= 9)
								{
									if (mas_play[c + 1][d - 1] == 1)
									{
										mas_play[c + 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}

							if (c + 1 <= 9)
							{
								if (mas_play[c + 1][d] == 1)
								{
									mas_play[c + 1][d] = '*';
									x = (d)*k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c + 1 <= 9)
								{
									if (mas_play[c + 1][d + 1] == 1)
									{
										mas_play[c + 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[c - 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_play[c - 1][d - 1] == 1)
								{
									mas_play[c - 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_play[c - 1][d + 1] == 1)
								{
									mas_play[c - 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c - 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_play[c - 2][d - 1] == 1)
									{
										mas_play[c - 2][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_play[c - 2][d + 1] == 1)
									{
										mas_play[c - 2][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c - 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_play[c - 3][d - 1] == 1)
										{
											mas_play[c - 3][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_play[c - 3][d + 1] == 1)
										{
											mas_play[c - 3][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c - 4 >= 0)
									{
										if (d != 0)
										{
											if (mas_play[c - 4][d - 1] == 1)
											{
												mas_play[c - 4][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[c - 4][d] == 1)
										{
											mas_play[c - 4][d] = '*';
											x = (d)*k + 55;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_play[c - 4][d + 1] == 1)
											{
												mas_play[c - 4][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (d != 0)
									{
										if (c - 3 >= 0)
										{
											if (mas_play[c - 3][d - 1] == 1)
											{
												mas_play[c - 3][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c - 3 >= 0)
									{
										if (mas_play[c - 3][d] == 1)
										{
											mas_play[c - 3][d] = '*';
											x = (d)*k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c - 3 >= 0)
										{
											if (mas_play[c - 3][d + 1] == 1)
											{
												mas_play[c - 3][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (d != 0)
								{
									if (c - 2 >= 0)
									{
										if (mas_play[c - 2][d - 1] == 1)
										{
											mas_play[c - 2][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c - 2 >= 0)
								{
									if (mas_play[c - 2][d] == 1)
									{
										mas_play[c - 2][d] = '*';
										x = (d)*k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c - 2 >= 0)
									{
										if (mas_play[c - 2][d + 1] == 1)
										{
											mas_play[c - 2][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c - 1 >= 0)
								{
									if (mas_play[c - 1][d - 1] == 1)
									{
										mas_play[c - 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (c - 1 >= 0)
							{
								if (mas_play[c - 1][d] == 1)
								{
									mas_play[c - 1][d] = '*';
									x = (d)*k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c - 1 >= 0)
								{
									if (mas_play[c - 1][d + 1] == 1)
									{
										mas_play[c - 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (c != 0)
						{
							if (mas_play[c - 1][d] == 1)
							{
								mas_play[c - 1][d] = '*';
								x = (d)*k + 55;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_play[c + 1][d] == 1)
							{
								mas_play[c + 1][d] = '*';
								x = (d)*k + 55;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}

						if (mas_play[c][d + 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_play[c - 1][d + 1] == 1)
								{
									mas_play[c - 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_play[c + 1][d + 1] == 1)
								{
									mas_play[c + 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c][d + 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_play[c - 1][d + 2] == 1)
									{
										mas_play[c - 1][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_play[c + 1][d + 2] == 1)
									{
										mas_play[c + 1][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c][d + 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_play[c - 1][d + 3] == 1)
										{
											mas_play[c - 1][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_play[c + 1][d + 3] == 1)
										{
											mas_play[c + 1][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d + 4 < 10)
									{
										if (c != 0)
										{
											if (mas_play[c - 1][d + 4] == 1)
											{
												mas_play[c - 1][d + 4] = '*';
												x = (d + 4) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_play[c][d + 4] == 1)
										{
											mas_play[c][d + 4] = '*';
											x = (d + 4) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_play[c + 1][d + 4] == 1)
											{
												mas_play[c + 1][d + 4] = '*';
												x = (d + 4) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (c != 0)
									{
										if (d + 3 < 10)
										{
											if (mas_play[c - 1][d + 3] == 1)
											{
												mas_play[c - 1][d + 3] = '*';
												x = (d + 3) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (d + 3 < 10)
									{
										if (mas_play[c][d + 3] == 1)
										{
											mas_play[c][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (c != 9)
									{
										if (d + 3 < 10)
										{
											if (mas_play[c + 1][d + 3] == 1)
											{
												mas_play[c + 1][d + 3] = '*';
												x = (d + 3) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (c != 0)
								{
									if (d + 2 < 10)
									{
										if (mas_play[c - 1][d + 2] == 1)
										{
											mas_play[c - 1][d + 2] = '*';
											x = (d + 2) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d + 2 < 10)
								{
									if (mas_play[c][d + 2] == 1)
									{
										mas_play[c][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d + 2 < 10)
									{
										if (mas_play[c + 1][d + 2] == 1)
										{
											mas_play[c + 1][d + 2] = '*';
											x = (d + 2) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d + 1 < 10)
								{
									if (mas_play[c - 1][d + 1] == 1)
									{
										mas_play[c - 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (d + 1 < 10)
							{
								if (mas_play[c][d + 1] == 1)
								{
									mas_play[c][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d + 1 < 10)
								{
									if (mas_play[c + 1][d + 1] == 1)
									{
										mas_play[c + 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[c][d - 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_play[c - 1][d - 1] == 1)
								{
									mas_play[c - 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_play[c + 1][d - 1] == 1)
								{
									mas_play[c + 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c][d - 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_play[c - 1][d - 2] == 1)
									{
										mas_play[c - 1][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_play[c + 1][d - 2] == 1)
									{
										mas_play[c + 1][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c][d - 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_play[c - 1][d - 3] == 1)
										{
											mas_play[c - 1][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_play[c + 1][d - 3] == 1)
										{
											mas_play[c + 1][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d - 4 >= 0)
									{
										if (c != 0)
										{
											if (mas_play[c - 1][d - 4] == 1)
											{
												mas_play[c - 1][d - 4] = '*';
												x = (d - 4) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_play[c][d - 4] == 1)
										{
											mas_play[c][d - 4] = '*';
											x = (d - 4) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_play[c + 1][d - 4] == 1)
											{
												mas_play[c + 1][d - 4] = '*';
												x = (d - 4) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (c != 0)
									{
										if (d - 3 >= 0)
										{
											if (mas_play[c - 1][d - 3] == 1)
											{
												mas_play[c - 1][d - 3] = '*';
												x = (d - 3) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (d - 3 >= 0)
									{
										if (mas_play[c][d - 3] == 1)
										{
											mas_play[c][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (c != 9)
									{
										if (d - 3 >= 0)
										{
											if (mas_play[c + 1][d - 3] == 1)
											{
												mas_play[c + 1][d - 3] = '*';
												x = (d - 3) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (c != 0)
								{
									if (d - 2 >= 0)
									{
										if (mas_play[c - 1][d - 2] == 1)
										{
											mas_play[c - 1][d - 2] = '*';
											x = (d - 2) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d - 2 >= 0)
								{
									if (mas_play[c][d - 2] == 1)
									{
										mas_play[c][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d - 2 >= 0)
									{
										if (mas_play[c + 1][d - 2] == 1)
										{
											mas_play[c + 1][d - 2] = '*';
											x = (d - 2) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d - 1 >= 0)
								{
									if (mas_play[c - 1][d - 1] == 1)
									{
										mas_play[c - 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								}
							

							if (d - 1 >= 0)
							{
								if (mas_play[c][d - 1] == 1)
								{
									mas_play[c][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d - 1 >= 0)
								{
									if (mas_play[c + 1][d - 1] == 1)
									{
										mas_play[c + 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				x = 60, y = 22;
				gotoxy(x, y);
				state_play_total = double(state_play) / 20 * 100;
				cout << state_play_total << " %    ";
				m = 0;
				i = true;
				if (!state_play)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer1 WIN!!!! Congratulations!!!" << endl;
					cout << "Press Enter ";
					_getch();
					break;

				}

				goto exit_1_2;

			}
		}
		else
		{
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "Computer1 missed                                                          ";
			cout << "\nPress Enter                                                             ";
			cout << "                                                                          ";
			cout << "                                                                          ";
			_getch();
			x = d * k + 55;
			y = c + 5;
			gotoxy(x, y);
			cout << '*';
			mas_play[c][d] = '*';
			c = temp1;
			d = temp2;
		}


	exit_1_22:
		x = 5, y = 26;
		gotoxy(x, y);

		cout << "Computer2 move                                                            ";
		cout << "\nPress Enter                                                             ";
		cout << "                                                                          ";
		cout << "                                                                          ";
		_getch();
		c = rand() % 10;
		d = rand() % 10;
		if (mas_comp[c][d] == '*' || mas_comp[c][d] == 'X')
		{
			goto exit_1_22;
		}
		temp1 = c;
		temp2 = d;

		if (mas_comp[c][d] == 0)
		{
			if (!c)
			{
				if (!d)
				{
					if (mas_comp[c + 1][d] == 0 || mas_comp[c][d + 1] == 0
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0)
						|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 0)
						|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 'X' && mas_comp[c + 3][d] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                            ";
						cout << "\nPress Enter                                                             ";
						cout << "                                                                          ";
						cout << "                                                                          ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_1_22;
					}


				}
				else

				{
					if (d != 9)
					{
						if (mas_comp[c + 1][d] == 0 || mas_comp[c][d + 1] == 0 || mas_comp[c][d - 1] == 0
							|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
							|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
							|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
							|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer2 hurt                                                            ";
							cout << "\nPress Enter                                                             ";
							cout << "                                                                          ";
							cout << "                                                                          ";
							_getch();
							state_comp--;
							cant++;
							x = d * k + 5;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_comp[c][d] = 'X';
							i = false;
							x = 60, y = 21;
							gotoxy(x, y);
							state_comp_total = double(state_comp) / 20 * 100;
							cout << state_comp_total << " %    ";
							goto exit_1_22;
						}
					}
					else
					{
						if (mas_comp[c + 1][d] == 0 || (mas_comp[c][d - 1] == 0)
							|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
							|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer2 hurt                                                            ";
							cout << "\nPress Enter                                                             ";
							cout << "                                                                          ";
							cout << "                                                                          ";
							_getch();
							state_comp--;
							cant++;
							x = d * k + 5;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_comp[c][d] = 'X';
							i = false;
							x = 60, y = 21;
							gotoxy(x, y);
							state_comp_total = double(state_comp) / 20 * 100;
							cout << state_comp_total << " %    ";
							goto exit_1_22;
						}
					}

				}

			}
			else
			{
				if (c != 9 && d != 9)
				{
					if (mas_comp[c + 1][d] == 0 || mas_comp[c - 1][d] == 0 || mas_comp[c][d + 1] == 0 || mas_comp[c][d - 1] == 0
						|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 0)
						|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 'X' && mas_comp[c + 3][d] == 0)
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                            ";
						cout << "\nPress Enter                                                             ";
						cout << "                                                                          ";
						cout << "                                                                          ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_1_22;
					}
				}
				else if (c == 9 && d != 9)
				{
					if (mas_comp[c - 1][d] == 0 || mas_comp[c][d + 1] == 0 || mas_comp[c][d - 1] == 0
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                            ";
						cout << "\nPress Enter                                                             ";
						cout << "                                                                          ";
						cout << "                                                                          ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_1_2;
					}

				}
				else if (d == 9 && c != 9)
				{
					if (mas_comp[c - 1][d] == 0 || mas_comp[c][d - 1] == 0 || mas_comp[c + 1][d] == 0
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
						|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 0)
						|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 'X' && mas_comp[c + 3][d] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                            ";
						cout << "\nPress Enter                                                             ";
						cout << "                                                                          ";
						cout << "                                                                          ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_1_22;
					}

				}
				else if (d == 9 && c == 9)
				{
					if (mas_comp[c - 1][d] == 0 || mas_comp[c][d - 1] == 0 || mas_comp[c + 1][d] == 0
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
						|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                            ";
						cout << "\nPress Enter                                                             ";
						cout << "                                                                          ";
						cout << "                                                                          ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_1_22;
					}

				}

			}


			{
			    k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship Computer2 sunk                                                       ";
				cout << "\nPress Enter                                                             ";
				cout << "                                                                          ";
				cout << "                                                                          ";
				_getch();
				state_comp--;
				cant++;
				x = d * k + 5;
				y = c + 5;
				gotoxy(x, y);
				SetColor(4);
				cout << 'X';
				SetColor(7);
				mas_comp[c][d] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_comp[c + 1][d] == 'X')
				{

					dir = true;
				}
				else if (mas_comp[c - 1][d] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (d != 0)
						{
							if (mas_comp[c][d - 1] == 1)
							{
								mas_comp[c][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_comp[c][d + 1] == 1)
							{
								mas_comp[c][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c + 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c + 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c + 2][d - 1] == 1)
									{
										mas_comp[c + 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c + 2][d + 1] == 1)
									{
										mas_comp[c + 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c + 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_comp[c + 3][d - 1] == 1)
										{
											mas_comp[c + 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_comp[c + 3][d + 1] == 1)
										{
											mas_comp[c + 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c + 4 < 10)
									{
										if (d != 0)
										{
											if (mas_comp[c + 4][d - 1] == 1)
											{
												mas_comp[c + 4][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										
									
										if (mas_comp[c + 4][d] == 1)
										{
											mas_comp[c + 4][d] = '*';
											x = (d)*k + 5;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}

										
										if (d != 9)
										{
											if (mas_comp[c + 4][d + 1] == 1)
											{
												mas_comp[c + 4][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d != 0)
									{
										if (c + 3 < 10)
										{
											if (mas_comp[c + 3][d - 1] == 1)
											{
												mas_comp[c + 3][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									
									if (c + 3 < 10)
									{
										if (mas_comp[c + 3][d] == 1)
										{
											mas_comp[c + 3][d] = '*';
											x = (d)*k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									
									if (d != 9)
									{
										if (c + 3 < 10)
										{
											if (mas_comp[c + 3][d + 1] == 1)
											{
												mas_comp[c + 3][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (c + 2 < 10)
								{
									if (d != 0)
									{
										if (mas_comp[c + 2][d - 1] == 1)
										{
											mas_comp[c + 2][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c + 2][d] == 1)
									{
										mas_comp[c + 2][d] = '*';
										x = (d)*k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c + 2][d + 1] == 1)
										{
											mas_comp[c + 2][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c + 1 < 10)
							{
								if (d != 0)
								{
									if (mas_comp[c + 1][d - 1] == 1)
									{
										mas_comp[c + 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (mas_comp[c + 1][d] == 1)
								{
									mas_comp[c + 1][d] = '*';
									x = (d)*k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}


								if (d != 9)
								{
									if (mas_comp[c + 1][d + 1] == 1)
									{
										mas_comp[c + 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{
						
						if (mas_comp[c - 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c - 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c - 2][d - 1] == 1)
									{
										mas_comp[c - 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c - 2][d + 1] == 1)
									{
										mas_comp[c - 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c - 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_comp[c - 3][d - 1] == 1)
										{
											mas_comp[c - 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_comp[c - 3][d + 1] == 1)
										{
											mas_comp[c - 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c - 4 >= 0)
									{
										if (d != 0)
										{
											if (mas_comp[c - 4][d - 1] == 1)
											{
												mas_comp[c - 4][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										
										
										if (mas_comp[c - 4][d] == 1)
										{
											mas_comp[c - 4][d] = '*';
											x = (d)*k + 5;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}

										
										if (d != 9)
										{
											if (mas_comp[c - 4][d + 1] == 1)
											{
												mas_comp[c - 4][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (c - 3 >= 0)
									{
										if (d != 0)
										{
											if (mas_comp[c - 3][d - 1] == 1)
											{
												mas_comp[c - 3][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c - 3][d] == 1)
										{
											mas_comp[c - 3][d] = '*';
											x = (d)*k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c - 3][d + 1] == 1)
											{
												mas_comp[c - 3][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (c - 2 >= 0)
								{
									if (d != 0)
									{
										if (mas_comp[c - 2][d - 1] == 1)
										{
											mas_comp[c - 2][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c - 2][d] == 1)
									{
										mas_comp[c - 2][d] = '*';
										x = (d)*k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c - 2][d + 1] == 1)
										{
											mas_comp[c - 2][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c - 1 >= 0)
							{
								if (d != 0)
								{
									if (mas_comp[c - 1][d - 1] == 1)
									{
										mas_comp[c - 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c - 1][d] == 1)
								{
									mas_comp[c - 1][d] = '*';
									x = (d)*k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}


								if (d != 9)
								{
									if (mas_comp[c - 1][d + 1] == 1)
									{
										mas_comp[c - 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (c != 0)
						{
							if (mas_comp[c-1][d] == 1)
							{
								mas_comp[c-1][d] = '*';
								x = (d) * k + 5;
								y = (c-1)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_comp[c+1][d] == 1)
							{
								mas_comp[c+1][d] = '*';
								x = (d) * k + 5;
								y = (c+1)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
					
						if (mas_comp[c][d+1] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d+2] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 2] == 1)
									{
										mas_comp[c - 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d + 2] == 1)
									{
										mas_comp[c + 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c][d+3] == 'X')
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 3] == 1)
										{
											mas_comp[c - 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_comp[c + 1][d + 3] == 1)
										{
											mas_comp[c + 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d + 4 < 10)
									{
										if (c != 0)
										{
											if (mas_comp[c-1][d+4] == 1)
											{
												mas_comp[c-1][d+4] = '*';
												x = (d + 4) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										
										if (mas_comp[c][d+4] == 1)
										{
											mas_comp[c][d+4] = '*';
											x = (d+4)*k + 5;
											y = (c) + 5;
											gotoxy(x, y);
											cout << '*';
										}

										
										if (c != 9)
										{
											if (mas_comp[c + 1][d + 4] == 1)
											{
												mas_comp[c + 1][d + 4] = '*';
												x = (d + 4) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{ 
									if (d + 3 < 10)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d + 3] == 1)
											{
												mas_comp[c - 1][d + 3] = '*';
												x = (d + 3) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d + 3] == 1)
										{
											mas_comp[c][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d + 3] == 1)
											{
												mas_comp[c + 1][d + 3] = '*';
												x = (d + 3) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (d + 2 < 10)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 2] == 1)
										{
											mas_comp[c - 1][d + 2] = '*';
											x = (d + 2) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d + 2] == 1)
									{
										mas_comp[c][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d + 2] == 1)
										{
											mas_comp[c + 1][d + 2] = '*';
											x = (d + 2) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d + 1 < 10)
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 1] == 1)
									{
										mas_comp[c - 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c][d + 1] == 1)
								{
									mas_comp[c][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}


								if (c != 9)
								{
									if (mas_comp[c + 1][d + 1] == 1)
									{
										mas_comp[c + 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_comp[c][d-1] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d -1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d-2] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 2] == 1)
									{
										mas_comp[c - 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d -2] == 1)
									{
										mas_comp[c +1][d -2] = '*';
										x = (d -2 ) * k + 5;
										y = (c+1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c][d-3] == 'X')
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 3] == 1)
										{
											mas_comp[c - 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_comp[c + 1][d - 3] == 1)
										{
											mas_comp[c +1][d -3] = '*';
											x = (d -3) * k + 5;
											y = (c +1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d - 4 >= 0)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d - 4] == 1)
											{
												mas_comp[c - 1][d - 4] = '*';
												x = (d - 4) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_comp[c][d-4] == 1)
										{
											mas_comp[c][d-4] = '*';
											x = (d-4)*k + 5;
											y = (c) + 5;
											gotoxy(x, y);
											cout << '*';
										}

										
										if (c != 9)
										{
											if (mas_comp[c+1][d-4] == 1)
											{
												mas_comp[c +1][d -4] = '*';
												x = (d -4) * k + 5;
												y = (c +1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (d - 3 >= 0)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d - 3] == 1)
											{
												mas_comp[c - 1][d - 3] = '*';
												x = (d - 3) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d - 3] == 1)
										{
											mas_comp[c][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d - 3] == 1)
											{
												mas_comp[c + 1][d - 3] = '*';
												x = (d - 3) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{	
								if (d - 2 >= 0)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 2] == 1)
										{
											mas_comp[c - 1][d - 2] = '*';
											x = (d - 2) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d - 2] == 1)
									{
										mas_comp[c][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d - 2] == 1)
										{
											mas_comp[c + 1][d - 2] = '*';
											x = (d - 2) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d - 1 >= 0)
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 1] == 1)
									{
										mas_comp[c - 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c][d - 1] == 1)
								{
									mas_comp[c][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}


								if (c != 9)
								{
									if (mas_comp[c + 1][d - 1] == 1)
									{
										mas_comp[c + 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}






				


				x = 60, y = 21;
				gotoxy(x, y);
				state_comp_total = double(state_comp) / 20 * 100;
				cout << state_comp_total << " %    ";
				m = 0;
				i = true;
				if (!state_comp)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer2 WIN!!!! Congratulations!!!" << endl;
					cout << "Press Enter ";
					_getch();
					break;

				}

				goto exit_1_22;

			}
		}
		else
		{
		    k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "Computer2 missed                                                          ";
			cout << "\nPress Enter                                                             ";
			cout << "                                                                          ";
			cout << "                                                                          ";
			_getch();
			x = d * k + 5;
			y = c + 5;
			gotoxy(x, y);
			cout << '*';
			mas_comp[c][d] = '*';
			c = temp1;
			d = temp2;
			//goto exit_1_2;
		}
	}
		

}


void intelectual_shoot(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp)
{

	double state_play_total;
	double state_comp_total;
	int x, y, k = 0, a, b, size, keys;
	int count1;
	int count2;
	int count3;
	int count4;
	exit777:
	while (state_comp != 0 || state_play != 0)
	{
		int cant = 0;
		int m = 0;
		int c, d;
		bool i = true;
		int temp1, temp2;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "\nIf you want to EXIT Press 5. Another digit to continue                     ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		int g;
		x = 5, y = 26;
		gotoxy(x, y);
		cin >> g;
		if (g == 5)
		{
			state_comp = 0;
			state_play = 0;
			goto exit777;
		}
	exit_12:
		x = 5, y = 26;
		gotoxy(x, y);

		cout << "Computer move                                                         ";
		cout << "                                                                      ";
		cout << "                                                                      ";
		cout << "                                                                      ";

		c = rand() % 10;
		d = rand() % 10;
		if (mas_play[c][d] == '*' || mas_play[c][d] == 'X')
		{
			goto exit_12;
		}
		temp1 = c;
		temp2 = d;
	exit_13:
		if (!i)
		{

			switch (m)
			{

			case 0:
			{
				c++;

				break;
			}
			case 1:
			{
				c--;
				break;

			}
			case 2:
			{
				d++;
				break;

			}
			case 3:
			{
				d--;
				break;

			}
			}
			if (c < 0 || c>9 || d < 0 || d>9)
			{
				m++;
				c = temp1;
				d = temp2;
				goto exit_13;
			}
			if (mas_play[c][d] == '*')
			{
				m++;
				c = temp1;
				d = temp2;
				goto exit_13;
			}
		}



		if (mas_play[c][d] == 0)
		{
			if (!c)
			{
				if (!d)
				{
					if (mas_play[c + 1][d] == 0 || mas_play[c][d + 1] == 0
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}


				}
				else

				{
					if (d != 9)
					{
						if (mas_play[c + 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
							|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
							|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer hurt                                      ";
							state_play--;
							cant++;
							x = d * k + 55;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[c][d] = 'X';
							i = false;
							x = 60, y = 21;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_13;
						}
					}
					else
					{
						if (mas_play[c + 1][d] == 0 || (mas_play[c][d - 1] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
							|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer hurt                                      ";
							state_play--;
							cant++;
							x = d * k + 55;
							y = c + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[c][d] = 'X';
							i = false;
							x = 60, y = 21;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_13;
						}
					}

				}

			}
			else
			{
				if (c != 9 && d != 9)
				{
					if (mas_play[c + 1][d] == 0 || mas_play[c - 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}
				}
				else if (c == 9 && d != 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d + 1] == 0 || mas_play[c][d - 1] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 0)
						|| (mas_play[c][d + 1] == 'X' && mas_play[c][d + 2] == 'X' && mas_play[c][d + 3] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}

				}
				else if (d == 9 && c != 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d - 1] == 0 || mas_play[c + 1][d] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 0)
						|| (mas_play[c + 1][d] == 'X' && mas_play[c + 2][d] == 'X' && mas_play[c + 3][d] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						i = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}

				}
				else if (d == 9 && c == 9)
				{
					if (mas_play[c - 1][d] == 0 || mas_play[c][d - 1] == 0 || mas_play[c + 1][d] == 0
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 0)
						|| (mas_play[c - 1][d] == 'X' && mas_play[c - 2][d] == 'X' && mas_play[c - 3][d] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 0)
						|| (mas_play[c][d - 1] == 'X' && mas_play[c][d - 2] == 'X' && mas_play[c][d - 3] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer hurt                                      ";
						state_play--;
						cant++;
						x = d * k + 55;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[c][d] = 'X';
						x = 60, y = 21;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";

						i = false;
						goto exit_13;
					}

				}

			}


			{
				k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship sunk";
				state_play--;
				cant++;
				x = d * k + 55;
				y = c + 5;
				gotoxy(x, y);

				SetColor(4);
				cout << 'X';
				SetColor(7);
				mas_play[c][d] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_play[c + 1][d] == 'X')
				{

					dir = true;
				}
				else if (mas_play[c - 1][d] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (d != 0)
						{
							if (mas_play[c][d - 1] == 1)
							{
								mas_play[c][d - 1] = '*';
								x = (d - 1) * k + 55;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_play[c][d + 1] == 1)
							{
								mas_play[c][d + 1] = '*';
								x = (d + 1) * k + 55;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_play[c + 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_play[c + 1][d - 1] == 1)
								{
									mas_play[c + 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_play[c + 1][d + 1] == 1)
								{
									mas_play[c + 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c + 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_play[c + 2][d - 1] == 1)
									{
										mas_play[c + 2][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_play[c + 2][d + 1] == 1)
									{
										mas_play[c + 2][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c + 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_play[c + 3][d - 1] == 1)
										{
											mas_play[c + 3][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_play[c + 3][d + 1] == 1)
										{
											mas_play[c + 3][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c + 4 < 10)
									{
										if (d != 0)
										{
											if (mas_play[c + 4][d - 1] == 1)
											{
												mas_play[c + 4][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[c + 4][d] == 1)
										{
											mas_play[c + 4][d] = '*';
											x = (d)*k + 55;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_play[c + 4][d + 1] == 1)
											{
												mas_play[c + 4][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d != 0)
									{
										if (c + 3 < 10)
										{
											if (mas_play[c + 3][d - 1] == 1)
											{
												mas_play[c + 3][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c + 3 < 10)
									{
										if (mas_play[c + 3][d] == 1)
										{
											mas_play[c + 3][d] = '*';
											x = (d)*k + 55;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c + 3 < 10)
										{
											if (mas_play[c + 3][d + 1] == 1)
											{
												mas_play[c + 3][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (d != 0)
								{
									if (c + 2 <= 9)
									{
										if (mas_play[c + 2][d - 1] == 1)
										{
											mas_play[c + 2][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c + 2 <= 9)
								{
									if (mas_play[c + 2][d] == 1)
									{
										mas_play[c + 2][d] = '*';
										x = (d)*k + 55;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c + 2 <= 9)
									{
										if (mas_play[c + 2][d + 1] == 1)
										{
											mas_play[c + 2][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c + 1 <= 9)
								{
									if (mas_play[c + 1][d - 1] == 1)
									{
										mas_play[c + 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}

							if (c + 1 <= 9)
							{
								if (mas_play[c + 1][d] == 1)
								{
									mas_play[c + 1][d] = '*';
									x = (d)*k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c + 1 <= 9)
								{
									if (mas_play[c + 1][d + 1] == 1)
									{
										mas_play[c + 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[c - 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_play[c - 1][d - 1] == 1)
								{
									mas_play[c - 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_play[c - 1][d + 1] == 1)
								{
									mas_play[c - 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c - 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_play[c - 2][d - 1] == 1)
									{
										mas_play[c - 2][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_play[c - 2][d + 1] == 1)
									{
										mas_play[c - 2][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c - 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_play[c - 3][d - 1] == 1)
										{
											mas_play[c - 3][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_play[c - 3][d + 1] == 1)
										{
											mas_play[c - 3][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c - 4 >= 0)
									{
										if (d != 0)
										{
											if (mas_play[c - 4][d - 1] == 1)
											{
												mas_play[c - 4][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[c - 4][d] == 1)
										{
											mas_play[c - 4][d] = '*';
											x = (d)*k + 55;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_play[c - 4][d + 1] == 1)
											{
												mas_play[c - 4][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (d != 0)
									{
										if (c - 3 >= 0)
										{
											if (mas_play[c - 3][d - 1] == 1)
											{
												mas_play[c - 3][d - 1] = '*';
												x = (d - 1) * k + 55;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c - 3 >= 0)
									{
										if (mas_play[c - 3][d] == 1)
										{
											mas_play[c - 3][d] = '*';
											x = (d)*k + 55;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c - 3 >= 0)
										{
											if (mas_play[c - 3][d + 1] == 1)
											{
												mas_play[c - 3][d + 1] = '*';
												x = (d + 1) * k + 55;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (d != 0)
								{
									if (c - 2 >= 0)
									{
										if (mas_play[c - 2][d - 1] == 1)
										{
											mas_play[c - 2][d - 1] = '*';
											x = (d - 1) * k + 55;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c - 2 >= 0)
								{
									if (mas_play[c - 2][d] == 1)
									{
										mas_play[c - 2][d] = '*';
										x = (d)*k + 55;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c - 2 >= 0)
									{
										if (mas_play[c - 2][d + 1] == 1)
										{
											mas_play[c - 2][d + 1] = '*';
											x = (d + 1) * k + 55;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c - 1 >= 0)
								{
									if (mas_play[c - 1][d - 1] == 1)
									{
										mas_play[c - 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (c - 1 >= 0)
							{
								if (mas_play[c - 1][d] == 1)
								{
									mas_play[c - 1][d] = '*';
									x = (d)*k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c - 1 >= 0)
								{
									if (mas_play[c - 1][d + 1] == 1)
									{
										mas_play[c - 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (c != 0)
						{
							if (mas_play[c - 1][d] == 1)
							{
								mas_play[c - 1][d] = '*';
								x = (d)*k + 55;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_play[c + 1][d] == 1)
							{
								mas_play[c + 1][d] = '*';
								x = (d)*k + 55;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}

						if (mas_play[c][d + 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_play[c - 1][d + 1] == 1)
								{
									mas_play[c - 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_play[c + 1][d + 1] == 1)
								{
									mas_play[c + 1][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c][d + 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_play[c - 1][d + 2] == 1)
									{
										mas_play[c - 1][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_play[c + 1][d + 2] == 1)
									{
										mas_play[c + 1][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c][d + 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_play[c - 1][d + 3] == 1)
										{
											mas_play[c - 1][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_play[c + 1][d + 3] == 1)
										{
											mas_play[c + 1][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d + 4 < 10)
									{
										if (c != 0)
										{
											if (mas_play[c - 1][d + 4] == 1)
											{
												mas_play[c - 1][d + 4] = '*';
												x = (d + 4) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_play[c][d + 4] == 1)
										{
											mas_play[c][d + 4] = '*';
											x = (d + 4) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_play[c + 1][d + 4] == 1)
											{
												mas_play[c + 1][d + 4] = '*';
												x = (d + 4) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (c != 0)
									{
										if (d + 3 < 10)
										{
											if (mas_play[c - 1][d + 3] == 1)
											{
												mas_play[c - 1][d + 3] = '*';
												x = (d + 3) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (d + 3 < 10)
									{
										if (mas_play[c][d + 3] == 1)
										{
											mas_play[c][d + 3] = '*';
											x = (d + 3) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (c != 9)
									{
										if (d + 3 < 10)
										{
											if (mas_play[c + 1][d + 3] == 1)
											{
												mas_play[c + 1][d + 3] = '*';
												x = (d + 3) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (c != 0)
								{
									if (d + 2 < 10)
									{
										if (mas_play[c - 1][d + 2] == 1)
										{
											mas_play[c - 1][d + 2] = '*';
											x = (d + 2) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d + 2 < 10)
								{
									if (mas_play[c][d + 2] == 1)
									{
										mas_play[c][d + 2] = '*';
										x = (d + 2) * k + 55;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d + 2 < 10)
									{
										if (mas_play[c + 1][d + 2] == 1)
										{
											mas_play[c + 1][d + 2] = '*';
											x = (d + 2) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d + 1 < 10)
								{
									if (mas_play[c - 1][d + 1] == 1)
									{
										mas_play[c - 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (d + 1 < 10)
							{
								if (mas_play[c][d + 1] == 1)
								{
									mas_play[c][d + 1] = '*';
									x = (d + 1) * k + 55;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d + 1 < 10)
								{
									if (mas_play[c + 1][d + 1] == 1)
									{
										mas_play[c + 1][d + 1] = '*';
										x = (d + 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[c][d - 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_play[c - 1][d - 1] == 1)
								{
									mas_play[c - 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_play[c + 1][d - 1] == 1)
								{
									mas_play[c + 1][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[c][d - 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_play[c - 1][d - 2] == 1)
									{
										mas_play[c - 1][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_play[c + 1][d - 2] == 1)
									{
										mas_play[c + 1][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[c][d - 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_play[c - 1][d - 3] == 1)
										{
											mas_play[c - 1][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_play[c + 1][d - 3] == 1)
										{
											mas_play[c + 1][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d - 4 >= 0)
									{
										if (c != 0)
										{
											if (mas_play[c - 1][d - 4] == 1)
											{
												mas_play[c - 1][d - 4] = '*';
												x = (d - 4) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_play[c][d - 4] == 1)
										{
											mas_play[c][d - 4] = '*';
											x = (d - 4) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_play[c + 1][d - 4] == 1)
											{
												mas_play[c + 1][d - 4] = '*';
												x = (d - 4) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (c != 0)
									{
										if (d - 3 >= 0)
										{
											if (mas_play[c - 1][d - 3] == 1)
											{
												mas_play[c - 1][d - 3] = '*';
												x = (d - 3) * k + 55;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (d - 3 >= 0)
									{
										if (mas_play[c][d - 3] == 1)
										{
											mas_play[c][d - 3] = '*';
											x = (d - 3) * k + 55;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (c != 9)
									{
										if (d - 3 >= 0)
										{
											if (mas_play[c + 1][d - 3] == 1)
											{
												mas_play[c + 1][d - 3] = '*';
												x = (d - 3) * k + 55;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (c != 0)
								{
									if (d - 2 >= 0)
									{
										if (mas_play[c - 1][d - 2] == 1)
										{
											mas_play[c - 1][d - 2] = '*';
											x = (d - 2) * k + 55;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d - 2 >= 0)
								{
									if (mas_play[c][d - 2] == 1)
									{
										mas_play[c][d - 2] = '*';
										x = (d - 2) * k + 55;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d - 2 >= 0)
									{
										if (mas_play[c + 1][d - 2] == 1)
										{
											mas_play[c + 1][d - 2] = '*';
											x = (d - 2) * k + 55;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d - 1 >= 0)
								{
									if (mas_play[c - 1][d - 1] == 1)
									{
										mas_play[c - 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

							}


							if (d - 1 >= 0)
							{
								if (mas_play[c][d - 1] == 1)
								{
									mas_play[c][d - 1] = '*';
									x = (d - 1) * k + 55;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d - 1 >= 0)
								{
									if (mas_play[c + 1][d - 1] == 1)
									{
										mas_play[c + 1][d - 1] = '*';
										x = (d - 1) * k + 55;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}


				x = 60, y = 21;
				gotoxy(x, y);
				state_play_total = double(state_play) / 20 * 100;
				cout << state_play_total << " %    ";
				m = 0;
				i = true;
				if (!state_play)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer WIN!!!! Congratulations!!!"<<endl;
					cout << "Press Enter";
					_getch();
					break;

				}

				goto exit_12;

			}
		}
		else
		{   
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "Computer missed                                                          ";
			x = d * k + 55;
			y = c + 5;
			gotoxy(x, y);
			cout << '*';
			mas_play[c][d] = '*';
			c = temp1;
			d = temp2;
		}
	

		cant = 0;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Your move" << endl;
	exit_10:
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Enter number of the ROW from 0 to 9                                                       " << endl;
		cin >> a;
		x = 5, y = 28;
		gotoxy(x, y);
		cout << "Enter number of the COL from 0 to 9                                                       " << endl;
		cin >> b;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		cout << "                                                                                          ";
		if (a > 9 || a < 0 || b>9 || b < 0)
		{
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "You entered wrong coordinates!!! It must be from 0 to 9";
			cout << "\nPress Enter                                                                           ";
			_getch();
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			goto exit_10;
		}

		if (mas_comp[a][b] == '*' || mas_comp[a][b] == 'X')

		{
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "You have already erased in this cell                                                  " << endl;
			cout << "\nPress Enter                                                                           ";
			_getch();
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";

			goto exit_10;
		}

		if (mas_comp[a][b] == 0)
		{
			if (!a)
			{
				if (!b)
				{
					if (mas_comp[a + 1][b] == 0 || mas_comp[a][b + 1] == 0
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 'X' && mas_comp[a + 3][b] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   " << endl;
						_getch();
						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_10;
					}


				}
				else

				{
					if (b != 9)
					{
						if (mas_comp[a + 1][b] == 0 || mas_comp[a][b + 1] == 0 || mas_comp[a][b - 1] == 0
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
							|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
							|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "You hurt                                      " << endl;
							cout << "Press Enter                                   " << endl;
							_getch();
							state_comp--;
							cant++;
							x = b * k + 5;
							y = a + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_comp[a][b] = 'X';
							x = 60, y = 22;
							gotoxy(x, y);
							state_comp_total = double(state_comp) / 20 * 100;
							cout << state_comp_total << " %      ";
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							goto exit_10;
						}
					}
					else
					{
						if (mas_comp[a + 1][b] == 0 || (mas_comp[a][b - 1] == 0)
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
							|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "You hurt                                      " << endl;
							cout << "Press Enter                                   ";
							_getch();
							state_comp--;
							cant++;
							x = b * k + 5;
							y = a + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_comp[a][b] = 'X';
							x = 60, y = 22;
							gotoxy(x, y);
							state_comp_total = double(state_comp) / 20 * 100;
							cout << state_comp_total << " %      ";
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							cout << "                                                                                          ";
							goto exit_10;
						}
					}

				}

			}
			else
			{
				if (a != 9 && b != 9)
				{
					if (mas_comp[a + 1][b] == 0 || mas_comp[a - 1][b] == 0 || mas_comp[a][b + 1] == 0 || mas_comp[a][b - 1] == 0
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 'X' && mas_comp[a + 3][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();

						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_10;
					}
				}
				else if (a == 9 && b != 9)
				{
					if (mas_comp[a - 1][b] == 0 || mas_comp[a][b + 1] == 0 || mas_comp[a][b - 1] == 0
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 0)
						|| (mas_comp[a][b + 1] == 'X' && mas_comp[a][b + 2] == 'X' && mas_comp[a][b + 3] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();
						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_10;
					}

				}
				else if (b == 9 && a != 9)
				{
					if (mas_comp[a - 1][b] == 0 || mas_comp[a][b - 1] == 0 || mas_comp[a + 1][b] == 0
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 0)
						|| (mas_comp[a + 1][b] == 'X' && mas_comp[a + 2][b] == 'X' && mas_comp[a + 3][b] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();
						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_10;
					}

				}
				else if (b == 9 && a == 9)
				{
					if (mas_comp[a - 1][b] == 0 || mas_comp[a][b - 1] == 0 || mas_comp[a + 1][b] == 0
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 0)
						|| (mas_comp[a - 1][b] == 'X' && mas_comp[a - 2][b] == 'X' && mas_comp[a - 3][b] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 0)
						|| (mas_comp[a][b - 1] == 'X' && mas_comp[a][b - 2] == 'X' && mas_comp[a][b - 3] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "You hurt                                      " << endl;
						cout << "Press Enter                                   ";
						_getch();

						state_comp--;
						cant++;
						x = b * k + 5;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %      ";
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						cout << "                                                                                          ";
						goto exit_10;
					}

				}

			}


			{
				k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship sunk" << endl;
				cout << "Press Enter                                   ";
				_getch();

				state_comp--;
				cant++;
				x = b * k + 5;
				y = a + 5;
				gotoxy(x, y);
				SetColor(4);
				cout << 'X';
				SetColor(7);
				c = a;
				d = b;
				mas_comp[c][d] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_comp[c + 1][d] == 'X')
				{

					dir = true;
				}
				else if (mas_comp[c - 1][d] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (d != 0)
						{
							if (mas_comp[c][d - 1] == 1)
							{
								mas_comp[c][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_comp[c][d + 1] == 1)
							{
								mas_comp[c][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c + 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c + 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c + 2][d - 1] == 1)
									{
										mas_comp[c + 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c + 2][d + 1] == 1)
									{
										mas_comp[c + 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c + 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_comp[c + 3][d - 1] == 1)
										{
											mas_comp[c + 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_comp[c + 3][d + 1] == 1)
										{
											mas_comp[c + 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c + 4 < 10)
									{
										if (d != 0)
										{
											if (mas_comp[c + 4][d - 1] == 1)
											{
												mas_comp[c + 4][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c + 4][d] == 1)
										{
											mas_comp[c + 4][d] = '*';
											x = (d)*k + 5;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c + 4][d + 1] == 1)
											{
												mas_comp[c + 4][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d != 0)
									{
										if (c + 3 < 10)
										{
											if (mas_comp[c + 3][d - 1] == 1)
											{
												mas_comp[c + 3][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (c + 3 < 10)
									{
										if (mas_comp[c + 3][d] == 1)
										{
											mas_comp[c + 3][d] = '*';
											x = (d)*k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (d != 9)
									{
										if (c + 3 < 10)
										{
											if (mas_comp[c + 3][d + 1] == 1)
											{
												mas_comp[c + 3][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (c + 2 < 10)
								{
									if (d != 0)
									{
										if (mas_comp[c + 2][d - 1] == 1)
										{
											mas_comp[c + 2][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c + 2][d] == 1)
									{
										mas_comp[c + 2][d] = '*';
										x = (d)*k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c + 2][d + 1] == 1)
										{
											mas_comp[c + 2][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c + 1 < 10)
							{
								if (d != 0)
								{
									if (mas_comp[c + 1][d - 1] == 1)
									{
										mas_comp[c + 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (mas_comp[c + 1][d] == 1)
								{
									mas_comp[c + 1][d] = '*';
									x = (d)*k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}


								if (d != 9)
								{
									if (mas_comp[c + 1][d + 1] == 1)
									{
										mas_comp[c + 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_comp[c - 1][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (d != 9)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c - 2][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c - 2][d - 1] == 1)
									{
										mas_comp[c - 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c - 2][d + 1] == 1)
									{
										mas_comp[c - 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c - 3][d] == 'X')
								{
									if (d != 0)
									{
										if (mas_comp[c - 3][d - 1] == 1)
										{
											mas_comp[c - 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (d != 9)
									{
										if (mas_comp[c - 3][d + 1] == 1)
										{
											mas_comp[c - 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (c - 4 >= 0)
									{
										if (d != 0)
										{
											if (mas_comp[c - 4][d - 1] == 1)
											{
												mas_comp[c - 4][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c - 4][d] == 1)
										{
											mas_comp[c - 4][d] = '*';
											x = (d)*k + 5;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c - 4][d + 1] == 1)
											{
												mas_comp[c - 4][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (c - 3 >= 0)
									{
										if (d != 0)
										{
											if (mas_comp[c - 3][d - 1] == 1)
											{
												mas_comp[c - 3][d - 1] = '*';
												x = (d - 1) * k + 5;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_comp[c - 3][d] == 1)
										{
											mas_comp[c - 3][d] = '*';
											x = (d)*k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (d != 9)
										{
											if (mas_comp[c - 3][d + 1] == 1)
											{
												mas_comp[c - 3][d + 1] = '*';
												x = (d + 1) * k + 5;
												y = (c - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (c - 2 >= 0)
								{
									if (d != 0)
									{
										if (mas_comp[c - 2][d - 1] == 1)
										{
											mas_comp[c - 2][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c - 2][d] == 1)
									{
										mas_comp[c - 2][d] = '*';
										x = (d)*k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c - 2][d + 1] == 1)
										{
											mas_comp[c - 2][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c - 1 >= 0)
							{
								if (d != 0)
								{
									if (mas_comp[c - 1][d - 1] == 1)
									{
										mas_comp[c - 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c - 1][d] == 1)
								{
									mas_comp[c - 1][d] = '*';
									x = (d)*k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}


								if (d != 9)
								{
									if (mas_comp[c - 1][d + 1] == 1)
									{
										mas_comp[c - 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (c != 0)
						{
							if (mas_comp[c - 1][d] == 1)
							{
								mas_comp[c - 1][d] = '*';
								x = (d)*k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_comp[c + 1][d] == 1)
							{
								mas_comp[c + 1][d] = '*';
								x = (d)*k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}

						if (mas_comp[c][d + 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d + 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 2] == 1)
									{
										mas_comp[c - 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d + 2] == 1)
									{
										mas_comp[c + 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c][d + 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 3] == 1)
										{
											mas_comp[c - 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_comp[c + 1][d + 3] == 1)
										{
											mas_comp[c + 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d + 4 < 10)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d + 4] == 1)
											{
												mas_comp[c - 1][d + 4] = '*';
												x = (d + 4) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d + 4] == 1)
										{
											mas_comp[c][d + 4] = '*';
											x = (d + 4) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d + 4] == 1)
											{
												mas_comp[c + 1][d + 4] = '*';
												x = (d + 4) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (d + 3 < 10)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d + 3] == 1)
											{
												mas_comp[c - 1][d + 3] = '*';
												x = (d + 3) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d + 3] == 1)
										{
											mas_comp[c][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d + 3] == 1)
											{
												mas_comp[c + 1][d + 3] = '*';
												x = (d + 3) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (d + 2 < 10)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 2] == 1)
										{
											mas_comp[c - 1][d + 2] = '*';
											x = (d + 2) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d + 2] == 1)
									{
										mas_comp[c][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d + 2] == 1)
										{
											mas_comp[c + 1][d + 2] = '*';
											x = (d + 2) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d + 1 < 10)
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 1] == 1)
									{
										mas_comp[c - 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c][d + 1] == 1)
								{
									mas_comp[c][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}


								if (c != 9)
								{
									if (mas_comp[c + 1][d + 1] == 1)
									{
										mas_comp[c + 1][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_comp[c][d - 1] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (c != 9)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d - 2] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 2] == 1)
									{
										mas_comp[c - 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d - 2] == 1)
									{
										mas_comp[c + 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_comp[c][d - 3] == 'X')
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 3] == 1)
										{
											mas_comp[c - 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (c != 9)
									{
										if (mas_comp[c + 1][d - 3] == 1)
										{
											mas_comp[c + 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (d - 4 >= 0)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d - 4] == 1)
											{
												mas_comp[c - 1][d - 4] = '*';
												x = (d - 4) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_comp[c][d - 4] == 1)
										{
											mas_comp[c][d - 4] = '*';
											x = (d - 4) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d - 4] == 1)
											{
												mas_comp[c + 1][d - 4] = '*';
												x = (d - 4) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (d - 3 >= 0)
									{
										if (c != 0)
										{
											if (mas_comp[c - 1][d - 3] == 1)
											{
												mas_comp[c - 1][d - 3] = '*';
												x = (d - 3) * k + 5;
												y = (c - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_comp[c][d - 3] == 1)
										{
											mas_comp[c][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (c != 9)
										{
											if (mas_comp[c + 1][d - 3] == 1)
											{
												mas_comp[c + 1][d - 3] = '*';
												x = (d - 3) * k + 5;
												y = (c + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (d - 2 >= 0)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 2] == 1)
										{
											mas_comp[c - 1][d - 2] = '*';
											x = (d - 2) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d - 2] == 1)
									{
										mas_comp[c][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d - 2] == 1)
										{
											mas_comp[c + 1][d - 2] = '*';
											x = (d - 2) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d - 1 >= 0)
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 1] == 1)
									{
										mas_comp[c - 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (mas_comp[c][d - 1] == 1)
								{
									mas_comp[c][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}


								if (c != 9)
								{
									if (mas_comp[c + 1][d - 1] == 1)
									{
										mas_comp[c + 1][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}


				x = 5, y = 26;
				gotoxy(x, y);
				cout << "                                                                                          ";
				cout << "                                                                                          ";
				cout << "                                                                                          ";
				cout << "                                                                                          ";
				cout << "                                                                                          ";

				x = 60, y = 22;
				gotoxy(x, y);
				state_comp_total = double(state_comp) / 20 * 100;
				cout << state_comp_total << " %      ";
				cant = 0;
				if (!state_comp)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "You WIN!!!! Congratulations!!!"<<endl;
					cout << "Press Enter";
					_getch();
					break;

				}

				goto exit_10;

			}
		}
		else
		{
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "You missed                                                                            " << endl;
			cout << "Press Enter                                                                           ";
			_getch();
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";
			cout << "                                                                                          ";


			x = b * k + 5;
			y = a + 5;
			gotoxy(x, y);
			cout << '*';
			mas_comp[a][b] = '*';

		}


		if (!i)
		{

			m++;
			goto exit_13;
		}

		/*else
		{
			goto exit_12;
		}*/


	}

}


void intelectual_shoot_comp_comp(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp)
{
	
	double state_play_total;
	double state_comp_total;
	int x, y, k = 0, a, b, size, keys;
	int count1;
	int count2;
	int count3;
	int count4;
	int cant = 0;
	int m = 0;
	int r = 0;
	int c, d;
	bool i = true;
	bool p = true;
	int temp1, temp2, temp3, temp4;
	exit777:
	while (state_comp != 0 || state_play != 0)
	{
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "\nIf you want to EXIT Press 5. Another digit to continue                     ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		cout << "\n                                                                           ";
		int g;
		x = 5, y = 26;
		gotoxy(x, y);
		cin >> g;
		if (g == 5)
		{
			state_comp = 0;
			state_play = 0;
			goto exit777;
		}
	
	exit_12:
		x = 5, y = 26;
		gotoxy(x, y);

		cout << "Computer1 move                                                           ";
		cout << "\nPress Enter                                                            ";
		cout << "                                                                         ";
		cout << "                                                                         ";
		_getch();
		a = rand() % 10;
		b = rand() % 10;
		if (mas_play[a][b] == '*' || mas_play[a][b] == 'X')
		{
			goto exit_12;
		}
		temp3 = a;
		temp4 = b;
	exit_13:
		if (!i)
		{

			switch (m)
			{

			case 0:
			{
				a++;

				break;
			}
			case 1:
			{
				a--;
				break;

			}
			case 2:
			{
				b++;
				break;

			}
			case 3:
			{
				b--;
				break;

			}
			}
			if (a < 0 || a>9 || b < 0 || b>9)
			{
				m++;
				a = temp3;
				b = temp4;
				goto exit_13;
			}
			if (mas_play[a][b] == '*')
			{
				m++;
				a = temp3;
				b = temp4;
				goto exit_13;
			}
		}



		if (mas_play[a][b] == 0)
		{
			if (!a)
			{
				if (!b)
				{
					if (mas_play[a + 1][b] == 0 || mas_play[a][b + 1] == 0
						|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 0)
						|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 'X' && mas_play[a][b + 3] == 0)
						|| (mas_play[a + 1][b] == 'X' && mas_play[a + 2][b] == 0)
						|| (mas_play[a + 1][b] == 'X' && mas_play[a + 2][b] == 'X' && mas_play[a + 3][b] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = b * k + 55;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[a][b] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}


				}
				else

				{
					if (b != 9)
					{
						if (mas_play[a + 1][b] == 0 || mas_play[a][b + 1] == 0 || mas_play[a][b - 1] == 0
							|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 0)
							|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 'X' && mas_play[a][b - 3] == 0)
							|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 0)
							|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 'X' && mas_play[a][b + 3] == 0))

						{

							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer1 hurt                                                           ";
							cout << "\nPress Enter                                                            ";
							cout << "                                                                         ";
							cout << "                                                                         ";
							_getch();
							state_play--;
							cant++;
							x = b * k + 55;
							y = a + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[a][b] = 'X';
							i = false;
							x = 60, y = 22;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_13;
						}
					}
					else
					{
						if (mas_play[a + 1][b] == 0 || (mas_play[a][b - 1] == 0)
							|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 0)
							|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 'X' && mas_play[a][b - 3] == 0))
						{


							k = 3;
							x = 5, y = 26;
							gotoxy(x, y);
							cout << "Computer1 hurt                                                           ";
							cout << "\nPress Enter                                                            ";
							cout << "                                                                         ";
							cout << "                                                                         ";
							_getch();
							state_play--;
							cant++;
							x = b * k + 55;
							y = a + 5;
							gotoxy(x, y);
							SetColor(4);
							cout << 'X';
							SetColor(7);
							mas_play[a][b] = 'X';
							i = false;
							x = 60, y = 22;
							gotoxy(x, y);
							state_play_total = double(state_play) / 20 * 100;
							cout << state_play_total << " %    ";
							goto exit_13;
						}
					}

				}

			}
			else
			{
				if (a != 9 && b != 9)
				{
					if (mas_play[a + 1][b] == 0 || mas_play[a - 1][b] == 0 || mas_play[a][b + 1] == 0 || mas_play[a][b - 1] == 0
						|| (mas_play[a + 1][b] == 'X' && mas_play[a + 2][b] == 0)
						|| (mas_play[a + 1][b] == 'X' && mas_play[a + 2][b] == 'X' && mas_play[a + 3][b] == 0)
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 0)
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 'X' && mas_play[a - 3][b] == 0)
						|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 0)
						|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 'X' && mas_play[a][b + 3] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 'X' && mas_play[a][b - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = b * k + 55;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[a][b] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}
				}
				else if (a == 9 && b != 9)
				{
					if (mas_play[a - 1][b] == 0 || mas_play[a][b + 1] == 0 || mas_play[a][b - 1] == 0
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 0)
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 'X' && mas_play[a - 3][b] == 0)
						|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 0)
						|| (mas_play[a][b + 1] == 'X' && mas_play[a][b + 2] == 'X' && mas_play[a][b + 3] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 'X' && mas_play[a][b - 3] == 0)
						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = b * k + 55;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[a][b] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}

				}
				else if (b == 9 && a != 9)
				{
					if (mas_play[a - 1][b] == 0 || mas_play[a][b - 1] == 0 || mas_play[a + 1][b] == 0
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 0)
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 'X' && mas_play[a - 3][b] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 'X' && mas_play[a][b - 3] == 0)
						|| (mas_play[a + 1][b] == 'X' && mas_play[a + 2][b] == 0)
						|| (mas_play[a + 1][b] == 'X' && mas_play[a + 2][b] == 'X' && mas_play[a + 3][b] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y); 
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = b * k + 55;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[a][b] = 'X';
						i = false;
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";
						goto exit_13;
					}

				}
				else if (b == 9 && a == 9)
				{
					if (mas_play[a - 1][b] == 0 || mas_play[a][b - 1] == 0 || mas_play[a + 1][b] == 0
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 0)
						|| (mas_play[a - 1][b] == 'X' && mas_play[a - 2][b] == 'X' && mas_play[a - 3][b] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 0)
						|| (mas_play[a][b - 1] == 'X' && mas_play[a][b - 2] == 'X' && mas_play[a][b - 3] == 0)

						)
					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer1 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_play--;
						cant++;
						x = b * k + 55;
						y = a + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_play[a][b] = 'X';
						x = 60, y = 22;
						gotoxy(x, y);
						state_play_total = double(state_play) / 20 * 100;
						cout << state_play_total << " %    ";

						i = false;
						goto exit_13;
					}

				}

			}


			{
				k = 3;
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Ship sunk                                                                ";
				cout << "\nPress Enter                                                            ";
				cout << "                                                                         ";
				cout << "                                                                         ";
				_getch();
				state_play--;
				cant++;
				x = b * k + 55;
				y = a + 5;
				gotoxy(x, y);
				SetColor(4);
				cout << 'X';
				SetColor(7);
				mas_play[a][b] = 'X';
				bool dir = false;
				bool stop = false;
				bool stop1 = false;
				if (mas_play[a + 1][b] == 'X')
				{

					dir = true;
				}
				else if (mas_play[a - 1][b] == 'X')
				{
					dir = true;
				}
				if (dir)
				{
					while (!stop)
					{
						if (b != 0)
						{
							if (mas_play[a][b - 1] == 1)
							{
								mas_play[a][b - 1] = '*';
								x = (b - 1) * k + 55;
								y = (a)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (b != 9)
						{
							if (mas_play[a][b + 1] == 1)
							{
								mas_play[a][b + 1] = '*';
								x = (b + 1) * k + 55;
								y = (a)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_play[a + 1][b] == 'X')
						{
							if (b != 0)
							{
								if (mas_play[a + 1][b - 1] == 1)
								{
									mas_play[a + 1][b - 1] = '*';
									x = (b - 1) * k + 55;
									y = (a + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (b != 9)
							{
								if (mas_play[a + 1][b + 1] == 1)
								{
									mas_play[a + 1][b + 1] = '*';
									x = (b + 1) * k + 55;
									y = (a + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[a + 2][b] == 'X')
							{
								if (b != 0)
								{
									if (mas_play[a + 2][b - 1] == 1)
									{
										mas_play[a + 2][b - 1] = '*';
										x = (b - 1) * k + 55;
										y = (a + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (b != 9)
								{
									if (mas_play[a + 2][b + 1] == 1)
									{
										mas_play[a + 2][b + 1] = '*';
										x = (b + 1) * k + 55;
										y = (a + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[a + 3][b] == 'X')
								{
									if (b != 0)
									{
										if (mas_play[a + 3][b - 1] == 1)
										{
											mas_play[a + 3][b - 1] = '*';
											x = (b - 1) * k + 55;
											y = (a + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (b != 9)
									{
										if (mas_play[a + 3][b + 1] == 1)
										{
											mas_play[a + 3][b + 1] = '*';
											x = (b + 1) * k + 55;
											y = (a + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (a + 4 < 10)
									{
										if (b != 0)
										{
											if (mas_play[a + 4][b - 1] == 1)
											{
												mas_play[a + 4][b - 1] = '*';
												x = (b - 1) * k + 55;
												y = (a + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[a + 4][b] == 1)
										{
											mas_play[a + 4][b] = '*';
											x = (b)*k + 55;
											y = (a + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (b != 9)
										{
											if (mas_play[a + 4][b + 1] == 1)
											{
												mas_play[a + 4][b + 1] = '*';
												x = (b + 1) * k + 55;
												y = (a + 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (b != 0)
									{
										if (a + 3 < 10)
										{
											if (mas_play[a + 3][b - 1] == 1)
											{
												mas_play[a + 3][b - 1] = '*';
												x = (b - 1) * k + 55;
												y = (a + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (a + 3 < 10)
									{
										if (mas_play[a + 3][b] == 1)
										{
											mas_play[a + 3][b] = '*';
											x = (b)*k + 55;
											y = (a + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (b != 9)
									{
										if (a + 3 < 10)
										{
											if (mas_play[a + 3][b + 1] == 1)
											{
												mas_play[a + 3][b + 1] = '*';
												x = (b + 1) * k + 55;
												y = (a + 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (b != 0)
								{
									if (a + 2 <= 9)
									{
										if (mas_play[a + 2][b - 1] == 1)
										{
											mas_play[a + 2][b - 1] = '*';
											x = (b - 1) * k + 55;
											y = (a + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (a + 2 <= 9)
								{
									if (mas_play[a + 2][b] == 1)
									{
										mas_play[a + 2][b] = '*';
										x = (b)*k + 55;
										y = (a + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (b != 9)
								{
									if (a + 2 <= 9)
									{
										if (mas_play[a + 2][b + 1] == 1)
										{
											mas_play[a + 2][b + 1] = '*';
											x = (b + 1) * k + 55;
											y = (a + 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (b != 0)
							{
								if (a + 1 <= 9)
								{
									if (mas_play[a + 1][b - 1] == 1)
									{
										mas_play[a + 1][b - 1] = '*';
										x = (b - 1) * k + 55;
										y = (a + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}

							if (a + 1 <= 9)
							{
								if (mas_play[a + 1][b] == 1)
								{
									mas_play[a + 1][b] = '*';
									x = (b)*k + 55;
									y = (a + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (b != 9)
							{
								if (a + 1 <= 9)
								{
									if (mas_play[a + 1][b + 1] == 1)
									{
										mas_play[a + 1][b + 1] = '*';
										x = (b + 1) * k + 55;
										y = (a + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[a - 1][b] == 'X')
						{
							if (b != 0)
							{
								if (mas_play[a - 1][b - 1] == 1)
								{
									mas_play[a - 1][b - 1] = '*';
									x = (b - 1) * k + 55;
									y = (a - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (b != 9)
							{
								if (mas_play[a - 1][b + 1] == 1)
								{
									mas_play[a - 1][b + 1] = '*';
									x = (b + 1) * k + 55;
									y = (a - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[a - 2][b] == 'X')
							{
								if (b != 0)
								{
									if (mas_play[a - 2][b - 1] == 1)
									{
										mas_play[a - 2][b - 1] = '*';
										x = (b - 1) * k + 55;
										y = (a - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (b != 9)
								{
									if (mas_play[a - 2][b + 1] == 1)
									{
										mas_play[a - 2][b + 1] = '*';
										x = (b + 1) * k + 55;
										y = (a - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[a - 3][b] == 'X')
								{
									if (b != 0)
									{
										if (mas_play[a - 3][b - 1] == 1)
										{
											mas_play[a - 3][b - 1] = '*';
											x = (b - 1) * k + 55;
											y = (a - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (b != 9)
									{
										if (mas_play[a - 3][b + 1] == 1)
										{
											mas_play[a - 3][b + 1] = '*';
											x = (b + 1) * k + 55;
											y = (a - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (a - 4 >= 0)
									{
										if (b != 0)
										{
											if (mas_play[a - 4][b - 1] == 1)
											{
												mas_play[a - 4][b - 1] = '*';
												x = (b - 1) * k + 55;
												y = (a - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}


										if (mas_play[a - 4][b] == 1)
										{
											mas_play[a - 4][b] = '*';
											x = (b)*k + 55;
											y = (a - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}


										if (b != 9)
										{
											if (mas_play[a - 4][b + 1] == 1)
											{
												mas_play[a - 4][b + 1] = '*';
												x = (b + 1) * k + 55;
												y = (a - 4) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (b != 0)
									{
										if (a - 3 >= 0)
										{
											if (mas_play[a - 3][b - 1] == 1)
											{
												mas_play[a - 3][b - 1] = '*';
												x = (b - 1) * k + 55;
												y = (a - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}

									if (a - 3 >= 0)
									{
										if (mas_play[a - 3][b] == 1)
										{
											mas_play[a - 3][b] = '*';
											x = (b)*k + 55;
											y = (a - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (b != 9)
									{
										if (a - 3 >= 0)
										{
											if (mas_play[a - 3][b + 1] == 1)
											{
												mas_play[a - 3][b + 1] = '*';
												x = (b + 1) * k + 55;
												y = (a - 3) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (b != 0)
								{
									if (a - 2 >= 0)
									{
										if (mas_play[a - 2][b - 1] == 1)
										{
											mas_play[a - 2][b - 1] = '*';
											x = (b - 1) * k + 55;
											y = (a - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (a - 2 >= 0)
								{
									if (mas_play[a - 2][b] == 1)
									{
										mas_play[a - 2][b] = '*';
										x = (b)*k + 55;
										y = (a - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (b != 9)
								{
									if (a - 2 >= 0)
									{
										if (mas_play[a - 2][b + 1] == 1)
										{
											mas_play[a - 2][b + 1] = '*';
											x = (b + 1) * k + 55;
											y = (a - 2) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (b != 0)
							{
								if (a - 1 >= 0)
								{
									if (mas_play[a - 1][b - 1] == 1)
									{
										mas_play[a - 1][b - 1] = '*';
										x = (b - 1) * k + 55;
										y = (a - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (a - 1 >= 0)
							{
								if (mas_play[a - 1][b] == 1)
								{
									mas_play[a - 1][b] = '*';
									x = (b)*k + 55;
									y = (a - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (b != 9)
							{
								if (a - 1 >= 0)
								{
									if (mas_play[a - 1][b + 1] == 1)
									{
										mas_play[a - 1][b + 1] = '*';
										x = (b + 1) * k + 55;
										y = (a - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}



				else
				{
					while (!stop)
					{
						if (a != 0)
						{
							if (mas_play[a - 1][b] == 1)
							{
								mas_play[a - 1][b] = '*';
								x = (b)*k + 55;
								y = (a - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (a != 9)
						{
							if (mas_play[a + 1][b] == 1)
							{
								mas_play[a + 1][b] = '*';
								x = (b)*k + 55;
								y = (a + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}

						if (mas_play[a][b + 1] == 'X')
						{
							if (a != 0)
							{
								if (mas_play[a - 1][b + 1] == 1)
								{
									mas_play[a - 1][b + 1] = '*';
									x = (b + 1) * k + 55;
									y = (a - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (a != 9)
							{
								if (mas_play[a + 1][b + 1] == 1)
								{
									mas_play[a + 1][b + 1] = '*';
									x = (b + 1) * k + 55;
									y = (a + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[a][b + 2] == 'X')
							{
								if (a != 0)
								{
									if (mas_play[a - 1][b + 2] == 1)
									{
										mas_play[a - 1][b + 2] = '*';
										x = (b + 2) * k + 55;
										y = (a - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (a != 9)
								{
									if (mas_play[a + 1][b + 2] == 1)
									{
										mas_play[a + 1][b + 2] = '*';
										x = (b + 2) * k + 55;
										y = (a + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[a][b + 3] == 'X')
								{
									if (a != 0)
									{
										if (mas_play[a - 1][b + 3] == 1)
										{
											mas_play[a - 1][b + 3] = '*';
											x = (b + 3) * k + 55;
											y = (a - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (a != 9)
									{
										if (mas_play[a + 1][b + 3] == 1)
										{
											mas_play[a + 1][b + 3] = '*';
											x = (b + 3) * k + 55;
											y = (a + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (b + 4 < 10)
									{
										if (a != 0)
										{
											if (mas_play[a - 1][b + 4] == 1)
											{
												mas_play[a - 1][b + 4] = '*';
												x = (b + 4) * k + 55;
												y = (a - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}

										if (mas_play[a][b + 4] == 1)
										{
											mas_play[a][b + 4] = '*';
											x = (b + 4) * k + 55;
											y = (a)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (a != 9)
										{
											if (mas_play[a + 1][b + 4] == 1)
											{
												mas_play[a + 1][b + 4] = '*';
												x = (b + 4) * k + 55;
												y = (a + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;

								}
								else
								{
									if (a != 0)
									{
										if (b + 3 < 10)
										{
											if (mas_play[a - 1][b + 3] == 1)
											{
												mas_play[a - 1][b + 3] = '*';
												x = (b + 3) * k + 55;
												y = (a - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (b + 3 < 10)
									{
										if (mas_play[a][b + 3] == 1)
										{
											mas_play[a][b + 3] = '*';
											x = (b + 3) * k + 55;
											y = (a)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (a != 9)
									{
										if (b + 3 < 10)
										{
											if (mas_play[a + 1][b + 3] == 1)
											{
												mas_play[a + 1][b + 3] = '*';
												x = (b + 3) * k + 55;
												y = (a + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop = true;
									break;
								}

							}
							else
							{
								if (a != 0)
								{
									if (b + 2 < 10)
									{
										if (mas_play[a - 1][b + 2] == 1)
										{
											mas_play[a - 1][b + 2] = '*';
											x = (b + 2) * k + 55;
											y = (a - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (b + 2 < 10)
								{
									if (mas_play[a][b + 2] == 1)
									{
										mas_play[a][b + 2] = '*';
										x = (b + 2) * k + 55;
										y = (a)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (a != 9)
								{
									if (b + 2 < 10)
									{
										if (mas_play[a + 1][b + 2] == 1)
										{
											mas_play[a + 1][b + 2] = '*';
											x = (b + 2) * k + 55;
											y = (a + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (a != 0)
							{
								if (b + 1 < 10)
								{
									if (mas_play[a - 1][b + 1] == 1)
									{
										mas_play[a - 1][b + 1] = '*';
										x = (b + 1) * k + 55;
										y = (a - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (b + 1 < 10)
							{
								if (mas_play[a][b + 1] == 1)
								{
									mas_play[a][b + 1] = '*';
									x = (b + 1) * k + 55;
									y = (a)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (a != 9)
							{
								if (b + 1 < 10)
								{
									if (mas_play[a + 1][b + 1] == 1)
									{
										mas_play[a + 1][b + 1] = '*';
										x = (b + 1) * k + 55;
										y = (a + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}
					}

					while (!stop1)
					{

						if (mas_play[a][b - 1] == 'X')
						{
							if (a != 0)
							{
								if (mas_play[a - 1][b - 1] == 1)
								{
									mas_play[a - 1][b - 1] = '*';
									x = (b - 1) * k + 55;
									y = (a - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (a != 9)
							{
								if (mas_play[a + 1][b - 1] == 1)
								{
									mas_play[a + 1][b - 1] = '*';
									x = (b - 1) * k + 55;
									y = (a + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_play[a][b - 2] == 'X')
							{
								if (a != 0)
								{
									if (mas_play[a - 1][b - 2] == 1)
									{
										mas_play[a - 1][b - 2] = '*';
										x = (b - 2) * k + 55;
										y = (a - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (a != 9)
								{
									if (mas_play[a + 1][b - 2] == 1)
									{
										mas_play[a + 1][b - 2] = '*';
										x = (b - 2) * k + 55;
										y = (a + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (mas_play[a][b - 3] == 'X')
								{
									if (a != 0)
									{
										if (mas_play[a - 1][b - 3] == 1)
										{
											mas_play[a - 1][b - 3] = '*';
											x = (b - 3) * k + 55;
											y = (a - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (a != 9)
									{
										if (mas_play[a + 1][b - 3] == 1)
										{
											mas_play[a + 1][b - 3] = '*';
											x = (b - 3) * k + 55;
											y = (a + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (b - 4 >= 0)
									{
										if (a != 0)
										{
											if (mas_play[a - 1][b - 4] == 1)
											{
												mas_play[a - 1][b - 4] = '*';
												x = (b - 4) * k + 55;
												y = (a - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
										if (mas_play[a][b - 4] == 1)
										{
											mas_play[a][b - 4] = '*';
											x = (b - 4) * k + 55;
											y = (a)+5;
											gotoxy(x, y);
											cout << '*';
										}


										if (a != 9)
										{
											if (mas_play[a + 1][b - 4] == 1)
											{
												mas_play[a + 1][b - 4] = '*';
												x = (b - 4) * k + 55;
												y = (a + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;

								}
								else
								{
									if (a != 0)
									{
										if (b - 3 >= 0)
										{
											if (mas_play[a - 1][b - 3] == 1)
											{
												mas_play[a - 1][b - 3] = '*';
												x = (b - 3) * k + 55;
												y = (a - 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									if (b - 3 >= 0)
									{
										if (mas_play[a][b - 3] == 1)
										{
											mas_play[a][b - 3] = '*';
											x = (b - 3) * k + 55;
											y = (a)+5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (a != 9)
									{
										if (b - 3 >= 0)
										{
											if (mas_play[a + 1][b - 3] == 1)
											{
												mas_play[a + 1][b - 3] = '*';
												x = (b - 3) * k + 55;
												y = (a + 1) + 5;
												gotoxy(x, y);
												cout << '*';
											}
										}
									}
									stop1 = true;
									break;
								}

							}
							else
							{
								if (a != 0)
								{
									if (b - 2 >= 0)
									{
										if (mas_play[a - 1][b - 2] == 1)
										{
											mas_play[a - 1][b - 2] = '*';
											x = (b - 2) * k + 55;
											y = (a - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (b - 2 >= 0)
								{
									if (mas_play[a][b - 2] == 1)
									{
										mas_play[a][b - 2] = '*';
										x = (b - 2) * k + 55;
										y = (a)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (a != 9)
								{
									if (b - 2 >= 0)
									{
										if (mas_play[a + 1][b - 2] == 1)
										{
											mas_play[a + 1][b - 2] = '*';
											x = (b - 2) * k + 55;
											y = (a + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (a != 0)
							{
								if (b - 1 >= 0)
								{
									if (mas_play[a - 1][b - 1] == 1)
									{
										mas_play[a - 1][b - 1] = '*';
										x = (b - 1) * k + 55;
										y = (a - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

							}


							if (b - 1 >= 0)
							{
								if (mas_play[a][b - 1] == 1)
								{
									mas_play[a][b - 1] = '*';
									x = (b - 1) * k + 55;
									y = (a)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (a != 9)
							{
								if (b - 1 >= 0)
								{
									if (mas_play[a + 1][b - 1] == 1)
									{
										mas_play[a + 1][b - 1] = '*';
										x = (b - 1) * k + 55;
										y = (a + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}
					}
				}


				x = 60, y = 22;
				gotoxy(x, y);
				state_play_total = double(state_play) / 20 * 100;
				cout << state_play_total << " %    ";
				m = 0;
				i = true;
				if (!state_play)
				{
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer1 WIN!!!! Congratulations!!!" << endl;
					cout << "Press Enter";
					_getch();
					break;

				}

				goto exit_12;

			}
		}
		else
		{
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "Computer1 missed                                                         ";
			cout << "\nPress Enter                                                            ";
			cout << "                                                                         ";
			cout << "                                                                         ";
			_getch();
			x = b * k + 55;
			y = a + 5;
			gotoxy(x, y);
			cout << '*';
			mas_play[a][b] = '*';
			a = temp3;
			b = temp4;
			
			if (!i)
			{
				m++;
			}
			if (!p)
			{
				goto exit_133;
			}
		
		}

	p=true;
	exit_122:
	x = 5, y = 26;
	gotoxy(x, y);
	if (!p)
	{
		r = 0;
	}
	p = true;
	cout << "Computer2 move                                                           ";
	cout << "\nPress Enter                                                            ";
	cout << "                                                                         ";
	cout << "                                                                         ";
	_getch();

	c = rand() % 10;
	d = rand() % 10;
	if (mas_comp[c][d] == '*' || mas_comp[c][d] == 'X')
	{
		goto exit_122;
	}
	temp1 = c;
	temp2 = d;
exit_133:
	if (!p)
	{

		switch (r)
		{

		case 0:
		{
			c++;

			break;
		}
		case 1:
		{
			c--;
			break;

		}
		case 2:
		{
			d++;
			break;

		}
		case 3:
		{
			d--;
			break;

		}
		}
		if (c < 0 || c>9 || d < 0 || d>9)
		{
			r++;
			c = temp1;
			d = temp2;
			goto exit_133;
		}
		if (mas_comp[c][d] == '*')
		{
			r++;
			c = temp1;
			d = temp2;
			goto exit_133;
		}
	}



	if (mas_comp[c][d] == 0)
	{
		if (!c)
		{
			if (!d)
			{
				if (mas_comp[c + 1][d] == 0 || mas_comp[c][d + 1] == 0
					|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
					|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0)
					|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 0)
					|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 'X' && mas_comp[c + 3][d] == 0))

				{

					k = 3;
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer2 hurt                                                           ";
					cout << "\nPress Enter                                                            ";
					cout << "                                                                         ";
					cout << "                                                                         ";
					_getch();
					state_comp--;
					cant++;
					x = d * k + 5;
					y = c + 5;
					gotoxy(x, y);
					SetColor(4);
					cout << 'X';
					SetColor(7);
					mas_comp[c][d] = 'X';
					p = false;
					x = 60, y = 21;
					gotoxy(x, y);
					state_comp_total = double(state_comp) / 20 * 100;
					cout << state_comp_total << " %    ";
					goto exit_133;
				}


			}
			else

			{
				if (d != 9)
				{
					if (mas_comp[c + 1][d] == 0 || mas_comp[c][d + 1] == 0 || mas_comp[c][d - 1] == 0
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
						|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0))

					{

						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						p = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_133;
					}
				}
				else
				{
					if (mas_comp[c + 1][d] == 0 || (mas_comp[c][d - 1] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
						|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0))
					{


						k = 3;
						x = 5, y = 26;
						gotoxy(x, y);
						cout << "Computer2 hurt                                                           ";
						cout << "\nPress Enter                                                            ";
						cout << "                                                                         ";
						cout << "                                                                         ";
						_getch();
						state_comp--;
						cant++;
						x = d * k + 5;
						y = c + 5;
						gotoxy(x, y);
						SetColor(4);
						cout << 'X';
						SetColor(7);
						mas_comp[c][d] = 'X';
						p = false;
						x = 60, y = 21;
						gotoxy(x, y);
						state_comp_total = double(state_comp) / 20 * 100;
						cout << state_comp_total << " %    ";
						goto exit_133;
					}
				}

			}

		}
		else
		{
			if (c != 9 && d != 9)
			{
				if (mas_comp[c + 1][d] == 0 || mas_comp[c - 1][d] == 0 || mas_comp[c][d + 1] == 0 || mas_comp[c][d - 1] == 0
					|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 0)
					|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 'X' && mas_comp[c + 3][d] == 0)
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
					|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
					|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
					)
				{

					k = 3;
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer2 hurt                                                           ";
					cout << "\nPress Enter                                                            ";
					cout << "                                                                         ";
					cout << "                                                                         ";
					_getch();
					state_comp--;
					cant++;
					x = d * k + 5;
					y = c + 5;
					gotoxy(x, y);
					SetColor(4);
					cout << 'X';
					SetColor(7);
					mas_comp[c][d] = 'X';
					p = false;
					x = 60, y = 21;
					gotoxy(x, y);
					state_comp_total = double(state_comp) / 20 * 100;
					cout << state_comp_total << " %    ";
					goto exit_133;
				}
			}
			else if (c == 9 && d != 9)
			{
				if (mas_comp[c - 1][d] == 0 || mas_comp[c][d + 1] == 0 || mas_comp[c][d - 1] == 0
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
					|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 0)
					|| (mas_comp[c][d + 1] == 'X' && mas_comp[c][d + 2] == 'X' && mas_comp[c][d + 3] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
					)
				{

					k = 3;
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer2 hurt                                                           ";
					cout << "\nPress Enter                                                            ";
					cout << "                                                                         ";
					cout << "                                                                         ";
					_getch();
					state_comp--;
					cant++;
					x = d * k + 5;
					y = c + 5;
					gotoxy(x, y);
					SetColor(4);
					cout << 'X';
					SetColor(7);
					mas_comp[c][d] = 'X';
					p = false;
					x = 60, y = 21;
					gotoxy(x, y);
					state_comp_total = double(state_comp) / 20 * 100;
					cout << state_comp_total << " %    ";
					goto exit_13;
				}

			}
			else if (d == 9 && c != 9)
			{
				if (mas_comp[c - 1][d] == 0 || mas_comp[c][d - 1] == 0 || mas_comp[c + 1][d] == 0
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)
					|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 0)
					|| (mas_comp[c + 1][d] == 'X' && mas_comp[c + 2][d] == 'X' && mas_comp[c + 3][d] == 0)

					)
				{

					k = 3;
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer2 hurt                                                           ";
					cout << "\nPress Enter                                                            ";
					cout << "                                                                         ";
					cout << "                                                                         ";
					_getch();
					state_comp--;
					cant++;
					x = d * k + 5;
					y = c + 5;
					gotoxy(x, y);
					SetColor(4);
					cout << 'X';
					SetColor(7);
					mas_comp[c][d] = 'X';
					p = false;
					x = 60, y = 21;
					gotoxy(x, y);
					state_comp_total = double(state_comp) / 20 * 100;
					cout << state_comp_total << " %    ";
					goto exit_13;
				}

			}
			else if (d == 9 && c == 9)
			{
				if (mas_comp[c - 1][d] == 0 || mas_comp[c][d - 1] == 0 || mas_comp[c + 1][d] == 0
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 0)
					|| (mas_comp[c - 1][d] == 'X' && mas_comp[c - 2][d] == 'X' && mas_comp[c - 3][d] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 0)
					|| (mas_comp[c][d - 1] == 'X' && mas_comp[c][d - 2] == 'X' && mas_comp[c][d - 3] == 0)

					)
				{

					k = 3;
					x = 5, y = 26;
					gotoxy(x, y);
					cout << "Computer2 hurt                                                           ";
					cout << "\nPress Enter                                                            ";
					cout << "                                                                         ";
					cout << "                                                                         ";
					_getch();
					state_comp--;
					cant++;
					x = d * k + 5;
					y = c + 5;
					gotoxy(x, y);
					SetColor(4);
					cout << 'X';
					SetColor(7);
					mas_comp[c][d] = 'X';
					x = 60, y = 21;
					gotoxy(x, y);
					state_comp_total = double(state_comp) / 20 * 100;
					cout << state_comp_total << " %    ";
					p = false;
					goto exit_133;
				}

			}

		}


		{
			k = 3;
			x = 5, y = 26;
			gotoxy(x, y);
			cout << "Ship sunk                                                                ";
			cout << "\nPress Enter                                                            ";
			cout << "                                                                         ";
			cout << "                                                                         ";
			_getch();
			state_comp--;
			cant++;
			x = d * k + 5;
			y = c + 5;
			gotoxy(x, y);
			SetColor(4);
			cout << 'X';
			SetColor(7);
			mas_comp[c][d] = 'X';
			bool dir = false;
			bool stop = false;
			bool stop1 = false;
			if (mas_comp[c + 1][d] == 'X')
			{

				dir = true;
			}
			else if (mas_comp[c - 1][d] == 'X')
			{
				dir = true;
			}
			if (dir)
			{
				while (!stop)
				{
					if (d != 0)
					{
						if (mas_comp[c][d - 1] == 1)
						{
							mas_comp[c][d - 1] = '*';
							x = (d - 1) * k + 5;
							y = (c)+5;
							gotoxy(x, y);
							cout << '*';
						}
					}
					if (d != 9)
					{
						if (mas_comp[c][d + 1] == 1)
						{
							mas_comp[c][d + 1] = '*';
							x = (d + 1) * k + 5;
							y = (c)+5;
							gotoxy(x, y);
							cout << '*';
						}
					}
					if (mas_comp[c + 1][d] == 'X')
					{
						if (d != 0)
						{
							if (mas_comp[c + 1][d - 1] == 1)
							{
								mas_comp[c + 1][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_comp[c + 1][d + 1] == 1)
							{
								mas_comp[c + 1][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c + 2][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c + 2][d - 1] == 1)
								{
									mas_comp[c + 2][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 2) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}

							if (d != 9)
							{
								if (mas_comp[c + 2][d + 1] == 1)
								{
									mas_comp[c + 2][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 2) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c + 3][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c + 3][d - 1] == 1)
									{
										mas_comp[c + 3][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 3) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c + 3][d + 1] == 1)
									{
										mas_comp[c + 3][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 3) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (c + 4 < 10)
								{
									if (d != 0)
									{
										if (mas_comp[c + 4][d - 1] == 1)
										{
											mas_comp[c + 4][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c + 4][d] == 1)
									{
										mas_comp[c + 4][d] = '*';
										x = (d)*k + 5;
										y = (c + 4) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c + 4][d + 1] == 1)
										{
											mas_comp[c + 4][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;

							}
							else
							{
								if (d != 0)
								{
									if (c + 3 < 10)
									{
										if (mas_comp[c + 3][d - 1] == 1)
										{
											mas_comp[c + 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c + 3 < 10)
								{
									if (mas_comp[c + 3][d] == 1)
									{
										mas_comp[c + 3][d] = '*';
										x = (d)*k + 5;
										y = (c + 3) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c + 3 < 10)
									{
										if (mas_comp[c + 3][d + 1] == 1)
										{
											mas_comp[c + 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c + 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c + 2 <= 9)
								{
									if (mas_comp[c + 2][d - 1] == 1)
									{
										mas_comp[c + 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}

							if (c + 2 <= 9)
							{
								if (mas_comp[c + 2][d] == 1)
								{
									mas_comp[c + 2][d] = '*';
									x = (d)*k + 5;
									y = (c + 2) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c + 2 <= 9)
								{
									if (mas_comp[c + 2][d + 1] == 1)
									{
										mas_comp[c + 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c + 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}

					}
					else
					{
						if (d != 0)
						{
							if (c + 1 <= 9)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}

						if (c + 1 <= 9)
						{
							if (mas_comp[c + 1][d] == 1)
							{
								mas_comp[c + 1][d] = '*';
								x = (d)*k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}


						if (d != 9)
						{
							if (c + 1 <= 9)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}
						stop = true;
						break;
					}
				}

				while (!stop1)
				{

					if (mas_comp[c - 1][d] == 'X')
					{
						if (d != 0)
						{
							if (mas_comp[c - 1][d - 1] == 1)
							{
								mas_comp[c - 1][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (d != 9)
						{
							if (mas_comp[c - 1][d + 1] == 1)
							{
								mas_comp[c - 1][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c - 2][d] == 'X')
						{
							if (d != 0)
							{
								if (mas_comp[c - 2][d - 1] == 1)
								{
									mas_comp[c - 2][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 2) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}

							if (d != 9)
							{
								if (mas_comp[c - 2][d + 1] == 1)
								{
									mas_comp[c - 2][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 2) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c - 3][d] == 'X')
							{
								if (d != 0)
								{
									if (mas_comp[c - 3][d - 1] == 1)
									{
										mas_comp[c - 3][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 3) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (d != 9)
								{
									if (mas_comp[c - 3][d + 1] == 1)
									{
										mas_comp[c - 3][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 3) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (c - 4 >= 0)
								{
									if (d != 0)
									{
										if (mas_comp[c - 4][d - 1] == 1)
										{
											mas_comp[c - 4][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}


									if (mas_comp[c - 4][d] == 1)
									{
										mas_comp[c - 4][d] = '*';
										x = (d)*k + 5;
										y = (c - 4) + 5;
										gotoxy(x, y);
										cout << '*';
									}


									if (d != 9)
									{
										if (mas_comp[c - 4][d + 1] == 1)
										{
											mas_comp[c - 4][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 4) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;

							}
							else
							{
								if (d != 0)
								{
									if (c - 3 >= 0)
									{
										if (mas_comp[c - 3][d - 1] == 1)
										{
											mas_comp[c - 3][d - 1] = '*';
											x = (d - 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}

								if (c - 3 >= 0)
								{
									if (mas_comp[c - 3][d] == 1)
									{
										mas_comp[c - 3][d] = '*';
										x = (d)*k + 5;
										y = (c - 3) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (d != 9)
								{
									if (c - 3 >= 0)
									{
										if (mas_comp[c - 3][d + 1] == 1)
										{
											mas_comp[c - 3][d + 1] = '*';
											x = (d + 1) * k + 5;
											y = (c - 3) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (d != 0)
							{
								if (c - 2 >= 0)
								{
									if (mas_comp[c - 2][d - 1] == 1)
									{
										mas_comp[c - 2][d - 1] = '*';
										x = (d - 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}

							if (c - 2 >= 0)
							{
								if (mas_comp[c - 2][d] == 1)
								{
									mas_comp[c - 2][d] = '*';
									x = (d)*k + 5;
									y = (c - 2) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (d != 9)
							{
								if (c - 2 >= 0)
								{
									if (mas_comp[c - 2][d + 1] == 1)
									{
										mas_comp[c - 2][d + 1] = '*';
										x = (d + 1) * k + 5;
										y = (c - 2) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}

					}
					else
					{
						if (d != 0)
						{
							if (c - 1 >= 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}
						if (c - 1 >= 0)
						{
							if (mas_comp[c - 1][d] == 1)
							{
								mas_comp[c - 1][d] = '*';
								x = (d)*k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}


						if (d != 9)
						{
							if (c - 1 >= 0)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}
						stop1 = true;
						break;
					}
				}
			}



			else
			{
				while (!stop)
				{
					if (c != 0)
					{
						if (mas_comp[c - 1][d] == 1)
						{
							mas_comp[c - 1][d] = '*';
							x = (d)*k + 5;
							y = (c - 1) + 5;
							gotoxy(x, y);
							cout << '*';
						}
					}
					if (c != 9)
					{
						if (mas_comp[c + 1][d] == 1)
						{
							mas_comp[c + 1][d] = '*';
							x = (d)*k + 5;
							y = (c + 1) + 5;
							gotoxy(x, y);
							cout << '*';
						}
					}

					if (mas_comp[c][d + 1] == 'X')
					{
						if (c != 0)
						{
							if (mas_comp[c - 1][d + 1] == 1)
							{
								mas_comp[c - 1][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_comp[c + 1][d + 1] == 1)
							{
								mas_comp[c + 1][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c][d + 2] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d + 2] == 1)
								{
									mas_comp[c - 1][d + 2] = '*';
									x = (d + 2) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}

							if (c != 9)
							{
								if (mas_comp[c + 1][d + 2] == 1)
								{
									mas_comp[c + 1][d + 2] = '*';
									x = (d + 2) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d + 3] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d + 3] == 1)
									{
										mas_comp[c - 1][d + 3] = '*';
										x = (d + 3) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d + 3] == 1)
									{
										mas_comp[c + 1][d + 3] = '*';
										x = (d + 3) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (d + 4 < 10)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d + 4] == 1)
										{
											mas_comp[c - 1][d + 4] = '*';
											x = (d + 4) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}

									if (mas_comp[c][d + 4] == 1)
									{
										mas_comp[c][d + 4] = '*';
										x = (d + 4) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d + 4] == 1)
										{
											mas_comp[c + 1][d + 4] = '*';
											x = (d + 4) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;

							}
							else
							{
								if (c != 0)
								{
									if (d + 3 < 10)
									{
										if (mas_comp[c - 1][d + 3] == 1)
										{
											mas_comp[c - 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d + 3 < 10)
								{
									if (mas_comp[c][d + 3] == 1)
									{
										mas_comp[c][d + 3] = '*';
										x = (d + 3) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d + 3 < 10)
									{
										if (mas_comp[c + 1][d + 3] == 1)
										{
											mas_comp[c + 1][d + 3] = '*';
											x = (d + 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d + 2 < 10)
								{
									if (mas_comp[c - 1][d + 2] == 1)
									{
										mas_comp[c - 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (d + 2 < 10)
							{
								if (mas_comp[c][d + 2] == 1)
								{
									mas_comp[c][d + 2] = '*';
									x = (d + 2) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d + 2 < 10)
								{
									if (mas_comp[c + 1][d + 2] == 1)
									{
										mas_comp[c + 1][d + 2] = '*';
										x = (d + 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop = true;
							break;
						}

					}
					else
					{
						if (c != 0)
						{
							if (d + 1 < 10)
							{
								if (mas_comp[c - 1][d + 1] == 1)
								{
									mas_comp[c - 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}
						if (d + 1 < 10)
						{
							if (mas_comp[c][d + 1] == 1)
							{
								mas_comp[c][d + 1] = '*';
								x = (d + 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}


						if (c != 9)
						{
							if (d + 1 < 10)
							{
								if (mas_comp[c + 1][d + 1] == 1)
								{
									mas_comp[c + 1][d + 1] = '*';
									x = (d + 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}
						stop = true;
						break;
					}
				}

				while (!stop1)
				{

					if (mas_comp[c][d - 1] == 'X')
					{
						if (c != 0)
						{
							if (mas_comp[c - 1][d - 1] == 1)
							{
								mas_comp[c - 1][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c - 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (c != 9)
						{
							if (mas_comp[c + 1][d - 1] == 1)
							{
								mas_comp[c + 1][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c + 1) + 5;
								gotoxy(x, y);
								cout << '*';
							}
						}
						if (mas_comp[c][d - 2] == 'X')
						{
							if (c != 0)
							{
								if (mas_comp[c - 1][d - 2] == 1)
								{
									mas_comp[c - 1][d - 2] = '*';
									x = (d - 2) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}

							if (c != 9)
							{
								if (mas_comp[c + 1][d - 2] == 1)
								{
									mas_comp[c + 1][d - 2] = '*';
									x = (d - 2) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
							if (mas_comp[c][d - 3] == 'X')
							{
								if (c != 0)
								{
									if (mas_comp[c - 1][d - 3] == 1)
									{
										mas_comp[c - 1][d - 3] = '*';
										x = (d - 3) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}

								if (c != 9)
								{
									if (mas_comp[c + 1][d - 3] == 1)
									{
										mas_comp[c + 1][d - 3] = '*';
										x = (d - 3) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
								if (d - 4 >= 0)
								{
									if (c != 0)
									{
										if (mas_comp[c - 1][d - 4] == 1)
										{
											mas_comp[c - 1][d - 4] = '*';
											x = (d - 4) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
									if (mas_comp[c][d - 4] == 1)
									{
										mas_comp[c][d - 4] = '*';
										x = (d - 4) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}


									if (c != 9)
									{
										if (mas_comp[c + 1][d - 4] == 1)
										{
											mas_comp[c + 1][d - 4] = '*';
											x = (d - 4) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;

							}
							else
							{
								if (c != 0)
								{
									if (d - 3 >= 0)
									{
										if (mas_comp[c - 1][d - 3] == 1)
										{
											mas_comp[c - 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c - 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								if (d - 3 >= 0)
								{
									if (mas_comp[c][d - 3] == 1)
									{
										mas_comp[c][d - 3] = '*';
										x = (d - 3) * k + 5;
										y = (c)+5;
										gotoxy(x, y);
										cout << '*';
									}
								}


								if (c != 9)
								{
									if (d - 3 >= 0)
									{
										if (mas_comp[c + 1][d - 3] == 1)
										{
											mas_comp[c + 1][d - 3] = '*';
											x = (d - 3) * k + 5;
											y = (c + 1) + 5;
											gotoxy(x, y);
											cout << '*';
										}
									}
								}
								stop1 = true;
								break;
							}

						}
						else
						{
							if (c != 0)
							{
								if (d - 2 >= 0)
								{
									if (mas_comp[c - 1][d - 2] == 1)
									{
										mas_comp[c - 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c - 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							if (d - 2 >= 0)
							{
								if (mas_comp[c][d - 2] == 1)
								{
									mas_comp[c][d - 2] = '*';
									x = (d - 2) * k + 5;
									y = (c)+5;
									gotoxy(x, y);
									cout << '*';
								}
							}


							if (c != 9)
							{
								if (d - 2 >= 0)
								{
									if (mas_comp[c + 1][d - 2] == 1)
									{
										mas_comp[c + 1][d - 2] = '*';
										x = (d - 2) * k + 5;
										y = (c + 1) + 5;
										gotoxy(x, y);
										cout << '*';
									}
								}
							}
							stop1 = true;
							break;
						}

					}
					else
					{
						if (c != 0)
						{
							if (d - 1 >= 0)
							{
								if (mas_comp[c - 1][d - 1] == 1)
								{
									mas_comp[c - 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c - 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}

						}


						if (d - 1 >= 0)
						{
							if (mas_comp[c][d - 1] == 1)
							{
								mas_comp[c][d - 1] = '*';
								x = (d - 1) * k + 5;
								y = (c)+5;
								gotoxy(x, y);
								cout << '*';
							}
						}


						if (c != 9)
						{
							if (d - 1 >= 0)
							{
								if (mas_comp[c + 1][d - 1] == 1)
								{
									mas_comp[c + 1][d - 1] = '*';
									x = (d - 1) * k + 5;
									y = (c + 1) + 5;
									gotoxy(x, y);
									cout << '*';
								}
							}
						}
						stop1 = true;
						break;
					}
				}
			}


			x = 60, y = 21;
			gotoxy(x, y);
			state_comp_total = double(state_comp) / 20 * 100;
			cout << state_comp_total << " %    ";
			r = 0;
			p = true;
			if (!state_comp)
			{
				x = 5, y = 26;
				gotoxy(x, y);
				cout << "Computer2 WIN!!!! Congratulations!!!" << endl;
				cout << "\nPress Enter";
				_getch();
				break;

			}

			goto exit_122;

		}
	}
	else
	{
		k = 3;
		x = 5, y = 26;
		gotoxy(x, y);
		cout << "Computer2 missed                                                         ";
		cout << "\nPress Enter";
		cout << "                                                                         ";
		_getch();
		x = d * k + 5;
		y = c + 5;
		gotoxy(x, y);
		cout << '*';
		mas_comp[c][d] = '*';
		c = temp1;
		d = temp2;
		if (!p)
		{
			r++;
		}

		if (!i)
		{
			
			goto exit_13;
		}
	
	}

	}

	

}


