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


int main()

{
	srand(time(NULL));
	setlocale(LC_CTYPE, " ");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	double state_play_total;
	double state_comp_total;
	int x, y, k, a, b, size, keys,tt=0;
	int count1;
	int count2;
	int count3;
	int count4;
	bool pp = true;
	int state_play = 20;
	int state_comp = 20;
	int mas_play[10][10] = { {1,1,1,1,1,1,1,1,1,1},{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1} ,
							 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},{1,1,1,1,1,1,1,1,1,1} ,{1,1,1,1,1,1,1,1,1,1} ,{1,1,1,1,1,1,1,1,1,1} ,{1,1,1,1,1,1,1,1,1,1} ,
							 {1,1,1,1,1,1,1,1,1,1} };

	int mas_comp[10][10] = { {1,1,1,1,1,1,1,1,1,1} ,{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1} ,
					  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},{1,1,1,1,1,1,1,1,1,1} ,{1,1,1,1,1,1,1,1,1,1} ,{1,1,1,1,1,1,1,1,1,1} ,{1,1,1,1,1,1,1,1,1,1} ,
					  {1,1,1,1,1,1,1,1,1,1} };

	k = 3;
exit2:
			
	     keys = 1;
	     int menu_order = 1, exit = 1;
	
		show_menu(1);
	
		while (exit)
		{

			switch ((keys = _getch()))
			{

			case KEY_UP:
				if (menu_order == 0)
				{
					menu_order = 1;
				}
				if (menu_order == 1)
				{
					menu_order = 4;
				}
				else menu_order--;
				show_menu(menu_order);
				break;
			case KEY_DOWN:
				if (menu_order == 4)
				{
					menu_order = 1;
				}
				else
					menu_order++;
				show_menu(menu_order);
				break;
			case KEY_ENTER:
				system("CLS");



				switch (menu_order)
				{

				case 1:
					show_menu2(1);
					keys = 1, menu_order = 1;
					while (exit)
					{

						switch ((keys = _getch()))
						{

						case KEY_UP:
							if (menu_order == 0)
							{
								menu_order = 1;
							}
							if (menu_order == 1)
							{
								menu_order = 3;
							}
							else menu_order--;
							show_menu2(menu_order);
							break;
						case KEY_DOWN:
							if (menu_order == 3)
							{
								menu_order = 1;
							}
							else
								menu_order++;
							show_menu2(menu_order);
							break;
						case KEY_ENTER:
							system("CLS");

							switch (menu_order)
							{
							case 1:
								show_menu3(1);
								keys = 1, menu_order = 1;
								while (exit)
								{

									switch ((keys = _getch()))
									{

									case KEY_UP:
										if (menu_order == 0)
										{
											menu_order = 1;
										}
										if (menu_order == 1)
										{
											menu_order = 3;
										}
										else menu_order--;
										show_menu3(menu_order);
										break;
									case KEY_DOWN:
										if (menu_order == 3)
										{
											menu_order = 1;
										}
										else
											menu_order++;
										show_menu3(menu_order);
										break;
									case KEY_ENTER:
										system("CLS");
										switch (menu_order)
										{
										case 1:
											show_menu4(1);
											keys = 1, menu_order = 1;
											while (exit)
											{

												switch ((keys = _getch()))
												{

												case KEY_UP:
													if (menu_order == 0)
													{
														menu_order = 1;
													}
													if (menu_order == 1)
													{
														menu_order = 3;
													}
													else menu_order--;
													show_menu4(menu_order);
													break;
												case KEY_DOWN:
													if (menu_order == 3)
													{
														menu_order = 1;
													}
													else
														menu_order++;
													show_menu4(menu_order);
													break;
												case KEY_ENTER:
													system("CLS");
													switch (menu_order)
													{

													case 1:

														k = 3;
														show_battlefield();

														spacing_of_ships_random_comp(mas_comp);
														count1 = 0;
														count2 = 0;
														count3 = 0;
														count4 = 0;
														while (count1 + count2 + count3 + count4 != 10)
														{
														exit1:
															x = 0, y = 28;
															gotoxy(x, y);
															cout << "Enter the number of the ROW to START Positioning of the Ship(0-9)" << endl;
															cin >> a;
															cout << "    ";
															x = 0, y = 28;
															gotoxy(x, y);
															cout << "Enter the number of the Colomn to START Positio of the Ship (0-9)" << endl;
															cin >> b;
															cout << "    ";
															x = 0, y = 28;
															gotoxy(x, y);
															cout << "Enter size of the SHIP you want to place                                           " << endl;
															cin >> size;
															cout << "    ";
															x = 0, y = 28;
															gotoxy(x, y);

															cout << "Enter direction UP,DOWN,LEFT,RIGHT                          " << endl;
															keys = 0;
															keys = _getch();

															bool t = check_spacing_of_ships(a, b, size, mas_play, keys);
															if (t)
															{
																goto exit1;
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
																x = 0, y = 48;
																gotoxy(x, y);
																cout << "You entered wrong size of the ship. It must be from 1 to 4 " << endl;
																goto exit1;
															}
															spacing_of_ships_manual(a, b, size, mas_play);

														}
														tt = 6;
													exit888_6:
														cout << setprecision(2) << fixed;
														if (!pp)
														{
															
															show_battlefield();
															spacing_of_ships_saved_player(mas_play, state_play);
															spacing_of_ships_saved_comp2(mas_comp, state_comp);
														}
														x = 60, y = 21;
														gotoxy(x, y);
														state_play_total = double(state_play) / 20 * 100;
														cout << state_play_total << " %";
														x = 60, y = 22;
														gotoxy(x, y);
														state_comp_total = double(state_comp) / 20 * 100;
														cout << state_comp_total << " %";
														random_shoot(mas_play, mas_comp, state_play, state_comp);
														goto exit2;


													case 2:
														k = 3;
														show_battlefield();
														spacing_of_ships_random_comp(mas_comp);
														count1 = 0;
														count2 = 0;
														count3 = 0;
														count4 = 0;
														while (count1 + count2 + count3 + count4 != 10)
														{
														exit3:
															x = 0, y = 28;
															gotoxy(x, y);
															cout << "Enter the number of the ROW to START Positioning of the Ship(0-9)" << endl;
															cin >> a;
															cout << "    ";
															x = 0, y = 28;
															gotoxy(x, y);
															cout << "Enter the number of the Colomn to START Positio of the Ship (0-9)" << endl;
															cin >> b;
															cout << "    ";
															x = 0, y = 28;
															gotoxy(x, y);
															cout << "Enter size of the SHIP you want to place                                           " << endl;
															cin >> size;
															cout << "    ";
															x = 0, y = 28;
															gotoxy(x, y);

															cout << "Enter direction UP,DOWN,LEFT,RIGHT                          " << endl;

															keys = 0;
															keys = _getch();

															{bool t = check_spacing_of_ships(a, b, size, mas_play, keys);
															if (t)
															{
																goto exit3;
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
																x = 0, y = 28;
																gotoxy(x, y);
																cout << "You entered wrong size of the ship. It must be from 1 to 4 " << endl;
																goto exit3;
															}

															spacing_of_ships_manual(a, b, size, mas_play);
															}
															tt = 5;
														exit888_5:
															cout << setprecision(2) << fixed;
															if (!pp)
															{
																show_battlefield();
																spacing_of_ships_saved_player(mas_play, state_play);
																spacing_of_ships_saved_comp2(mas_comp, state_comp);
															}
															x = 60, y = 21;
															gotoxy(x, y);
															state_play_total = double(state_play) / 20 * 100;
															cout << state_play_total << " %";
															x = 60, y = 22;
															gotoxy(x, y);
															state_comp_total = double(state_comp) / 20 * 100;
															cout << state_comp_total << " %";

														}
														intelectual_shoot(mas_play, mas_comp, state_play, state_comp);
														goto exit2;

													case 3:
														system("CLS");

														exit = 0;
														goto exit2;

													}
												}
											}


										case 2:
											show_menu4(1);
											keys = 1, menu_order = 1;
											while (exit)
											{

												switch ((keys = _getch()))
												{

												case KEY_UP:
													if (menu_order == 0)
													{
														menu_order = 1;
													}
													if (menu_order == 1)
													{
														menu_order = 3;
													}
													else menu_order--;
													show_menu4(menu_order);
													break;
												case KEY_DOWN:
													if (menu_order == 3)
													{
														menu_order = 1;
													}
													else
														menu_order++;
													show_menu4(menu_order);
													break;
												case KEY_ENTER:
													system("CLS");
													switch (menu_order)
													{

													case 1:
													{
														show_battlefield();
														count1 = 0;
														count2 = 0;
														count3 = 0;
														count4 = 0;
														spacing_of_ships_random_player(mas_play);

														spacing_of_ships_random_comp(mas_comp);
														tt = 4;
													exit888_4:
														cout << setprecision(2) << fixed;
														if (!pp)
														{
															
															show_battlefield();
															spacing_of_ships_saved_player(mas_play, state_play);
															spacing_of_ships_saved_comp2(mas_comp, state_comp);
														}
														x = 60, y = 21;
														gotoxy(x, y);
														state_play_total = double(state_play) / 20 * 100;
														cout << state_play_total << " %";
														x = 60, y = 22;
														gotoxy(x, y);
														state_comp_total = double(state_comp) / 20 * 100;
														cout << state_comp_total << " %";
														random_shoot(mas_play, mas_comp, state_play, state_comp);

													}
													goto exit2;
													case 2:
														show_battlefield();
														count1 = 0;
														count2 = 0;
														count3 = 0;
														count4 = 0;
														spacing_of_ships_random_player(mas_play);

														spacing_of_ships_random_comp(mas_comp);
														tt = 3;
														
													exit888_3:
														cout << setprecision(2) << fixed;
														if (!pp)
														{
															
															show_battlefield();
															spacing_of_ships_saved_player(mas_play, state_play);
															spacing_of_ships_saved_comp2(mas_comp, state_comp);
														}
														x = 60, y = 21;
														gotoxy(x, y);
														state_play_total = double(state_play) / 20 * 100;
														cout << state_play_total << " %";
														x = 60, y = 22;
														gotoxy(x, y);
														state_comp_total = double(state_comp) / 20 * 100;
														cout << state_comp_total << " %";
														intelectual_shoot(mas_play, mas_comp, state_play, state_comp);
														goto exit2;


													case 3:
														system("CLS");

														exit = 0;
														goto exit2;

													}
												}
											}



										case 3:
											system("CLS");

											exit = 0;
											goto exit2;



										}
									}
								}
							case 2:
								show_menu5(1);
								keys = 1, menu_order = 1;
								while (exit)
								{

									switch ((keys = _getch()))
									{

									case KEY_UP:
										if (menu_order == 0)
										{
											menu_order = 1;
										}
										if (menu_order == 1)
										{
											menu_order = 2;
										}
										else menu_order--;
										show_menu5(menu_order);
										break;
									case KEY_DOWN:
										if (menu_order == 2)
										{
											menu_order = 1;
										}
										else
											menu_order++;
										show_menu5(menu_order);
										break;
									case KEY_ENTER:
										system("CLS");
										switch (menu_order)
										{
										case 1:
											show_menu4(1);
											keys = 1, menu_order = 1;
											while (exit)
											{

												switch ((keys = _getch()))
												{

												case KEY_UP:
													if (menu_order == 0)
													{
														menu_order = 1;
													}
													if (menu_order == 1)
													{
														menu_order = 3;
													}
													else menu_order--;
													show_menu4(menu_order);
													break;
												case KEY_DOWN:
													if (menu_order == 3)
													{
														menu_order = 1;
													}
													else
														menu_order++;
													show_menu4(menu_order);
													break;
												case KEY_ENTER:
													system("CLS");
													switch (menu_order)
													{

													case 1:
													{
														show_battlefield_comp_comp();
														count1 = 0;
														count2 = 0;
														count3 = 0;
														count4 = 0;
														spacing_of_ships_random_player(mas_play);

														spacing_of_ships_random_comp_comp(mas_comp);
														tt = 2;
														
													exit888_2:
														cout << setprecision(2) << fixed;
														if (!pp)
														{
															show_battlefield_comp_comp();
															spacing_of_ships_saved_player(mas_play, state_comp);
															spacing_of_ships_saved_comp(mas_comp, state_play);
														}
														x = 60, y = 21;
														gotoxy(x, y);
														state_play_total = double(state_play) / 20 * 100;
														cout << state_play_total << " %";
														x = 60, y = 22;
														gotoxy(x, y);
														state_comp_total = double(state_comp) / 20 * 100;
														cout << state_comp_total << " %";
														random_shoot_comp_comp(mas_play, mas_comp, state_comp, state_play);

													}
													goto exit2;
													case 2:
														show_battlefield_comp_comp();
														count1 = 0;
														count2 = 0;
														count3 = 0;
														count4 = 0;
														spacing_of_ships_random_player(mas_play);

														spacing_of_ships_random_comp_comp(mas_comp);
														tt = 1;
													exit888_1:
														cout << setprecision(2) << fixed;
														if (!pp)
														{
															show_battlefield_comp_comp();
															spacing_of_ships_saved_player(mas_play, state_comp);
															spacing_of_ships_saved_comp(mas_comp, state_play);
														}
														x = 60, y = 21;
														gotoxy(x, y);
														state_play_total = double(state_play) / 20 * 100;
														cout << setprecision(2) << fixed << state_play_total << " %";
														x = 60, y = 22;
														gotoxy(x, y);
														state_comp_total = double(state_comp) / 20 * 100;
														cout << setprecision(2)<<fixed<<state_comp_total << " %";
														intelectual_shoot_comp_comp(mas_play, mas_comp, state_comp, state_play);
														goto exit2;

													case 3:
														system("CLS");

														exit = 0;
														goto exit2;

													}
												}
											}

										case 2:
											system("CLS");

											exit = 0;
											goto exit2;



										}
									}
								}

							case 3:
								system("CLS");

								exit = 0;
								goto exit2;




							}
						}
					}
				case 2:
				{
					ofstream file("Matrix1.txt");
					if (file.is_open())
					{
						for (int i = 0; i < 10; i++)
						{
							for (int j = 0; j < 10; j++)
							{
								file << mas_play[i][j] << " ";
							}
							file << "\n";
						}
						file.close();
						cout << "\nField of the Player1 is saved to the Matrix1.txt";
					}

					else
					{
						cout << "Unable to open the file";
					}
					ofstream file2("Matrix2.txt");
					if (file2.is_open())
					{
						for (int i = 0; i < 10; i++)
						{
							for (int j = 0; j < 10; j++)
							{
								file2 << mas_comp[i][j] << " ";
							}
							file2 << "\n";
						}
						file2.close();
						cout << "\nField of the Player2 is saved to the Matrix2.txt";
					}

					else
					{
						cout << "Unable to open the file";
					}

					ofstream file3("Variant.txt");
					if (file3.is_open())
					{
						file3 << tt;
						file3.close();
						
					}

					else
					{
						cout << "Unable to open the file";
					}
					exit = 0;
					goto exit50;
				}
				case 3:
				{

					
					ifstream file1("Matrix1.txt");

					if (file1.is_open())
					{
						for (int i = 0; i < 10; i++)
						{
							for (int j = 0; j < 10; j++)
							{
								file1 >> mas_play[i][j];
							}

						}
						file1.close();
				

					}

					else
					{
						cout << "Unable to open the file for reading";
					}
					ifstream file22("Matrix2.txt");

					if (file22.is_open())
					{
						for (int i = 0; i < 10; i++)
						{
							for (int j = 0; j < 10; j++)
							{
								file22 >> mas_comp[i][j];
							}

						}
						file22.close();
					
					
					}

					else
					{
						cout << "Unable to open the file for reading";
					}

					ifstream file33("Variant.txt");

					if (file33.is_open())
					{
						file33 >> tt;
						file33.close();

					}

					else
					{
						cout << "Unable to open the file for reading";
					}

					pp = false;
					if (tt == 1)
					{
						goto exit888_1;
					}
					if (tt == 2)
					{
						goto exit888_2;
					}
					if (tt == 3)
					{
						goto exit888_3;
					}
					if (tt == 4)
					{
						goto exit888_4;
					}
					if (tt == 5)
					{
						goto exit888_5;
					}
					if (tt == 6)
					{
						goto exit888_6;
					}
					
					exit = 0;
					_getch();
					goto exit2;
				}
					case 4:
						system("CLS");

						exit = 0;

				}
			}
		}

		
        exit50:
		x = 35, y = 35;
		gotoxy(x, y);


	_getch();
	return(0);
}