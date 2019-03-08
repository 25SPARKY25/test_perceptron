#pragma once
//#include "stdafx.h"
//количество элементов в столбце
#define column 5
//количество элементов в ряду
#define row 3
//Количество данных для обучения
#define numberDataTraining 1000000
#define bias 7;

using namespace System::Drawing;
using namespace System;
using namespace std;

class Recog
{ 
	//входной параметр
	bool number[column][row];
	//весы входных параметров
	//int weight[column][row];
	int ** weight = new int *[column];
public:
	Recog();
	~Recog();
	//Функция активации
	bool proceed();
	//Функция распознавания
	bool recognize(int **inp, int **loadweghts, int &rows, int &colums);
	//установка входного параметра
	void setNumber(const bool number[column][row]);
	void setNumber(int number);
	//Увеличение весов
	void increase();
	//Уменьшение весов
	void decrease();
	//Получение весов
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


