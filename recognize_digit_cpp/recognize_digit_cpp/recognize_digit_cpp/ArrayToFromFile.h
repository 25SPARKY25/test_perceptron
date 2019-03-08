#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include "ImageToArray.h"
#include <vector>
#include <string>
using namespace System::Drawing;
class ArrayToFromFile
{
public:
	//запись массива в файл
	static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	static void SingleVecToFile(std::vector<int> weights);
	static void SingleVecToFileTest(std::vector<int> weights);//тестовый///для просмотра матрицы изображения

	void ArrayToFile(int ** arr, int column, int row, std::string name);


	//запись массива среднего значения на пиксель в файл
	static void Avg_VecToFile(std::vector<std::vector<int>> Sum_Avg_Vec);
	//чтение из файла
	static std::vector<std::vector<int>> FileToVec(std::ifstream &f);
	static std::vector<std::vector<int>> Avg_FileToVec(std::ifstream &ff);



	static int ** FileToArray(std::ifstream &f);



	ArrayToFromFile();
	~ArrayToFromFile();
};

