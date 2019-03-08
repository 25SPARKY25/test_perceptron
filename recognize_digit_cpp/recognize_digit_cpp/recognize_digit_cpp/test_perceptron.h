#pragma once
//#include "stdafx.h"
//���������� ��������� � �������
#define column 5
//���������� ��������� � ����
#define row 3
//���������� ������ ��� ��������
#define numberDataTraining 1000000
#define bias 7;

using namespace System::Drawing;
using namespace System;
using namespace std;

class Recog
{ 
	//������� ��������
	bool number[column][row];
	//���� ������� ����������
	//int weight[column][row];
	int ** weight = new int *[column];
public:
	Recog();
	~Recog();
	//������� ���������
	bool proceed();
	//������� �������������
	bool recognize(int **inp, int **loadweghts, int &rows, int &colums);
	//��������� �������� ���������
	void setNumber(const bool number[column][row]);
	void setNumber(int number);
	//���������� �����
	void increase();
	//���������� �����
	void decrease();
	//��������� �����
	int **getWeights();
	//static void setNumber(const bool number[column][row]);
	//static void setNumber(int number);
	static void learn(Bitmap^ &input_image, String^ &FileName);
	static bool proceed(vector<int> inp_vec);
	static void increase(vector<int> inp_vec);
	static void decrease(vector<int> inp_vec);
	static void setweights(vector<int> &inp_weight);
	static vector<int> GetWeigts();
};


