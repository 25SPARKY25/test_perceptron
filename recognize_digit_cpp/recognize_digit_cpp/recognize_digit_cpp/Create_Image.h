#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <string>
#include <vcclr.h>
//#include <stdafx.h>;
using namespace System::IO;
using namespace System::Drawing;
using namespace System::Drawing::Text;
using namespace System;
using namespace std;


class Create_Image
{
private:
	gcroot<Bitmap^> imgperc;
public:
	//������� ��������
	static Bitmap^ Cr_image();//����� ���������� �� ��������� ��������
	static void void_Cr_image(String^ path, int x);//void-����� ���������� �� ��������� ��������	
	Bitmap^ GetImage();//������� ��������


	Create_Image(int **load_arr, int **digit_arr, int &rows, int &colums);
	~Create_Image();
};

