#pragma once
#include <vector>
#include "ArrayToFromFile.h"
using namespace System::Drawing;
using namespace System;
using namespace std;
//vector<std::vector<double>> AVG_Color;



class ImageToArray
{
public:

	//static vector<int> SingleOutputBlackWhiteVec;
	//����� ������
	static vector<std::vector<int>> ImgToVec(Bitmap ^img);//��������� �������� � ��������� ������
	//�������������������� �������� 3 ������� �� �������
	static vector<std::vector<int>> InpVecBin(Bitmap ^img);//�������� ������ 0 � 1 �������� �����������
	static vector<std::vector<int>> BWImageToVector(Bitmap ^img);//�� �� �������� � ������� � ������
	static vector<int> SingleBinVectro(Bitmap ^img); //�������� ���������� ������ 0 � 1
	//��������� �� ������� �� ������� ������������ �� �����
	//static std::vector<int> BWImage(Bitmap ^img, std::vector<int> single_inputvec); //�������� ���������� vector ��������
	//����� ���������� �������� ��� ��������� � ������� ������ ������� �������� �� �������
	//static vector<std::vector<int>> Sum_AVG_Color(Bitmap ^img);//�������� ��������� ������ ����� ������� ������ �� �������
	static vector<std::vector<int>> AVG_Color(vector<std::vector<int>> Sum_AVG_Color, int counter);//�������� ��������� ��������� ������ ����� ������� ������ �� �������

	//����� �������
	static int** ImgToArr(Bitmap ^img, int** InputColorArr);//��������� �������� � ������
	static Bitmap^ BWImage(Bitmap ^img); //��������� �������� � ��
	static int** BWImageToArray(Bitmap ^img, int** OutputBlackWhiteArr);//�� �� �������� � ������� � ������
	ImageToArray();
	~ImageToArray();
private:
	int** InputColorArr;		//������ 0 � 1 ��������� �����������
	int** OutputBlackWhiteArr;	//������ 0 � 1 �� �����������
};

