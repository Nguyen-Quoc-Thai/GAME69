#pragma once
#include"Tetromino.h"
#include"pch.h"


//void InRaKhiCham(ManhTru a[]);

void DiChuyenXuong(ManhTru a[], Board board[][100]);

void DiChuyenXuong2(ManhTru a[], Board board[][100]);

void DiChuyenQuaTrai(ManhTru a[]);

void DiChuyenQuaPhai(ManhTru a[]);

void XoayChu(ManhTru a[]);

int KiemTraVaChamDay(ManhTru a[]);

void GanChoBoard(ManhTru a[], Board board[][100]);

void Background(int score);

int KiemTraVaChamNhau(ManhTru a[], Board board[][100]); 

void  CheckMax(Board board[][100], ManhTru a[], int &score);

int GameOver(Board board[][100], ManhTru a[]);