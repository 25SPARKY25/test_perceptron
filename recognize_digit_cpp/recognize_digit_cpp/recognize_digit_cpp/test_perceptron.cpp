#include "stdafx.h"
#include "test_perceptron.h"

//Набор данных
struct Number {
	const bool num0[column][row] = { { 1,1,1 },
									{ 1,0,1 },
									{ 1,0,1 },
									{ 1,0,1 },
									{ 1,1,1 } };

	const bool num1[column][row] = { { 0,0,1 },
									{ 0,0,1 },
									{ 0,0,1 },
									{ 0,0,1 },
									{ 0,0,1 } };

	const bool num2[column][row] = { { 1,1,1 },
									{ 0,0,1 },
									{ 1,1,1 },
									{ 1,0,0 },
									{ 1,1,1 } };

	const bool num3[column][row] = { { 1,1,1 },
									{ 0,0,1 },
									{ 1,1,1 },
									{ 0,0,1 },
									{ 1,1,1 } };

	const bool num4[column][row] = { { 1,0,1 },
									{ 1,0,1 },
									{ 1,1,1 },
									{ 0,0,1 },
									{ 0,0,1 } };

	const bool num5[column][row] = { { 1,1,1 },
									{ 1,0,0 },
									{ 1,1,1 },
									{ 0,0,1 },
									{ 1,1,1 } };

	const bool num6[column][row] = { { 1,1,1 },
									{ 1,0,0 },
									{ 1,1,1 },
									{ 1,0,1 },
									{ 1,1,1 } };

	const bool num7[column][row] = { { 1,1,1 },
									{ 0,0,1 },
									{ 0,0,1 },
									{ 0,0,1 },
									{ 0,0,1 } };

	const bool num8[column][row] = { { 1,1,1 },
									{ 1,0,1 },
									{ 1,1,1 },
									{ 1,0,1 },
									{ 1,1,1 } };

	const bool num9[column][row] = { { 1,1,1 },
									{ 1,0,1 },
									{ 1,1,1 },
									{ 0,0,1 },
									{ 1,1,1 } };
}num;
///
 std::vector<int> weights(15);

 //Number numm;

 //входной параметр
 static bool snumber[column][row];

 Recog::Recog()
 {
	 for (int i = 0; i < column; i++) {
		  weight[i] = new int [row];
		 for (int j = 0; j < row; j++) {
			 weight[i][j] = 0;
		 }
	 }
 }

 Recog::~Recog()
 {
 }

 bool Recog::proceed()
 {
	 int result = 0;
	 for (int i = 0; i < column; i++) {
		 for (int j = 0; j < row; j++) {
			 result += (number[i][j] * weight[i][j]);
		 }
	 }
	 return result >= bias;
 }

 bool Recog::recognize(int **inp, int **loadweghts, int &rows, int &colums)
 {
	 int result = 0;
	 for (int i = 0; i < rows; i++) {
		 for (int j = 0; j < colums; j++) {
			 result += (inp[i][j] * loadweghts[i][j]);
		 }
	 }
	 return result > 0;
 }

 void Recog::setNumber(const bool number[column][row])
 {
	 for (int i = 0; i < column; i++) {
		 for (int j = 0; j < row; j++) {
			 this->number[i][j] = number[i][j];
		 }
	 }
 }

 void Recog::setNumber(int& number)
 {
	 switch (number) {
	 case 0:setNumber(num.num0); break;
	 case 1:setNumber(num.num1); break;
	 case 2:setNumber(num.num2); break;
	 case 3:setNumber(num.num3); break;
	 case 4:setNumber(num.num4); break;
	 case 5:setNumber(num.num5); break;
	 case 6:setNumber(num.num6); break;
	 case 7:setNumber(num.num7); break;
	 case 8:setNumber(num.num8); break;
	 case 9:setNumber(num.num9); break;
	 }
 }

 void Recog::increase()
 {
	 for (int i = 0; i < column; i++) {
		 for (int j = 0; j < row; j++) {
			 if (number[i][j]) {
				 weight[i][j] += 1;
			 }
		 }
	 }
 }

 void Recog::decrease()
 {
	 for (int i = 0; i < column; i++) {
		 for (int j = 0; j < row; j++) {
			 if (number[i][j]) {
				 weight[i][j] -= 1;
			 }
		 }
	 }
 }

 int **Recog::getWeights()
 {
	 /*int ** rWeight = new int *[column];
	 for (int i = 0; i < column; i++) {
		 rWeight[i] = new int[row];
		 for (int j = 0; j < row; j++) {
			 rWeight[i][j] = weight[i][j];
			 
		 }
	 }*/
	 return weight;
 }

 void Recog::learn(Bitmap ^ &input_image, String^ &FileName)
{
	

	Bitmap ^ img = input_image;
	String^ FName = FileName;
	//String^ file_name = FileName;
	//объявляем набор фигур, которые учавствуют в обучающей выборке
	static enum figures { Rectangle, Triangle, Circle, Elipse, NUM_FIGURES };//создаём перечисление геометрических фигур для случайного выбора
	static figures fig;
	 fig = static_cast<figures>(rand() % NUM_FIGURES);//генерируем номер для выбора фигуры из перечисления figures
	
	// ArrayToFromFile::SingleVecToFileTest(ImageToArray::SingleBinVectro(img));
	 //если не квадрат
	//if (fig!=0)
	//{
	//	// Если сеть выдала True/Да/1, то наказываем ее
	//	if (proceed(ImageToArray::SingleBinVectro(img)) && !FName->Contains("Rectangle"))
	//	{
	//		decrease(ImageToArray::SingleBinVectro(img));
	//	}
	//}
	//else
	//{
	//	// Если сеть выдала False/Нет/0, то показываем, что это квадрат - то, что нам нужно
	//	if ((!proceed(ImageToArray::SingleBinVectro(img))) && FName->Contains("Rectangle"))
	//	{
	//		increase(ImageToArray::SingleBinVectro(img));
	//	}
	//}
	////MessageBox::Show(Convert::ToString(fig));


	
		 // Если сеть выдала True/Да/1, то наказываем ее
		 if (proceed(ImageToArray::SingleBinVectro(img)) && !FName->Contains("Rectangle"))
		 {
			 decrease(ImageToArray::SingleBinVectro(img));
		 }
	 
	 
		 // Если сеть выдала False/Нет/0, то показываем, что это квадрат - то, что нам нужно
		 if ((!proceed(ImageToArray::SingleBinVectro(img))) && FName->Contains("Rectangle"))
		 {
			 increase(ImageToArray::SingleBinVectro(img));
		 }
	

}

bool Recog::proceed(vector<int> inp_vec)
{
	int net = 0;
	for (int i=0; i < inp_vec.capacity(); i++)
	{
		net += inp_vec[i] * weights[i];
	}

	return net>=bias;
}

void Recog::increase(vector<int> inp_vec)
{
	for (int i = 0; i < inp_vec.capacity(); i++)
	{
		if (inp_vec[i] == 1)
		{
			weights[i]++;
		}
	}
}

void Recog::decrease(vector<int> inp_vec)
{
	for (int i = 0; i < inp_vec.capacity(); i++)
	{
		if (inp_vec[i] == 1)
		{
			weights[i]--;
		}
	}
}

void Recog::setweights(vector<int> &inp_weight)
{
	weights = inp_weight;
}

vector<int> Recog::GetWeigts()
{
	return weights;
}
