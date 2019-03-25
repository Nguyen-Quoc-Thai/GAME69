// Xep hinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Ki tu 178 177 176 tu dam den nhat.

#include"pch.h"
#include"XuLy.h"
#include"Superman.h"

#include<iostream>
using namespace std;


#include "Library.h"
#include"Intro.h"
#include"Menu.h"



#pragma comment(lib, "winmm.lib")
#include<mmsystem.h>





int Check(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
		{
			return 1;
		}
	}
	return 0;
}


int CheckChamCotTrai(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x - 4 < 9)
			return 1;
	}
	return 0;

}


int CheckChamCotPhai(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x + 4 > 49)
			return 1;
	}
	return 0;
}



int main()
{
	//PlaySound("doan.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);

	//Show_game_name();

	//MENU();


	resizeConsole(1250, 615);// Thay doi kich thuoc console

	ManhTru a[50];
	int score = 0;
	ManhTru b[50];
	Board Board[100][100];
	int lv1 = 350, dem = 0;
	srand(time(NULL));

	Background(score);

	int random1, random2; //random 1 la cai in ra , random 2 la block tiep theo
	random2 = 1;
	KhoiTaoBoard(Board);
	NewBlock(b, random2);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&ThreadProc1, NULL, 0, NULL);

	Tao_XuatKhoiCauChuI(a);
	//

	while (1)
	{

		GanChoBoard(a, Board);

		if (_kbhit())
		{
			char key = _getch();
			if ((key == 'S' || key == 's') && Check(a, Board) != 1)
			{
				DiChuyenXuong(a, Board);
				Sleep(50);
				continue;
			}
			else if ((key == 'A' || key == 'a') && CheckChamCotTrai(a, Board) != 1)
			{
				DiChuyenQuaTrai(a);
				Sleep(100);
				continue;
			}
			else if (key == 'D' || key == 'd' && CheckChamCotPhai(a, Board) != 1)
			{
				DiChuyenQuaPhai(a);
				Sleep(100);
				continue;
			}
			else if (key == 'w' || key == 'W')
			{
				XoayChu(a);
				//InRaKhiCham(a);
				continue;
			}
			else if (key == 32)
			{
				gotoXY(95, 20);
				printf("PAUSE");
				_getch();
				gotoXY(95, 20);
				printf("     ");

			}
		}
		if (KiemTraVaChamNhau(a, Board) == 1 || KiemTraVaChamDay(a) == 1)
		{
			if (GameOver(Board, a) == 1)
				return 0;
			dem++;
		/*	InRaKhiCham(a);*/
			random1 = random2;
			random2 = rand() % 6;
			if (random1 == 1)
				Tao_XuatKhoiCauVuong(a);
			else if (random1 == 2)
				Tao_XuatKhoiCauChuL(a);
			else if (random1 == 3)
				Tao_XuatKhoiCauChuZ(a);
			else if (random1 == 4)
				Tao_XuatKhoiCauDauCong(a);
			else if (random1 == 5)
				Tao_XuatKhoiCauChuI(a);
			NewBlock(b, random2);
		}
		else
		{
			DiChuyenXuong(a, Board);
			Sleep(lv1);

		}
		CheckMax(Board, a, score);


	}

	return 0;
}

