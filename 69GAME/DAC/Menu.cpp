#include"pch.h"
#include<iostream>
using namespace std;

#include<mutex>
#include"Menu.h"
#include "Library.h"


#include<conio.h>
#include<time.h>
#include<Windows.h>
#include<string.h>
#include<string>


static std::mutex g_i_mutex;

void framing() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	int x = 15;
	int y = 20;
	int z = 101;
	int t = 28;

	TextColor(3);

	for (int i = 0; i < 9; i++) {
		gotoXY(x, y++);
		cout << (char)175;

		gotoXY(z, t--);
		cout << (char)174;

		Sleep(100);
	}



	for (int i = 0; i < 87; i++) {

		gotoXY(z--, t);
		cout << (char)174;

		gotoXY(x++, y);
		cout << (char)175;

		Sleep(15);
	}
	Sleep(1500);
}


void Close_framing() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	int x = 15;
	int y = 20;
	int z = 101;
	int t = 28;

	TextColor(3);

	for (int i = 0; i < 9; i++) {
		gotoXY(x, y++);
		cout << " ";

		gotoXY(z, t--);
		cout << " ";

		Sleep(100);
	}

	for (int i = 0; i < 87; i++) {

		gotoXY(z--, t);
		cout << " ";

		gotoXY(x++, y);
		cout << " ";

		Sleep(10);
	}
	Sleep(500);
}


status key(int x) {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	if (x = 224) {
		char temp;
		temp = _getch();
		if (temp == 72)
			return UP;
		if (temp == 75)
			return LEFT;
		if (temp == 80)
			return DOWN;
		if (temp == 77)
			return RIGHT;
	}
	else {
		if (x == 13)
			return ENTER;
	}
}


void Resume() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	// Function will be update in newer version

	Close_framing();

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}

	framing();

	int x = 25;
	int y = 22;
	TextColor(6);


	gotoXY(x + 3, y);
	cout << "*  *  **  *  *  *  *****  ****     *   ******* *****    ***";
	gotoXY(x + 3, y + 1);
	cout << "*  *  * * *  *  *  *   *  *   *   * *     *    *....    ***";
	gotoXY(x + 3, y + 2);
	cout << "*  *  *  **  *  *  ****   *   *  *****    *    *         *";
	gotoXY(x + 3, y + 3);
	cout << "****  *   *  ****  *      ****  *     *   *    *****    <*>";
	gotoXY(x + 3, y + 5);
	TextColor(3);
	cout << "                       ------s2-----                      ";



	Sleep(3000);

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}



	int k = 50;
	int h = 22;

	gotoXY(k, 20);
	TextColor(9);
	cout << "      ---MENU---";
	Sleep(0);
	gotoXY(k, 21);
	TextColor(2);
	cout << "~~~~~--===S2===--~~~~~";

}


void New_game() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	Close_framing();

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}

	framing();

	gotoXY(55, 22);
	TextColor(2);
	cout << "Enter you name: ";

	Sleep(200);
	gotoXY(25, 27);
	TextColor(9);
	cout << "ESC to back Menu ";
	gotoXY(75, 27);
	cout << "ENTER to continue ";

	gotoXY(54, 23);
	string name;
	fflush(stdin);
	cout << "\\> ";
	TextColor(6);
	getline(cin, name);
	fflush(stdin);

	while (1) {
		int key = _getch();
		if (key == 27) {
			for (int i = 20; i <= 28; i++) {
				for (int j = 16; j <= 100; j++) {
					gotoXY(j, i);
					cout << " ";
				}
			}
			break;
		}
		else {
			if (key == 13) {

			}
		}
	}

	gotoXY(50, 20);
	TextColor(9);
	cout << "      ---MENU---";
	Sleep(500);
	gotoXY(50, 21);
	TextColor(9);
	cout << "~~~~~--===S2===--~~~~~";
	Sleep(0);
}


void Vs_Superman() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	//
}


void Tutorials() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	Close_framing();

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}

	framing();

	int x = 22;
	int y = 21;
	TextColor(2);

	Sleep(600);
	gotoXY(x, y);
	cout << "Use the navigation keys (UP, RIGHT,LEFT, DOWN or W D A S)";
	gotoXY(x + 25, y + 1);
	cout << " to move and rotate";
	Sleep(3500);
	TextColor(6);
	gotoXY(x + 6, y + 2);
	cout << "Key UP = W    : rotate clockwise";
	Sleep(2500);
	gotoXY(x + 6, y + 3);
	cout << "Key RIGHT = D : move the block to the right";
	Sleep(2500);
	gotoXY(x + 6, y + 4);
	cout << "Key LEFT = A  : move the block to the left";
	Sleep(2500);
	gotoXY(x + 6, y + 5);
	cout << "Key DOWN = S  : move quickly to the bottom";
	Sleep(2500);
	gotoXY(x + 10, y + 6);
	TextColor(3);
	cout << "Try your best to win lots of points";
	Sleep(2500);
	gotoXY(x + 25, y + 7);
	TextColor(2);
	cout << "Good luck to you !!!";

	Sleep(3000);

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}



	int k = 50;
	int h = 22;

	gotoXY(k, 20);
	TextColor(9);
	cout << "      ---MENU---";
	Sleep(0);
	gotoXY(k, 21);
	TextColor(7);
	cout << "~~~~~--===S2===--~~~~~";
	Sleep(0);

}


void About() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	Close_framing();

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}

	framing();

	int x = 22;
	int y = 21;
	TextColor(2);

	Sleep(600);
	gotoXY(x + 4, y);
	cout << "OCEAN TEAM 2019 TM";
	gotoXY(x + 25, y + 1);
	cout << " University of Science - VNU HCM";
	Sleep(500);
	TextColor(8);
	gotoXY(x + 63, y);
	cout << " Version 1.0";
	Sleep(2000);

	TextColor(6);
	gotoXY(x + 6, y + 2);
	cout << "Project Manager    :";

	TextColor(3);
	gotoXY(x + 6 + 22, y + 2);
	cout << "Vo Minh Tan";
	Sleep(1500);

	TextColor(6);
	gotoXY(x + 6, y + 3);
	cout << "Leader             :";

	TextColor(3);
	gotoXY(x + 6 + 22, y + 3);
	cout << "Nguyen Quoc Thai";
	Sleep(1500);

	TextColor(6);
	gotoXY(x + 6, y + 4);
	cout << "Teachnical Akitekt :";

	TextColor(3);
	gotoXY(x + 6 + 22, y + 4);
	cout << "Pham Dinh Thuc";
	Sleep(1500);

	TextColor(6);
	gotoXY(x + 6, y + 5);
	cout << "Developer          :";

	TextColor(3);
	gotoXY(x + 6 + 22, y + 5);
	cout << "Pham Xuan Thanh";
	Sleep(1500);

	TextColor(6);
	gotoXY(x + 6, y + 6);
	cout << "Tester             :";

	TextColor(3);
	gotoXY(x + 6 + 22, y + 6);
	cout << "Nguyen Le Ngoc Tan";
	Sleep(1500);

	TextColor(6);
	gotoXY(x + 10, y + 7);
	TextColor(8);
	cout << "Date create :  08/03/2019";

	Sleep(3000);

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}



	int k = 50;
	int h = 22;

	gotoXY(k, 20);
	TextColor(9);
	cout << "      ---MENU---";
	Sleep(0);
	gotoXY(k, 21);
	TextColor(7);
	cout << "~~~~~--===S2===--~~~~~";

}


void Rank() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	// 
}


void Exit() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	Close_framing();

	for (int i = 20; i <= 28; i++) {
		for (int j = 16; j <= 100; j++) {
			gotoXY(j, i);
			cout << " ";
		}
	}

	framing();

	int x = 25;
	int y = 22;
	TextColor(6);


	gotoXY(x - 4, y);
	cout << "   ////        //        //        ////\\     ////      //        /////     //// ";
	gotoXY(x - 4, y + 1);
	cout << " //          //  //    //  //     //   //   //   //   //        //        ///";
	gotoXY(x - 4, y + 2);
	cout << "//   ////  //    //  //     //   //    //  // //     //        //////     //";
	gotoXY(x - 4, y + 3);
	cout << "//    //    //   //   //   //   //    //  //   //   //        //         //";
	gotoXY(x - 4, y + 4);
	cout << " /////        //        //     ///////   //////    ///////   ///////    <-> ";


	Sleep(2000);

	TextColor(1);

	Sleep(2000);

	gotoXY(47, 28);
}


int MENU() {
	std::lock_guard<std::mutex> lock(g_i_mutex);
	typedef char str[100];

	int k = 50;
	int h = 22;

	str menu[num_menu] = { "   Resume","  New game" ,"Vs Supperman" ,"  Tutorials" ,"    Rank","    About" ,"    Exit" };

	int tt = 0;
	int *font_color = new int[num_menu];
	for (int i = 0; i < num_menu; i++) {
		font_color[i] = Font_color;
	}

	font_color[0] = 4;


	gotoXY(k, 20);
	TextColor(9);
	cout << "      ---MENU---";
	Sleep(500);

	TextColor(6);
	gotoXY(k + 1, h);
	cout << "--> ";

	while (1) {

		for (int i = 0; i < num_menu; i++) {

			gotoXY(k + 5, h + i);
			TextColor(font_color[i]);
			cout << menu[i] << endl;
		}
		int x = _getch();
		status STATUS = key(x);
		switch (STATUS) {
		case UP: {
			if (tt == 0)
				tt = num_menu - 1;
			else tt--;
			break;
		}
		case DOWN: {
			if (tt == num_menu - 1)
				tt = 0;
			else tt++;
			break;
		}
		case ENTER:
			return tt;
		}

		for (int i = 0; i < num_menu; i++) {
			font_color[i] = Font_color;
			gotoXY(k + 1, h + i);
			cout << "    ";
		}

		gotoXY(k + 1, h + tt);
		cout << "--> ";
		font_color[tt] = 4;



		if (x == 13) {
			switch (tt) {
			case 0: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME | SND_SYNC);
				Resume();
				break;
			}
			case 1: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME  | SND_SYNC);
				New_game();
				break;
			}
			case 2: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME  | SND_SYNC);
				Vs_Superman();
				break;
			}
			case 3: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME | SND_SYNC);
				Tutorials();
				break;
			}
			case 4: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME  | SND_SYNC);
				Rank();
				break;
			}
			case 5: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME  | SND_SYNC);
				About();
				break;
			}
			case 6: {
				//PlaySound("Audiochoose.wav", NULL, SND_FILENAME | SND_SYNC);
				Exit();
				break;
				return 0;
			}

			}
			return 1;
		}
	}
}