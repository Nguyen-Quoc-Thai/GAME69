#include "pch.h"
#include<stdio.h>
#include <iostream>	
#include"Library.h"
#include<conio.h>
#include<ctime>
#include <windows.h>
#include<thread>
#include<mutex>
#include"XuLy.h"


static std::mutex g_i_mutex;


//void InRaKhiCham(ManhTru a[])
//{
//	if (a->xeploai == 1)
//	{
//
//		for (int i = 0; i < 32; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//	else if (a->xeploai == 2)
//	{
//
//		for (int i = 0; i < 20; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//	else if (a->xeploai == 3)
//	{
//
//
//
//		for (int i = 0; i < 32; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//
//	}
//	else if (a->xeploai == 4)
//	{
//
//		for (int i = 0; i < 20; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//	if (a->xeploai == 5)
//	{
//
//		for (int i = 0; i < 32; i++)
//		{
//			std::lock_guard<std::mutex> lock(g_i_mutex);
//
//			gotoXY(a[i].td.x, a[i].td.y);
//			TextColor(a[i].mau);
//			putchar(178);
//		}
//	}
//}

void DiChuyenXuong(ManhTru a[], Board board[][100])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.y + 1 > MAXCOL)
			return;
	}
	for (int i = 0; i < 32; i++)
	{
		if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
		{
			return;
		}
	}
	if (a->xeploai == 1)
	{
		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);

			putchar(178);
		}
	}
	else if (a->xeploai == 2)
	{

		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// sau khi xoa thi in ra cai moi
		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}

	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}


	}
	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 5)
	{
		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{
			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
}


void DiChuyenXuong2(ManhTru a[], Board board[][100])
{

	if (a->xeploai == 1)
	{

		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);

			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 2)
	{

		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// sau khi xoa thi in ra cai moi
		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}

	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}


	}
	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		//Sau khi xoa thi in ra cai moi



		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);
			a[i].td.y++;
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);

			putchar(178);
		}
	}
	else if (a->xeploai == 5)
	{
		// Xoa di cai cu:
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// In ra cai moi.
		for (int i = 0; i < 32; i++)
		{

			a[i].td.y++;
			std::lock_guard<std::mutex> lock(g_i_mutex);
			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);

			putchar(178);
		}
	}
}


void DiChuyenQuaTrai(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x - 4 < 9)
			return;
	}
	if (a->xeploai == 1)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 2)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// Lay toa do tru di
		//Xoa cai cu
		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}

	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// Lay toa do tru di
		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		// Lay toa do tru di
		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 5)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x -= 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
}


void DiChuyenQuaPhai(ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		if (a[i].td.x + 4 > 49)
			return;
	}

	if (a->xeploai == 1)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}

		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 2)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}

	}

	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}

	else if (a->xeploai == 5)
	{
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}

		for (int i = 0; i < 32; i++)
		{
			a[i].td.x += 4;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			TextColor(a[i].mau);
			putchar(178);
		}
	}

}


void XoayChu(ManhTru a[])
{
	if (a->xeploai == 2)
	{
		a->n++;
		if (a->n > 4)
		{
			a->n = 1;
		}
		if (a->n == 1)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[12].td.x;
			int h = a[12].td.y - 2;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem < 2)
						a[i * 4 + j].mau = 12;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 8;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}
				dem++;
				if (dem == 4)
				{
					dem = 0;
				}
				k = a[0].td.x;
				h++;
			}
			k = a[19].td.x + 1;
			h = a[19].td.y;
			for (int i = 24; i < 32; i++)
			{
				a[i].mau = 8;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 27)
				{
					k = a[19].td.x + 1;
					h++;

				}

			}
			//Xuat ra
		}

		else if (a->n == 2)
		{
			int dem = 0, q = 12, w = 8;
			char key = _getch();
			if (key == 'f' || key == 'F')
			{
				for (int i = 0; i < 32; i++)
				{
					std::lock_guard<std::mutex> lock(g_i_mutex);

					gotoXY(a[i].td.x, a[i].td.y);
					printf(" ");
				}
				int k = a[0].td.x - 4;
				int tempk = k;
				int h = a[12].td.y;
				int temph = h;
				for (int i = 0; i < 2; i++)
				{
					for (int j = 0; j < 12; j++)
					{

						if (dem == 8)
							dem = 0;
						if (dem < 4)
						{
							a[i * 12 + j].mau = q;
						}
						else if (dem >= 4 && dem < 8)
						{
							a[i * 12 + j].mau = w;
						}
						a[i * 12 + j].td.x = k++;
						a[i * 12 + j].td.y = h;
						dem++;
					}
					h++;
					q = 8;
					w = 12;
					k = tempk;
				}
				k = a[8].td.x;
				tempk = k;
				temph = a[8].td.y - 2;
				for (int i = 24; i < 32; i++)
				{
					a[i].mau = 8;
					a[i].td.x = k++;
					a[i].td.y = temph;
					if (i == 27)
					{
						temph++;
						k = tempk;
					}
				}
				a->xeploai = 2;
			}
		}
		else if (a->n == 3)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[4].td.x;
			int tempk = k;
			int h = a[12].td.y;
			int temph = h;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem < 2)
						a[i * 4 + j].mau = 12;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 8;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}
				dem++;
				if (dem == 4)
				{
					dem = 0;
				}
				k = tempk;
				h--;

			}
			k = a[16].td.x - 1;
			tempk = k;
			h = a[16].td.y;
			for (int i = 24; i < 32; i++)
			{
				a[i].mau = 8;
				a[i].td.x = k--;
				a[i].td.y = h;
				if (i == 27)
				{
					h--;
					k = tempk;
				}
			}

		}
		else if (a->n == 4)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[4].td.x - 4;
			int tempk = k;
			int h = a[4].td.y;
			int temph = h;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem < 2)
						a[i * 4 + j].mau = 12;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 8;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}
				dem++;

				k = tempk;
				h--;

			}
			dem = 0;
			k = a[15].td.x + 1;
			h = a[15].td.y;
			for (int i = 16; i < 32; i++)
			{
				if (dem < 4)
					a[i].mau = 12;
				else if (dem >= 4 && dem < 8)
					a[i].mau = 8;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 23)
				{
					dem = -1;
					k = a[15].td.x + 1;
					h++;
				}
				dem++;

			}



		}


	}
	else if (a->xeploai == 3)
	{
		a->n++;
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		if (a->n > 3)
		{
			a->n = 1;
		}
		if (a->n == 2)
		{
			Tao_XuatKhoiCauChuZ2(a);
		}
		else if (a->n == 1)
		{
			int dem = 0;
			int k = a[15].td.x;
			int h = a[0].td.y;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (dem == 8)
						dem = 0;
					if (dem < 4)
						a[i * 8 + j].mau = 9;
					else if (dem >= 4 && dem < 8)
						a[i * 8 + j].mau = 1;
					a[i * 8 + j].td.x = k++;
					a[i * 8 + j].td.y = h;
					dem++;
				}
				k = a[15].td.x;
				h++;
			}
			k = a[0].td.x + 4;
			for (int i = 16; i <= 23; i++)
			{
				if (i <= 19)
					a[i].mau = 9;
				else
					a[i].mau = 1;
				a[i].td.x = k++;
				a[i].td.y = h;
			}
			k = a[0].td.x + 4;
			h++;
			for (int i = 24; i < 32; i++)
			{
				if (i <= 27)
					a[i].mau = 9;
				else
					a[i].mau = 1;
				a[i].td.x = k++;
				a[i].td.y = h;
			}
		}
	}
	else if (a->xeploai == 4)
	{
		if (a->n > 4)
		{
			a->n = 0;
		}
		for (int i = 0; i < 32; i++)
		{
			std::lock_guard<std::mutex> lock(g_i_mutex);

			gotoXY(a[i].td.x, a[i].td.y);
			printf(" ");
		}
		a->n++;
		if (a->n == 2)
		{
			int dem = 0;
			int k = a[11].td.x;
			int tempk = k;
			int h = a[0].td.y;
			h -= 2;
			for (int i = 8; i < 32; i++)
			{

				if (dem < 2)
					a[i].mau = 13;
				else if (dem >= 2 && dem < 4)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k;
				a[i].td.y = h++;
				if (i == 13 || i == 19 || i == 25)
				{
					dem = -1;
					k--;
					h = a[8].td.y;

				}
				dem++;
			}
		}
		else if (a->n == 3)
		{
			int dem = 8;
			int k = a[0].td.x;
			int h = a[0].td.y;
			h--;
			k -= 4;
			for (int i = 8; i < 32; i++)
			{
				if (dem < 12)
					a[i].mau = 13;
				else if (dem >= 12 && dem <= 15)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 19)
				{
					dem = 7;
					k = a[8].td.x;
					h--;
				}
				dem++;

			}
		}
		else if (a->n == 4)
		{
			int dem = 0;
			int k = a[3].td.x;
			int h = a[3].td.y;
			h -= 2;
			k++;
			for (int i = 8; i < 32; i++)
			{
				if (dem < 2)
					a[i].mau = 13;
				else if (dem >= 2 && dem < 4)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k;
				a[i].td.y = h++;
				if (i == 13 || i == 19 || i == 25)
				{
					k++;
					h = a[8].td.y;
					dem = -1;
				}
				dem++;

			}
		}
		else if (a->n == 1)
		{
			int dem = 8;
			int k = a[0].td.x;
			k -= 4;
			int h = a[0].td.y;
			h += 2;
			for (int i = 8; i < 32; i++)
			{
				if (dem < 12)
					a[i].mau = 13;
				else if (dem >= 12 && dem <= 15)
					a[i].mau = 7;
				else
					a[i].mau = 13;
				a[i].td.x = k++;
				a[i].td.y = h;
				if (i == 19)
				{
					k = a[8].td.x;
					h++;
					dem = 7;
				}
				dem++;

			}
		}
	}
	else if (a->xeploai == 5)
	{
		a->n++;
		if (a->n > 3)
			a->n = 1;
		if (a->n == 1)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = a[4].td.x;
			int h = a[4].td.y - 3;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (dem == 4)
					{
						dem = 0;
					}
					if (dem < 2)
						a[i * 4 + j].mau = 8;
					else if (dem >= 2 && dem < 4)
						a[i * 4 + j].mau = 7;
					a[i * 4 + j].td.x = k++;
					a[i * 4 + j].td.y = h;
				}

				k = a[4].td.x;
				dem++;
				h++;
			}
		}
		if (a->n == 2)
		{
			for (int i = 0; i < 32; i++)
			{
				std::lock_guard<std::mutex> lock(g_i_mutex);

				gotoXY(a[i].td.x, a[i].td.y);
				printf(" ");
			}
			int k = 0;
			if (a[0].td.x - 4 > 9)
			{
				k = a[0].td.x - 4;
			}
			else
				k = 9;
			if (a[0].td.x + 16 > 49)
			{
				k -= a[0].td.x + 16 - 49 - 4;
			}

			int tempk = k;
			int h = a[12].td.y;
			int temph = h;
			int dem = 0;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 16; j++)
				{
					if (dem == 8)
						dem = 0;
					if (dem < 4)
						a[i * 16 + j].mau = 8;
					else if (dem >= 4 && dem < 8)
						a[i * 16 + j].mau = 7;
					a[i * 16 + j].td.x = k++;
					a[i * 16 + j].td.y = h;
					dem++;
				}
				h++;
				k = tempk;
			}

		}
	}
	
}


int KiemTraVaChamDay(ManhTru a[])
{
	if (a->xeploai == 2)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 1)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 3)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 4)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
	else if (a->xeploai == 5)
	{
		for (int i = 0; i < 32; i++)
		{
			if (a[i].td.y == consoleHeight)
			{
				return 1;
			}
		}
	}
}


void GanChoBoard(ManhTru a[], Board board[][100])
{
	if (KiemTraVaChamDay(a) == 1)
	{
		if (a->xeploai == 1)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;

			}
		}
		else if (a->xeploai == 2)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}

		}
		else if (a->xeploai == 3)
		{



			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}


		}
		else if (a->xeploai == 4)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}
		}
		if (a->xeploai == 5)
		{

			for (int i = 0; i < 32; i++)
			{
				board[a[i].td.x][a[i].td.y].gt = 1;
				board[a[i].td.x][a[i].td.y].mau = a[i].mau;
			}
		}
	}
}


void Background(int score)
{


	//  KHUNG Game

	for (int i = consoleHeight / 2; i >= 0; i--)
	{
		TextColor(14);
		gotoXY(8, i);
		putchar(219);
		gotoXY(consoleWidth - 70, i);
		putchar(219);

		TextColor(6);
		gotoXY(7, i);
		putchar(219);
		gotoXY(consoleWidth - 69, i);
		putchar(219);

		gotoXY(7, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth - 69, consoleHeight - i);
		putchar(219);

		TextColor(14);
		gotoXY(8, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth - 70, consoleHeight - i);
		putchar(219);



		Sleep(40);
	}

	for (int i = consoleHeight / 2; i >= 0; i--)
	{
		TextColor(14);
		gotoXY(70 + 44, i);
		putchar(219);
		gotoXY(consoleWidth2 - 18 + 5 + 5 + 13, i);
		putchar(219);

		TextColor(6);
		gotoXY(59 + 5 + 5 + 44, i);
		putchar(219);
		gotoXY(consoleWidth2 - 17 + 5 + 5 + 13, i);
		putchar(219);

		gotoXY(59 + 5 + 5 + 44, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth2 - 17 + 5 + 5 + 13, consoleHeight - i);
		putchar(219);

		TextColor(14);
		gotoXY(70 + 44, consoleHeight - i);
		putchar(219);
		gotoXY(consoleWidth2 - 18 + 5 + 5 + 13, consoleHeight - i);
		putchar(219);



		Sleep(40);
	}



}


int KiemTraVaChamNhau(ManhTru a[], Board board[][100])
{
	if (a->xeploai == 1)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}
	}
	else if (a->xeploai == 2)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}

	}
	else if (a->xeploai == 3)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}


	}
	else if (a->xeploai == 4)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}
	}
	if (a->xeploai == 5)
	{

		for (int i = 0; i < 32; i++)
		{
			if (board[a[i].td.x][a[i].td.y + 1].gt == 1)
			{
				for (int i = 0; i < 32; i++)
				{
					board[a[i].td.x][a[i].td.y].gt = 1;
					board[a[i].td.x][a[i].td.y].mau = a[i].mau;
				}
				return 1;
			}
		}
	}
}


void  CheckMax(Board board[][100], ManhTru a[], int &score)
{
	int dem = 0, temp1;
	for (int i = consoleHeight; i >= 0; i--)
	{
		for (int j = 9; j <= consoleWidth - 71; j++)
		{
			if (board[j][i].gt != 1)
			{
				dem = 0;
				temp1 = 0;
				break;
			}
			else if (j == consoleWidth - 71)
			{
				dem++;
				if (dem == 1)
					temp1 = i;
				if (dem == 2)
				{
					for (int k = 9; k <= consoleWidth - 71; k++)
					{
						board[k][i].gt = 0;
						board[k][temp1].gt = 0;
						std::lock_guard<std::mutex> lock(g_i_mutex);
						gotoXY(k, i);
						printf(" ");
						gotoXY(k, temp1);
						printf(" ");
					}
					dem = 0;
					score += 10;
					TextColor(15);
					gotoXY(consoleWidth - 38, consoleHeight - 5);
					printf("SCORE: %d", score);

					//Sau khi an diem thi don xuong.
					for (int k = 9; k <= consoleWidth - 71; k++)
					{
						for (int z = temp1; z >= 1; z--)
						{
							if (board[k][z].gt == 0)
							{
								for (int h = z - 1; h >= 0; h--)
								{
									if (board[k][h].gt == 1)
									{
										board[k][z].gt = 1;
										board[k][h].gt = 0;
										std::lock_guard<std::mutex> lock(g_i_mutex);

										gotoXY(k, h);
										printf(" ");
										gotoXY(k, z);
										TextColor(board[k][h].mau);
										putchar(178);

										break;
									}
									else
										continue;
								}
							}

						}
					}
				}
			}
		}

	}


}


int GameOver(Board board[][100], ManhTru a[])
{
	for (int i = 0; i < 32; i++)
	{
		if (KiemTraVaChamNhau(a, board) == 1 && a[i].td.y == 0)
		{
			return 1;
		}

	}
	return 0;
}