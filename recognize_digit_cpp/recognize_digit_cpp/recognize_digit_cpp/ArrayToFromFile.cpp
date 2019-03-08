#include "stdafx.h"
#include "ArrayToFromFile.h"

using namespace std;

 void ArrayToFromFile::VecToFile(std::vector<std::vector<int>> blackwhitevec,  int x, int y)
{
	ofstream f;
	f.open("weiguts.txt");
	int t = x + 2;
	if (f.is_open()) {
		for (int i = 0; i < t; i++)
		{
			//������ �������� �������-------
			if (i == 0) { f << y << "\n"; i++; f << x << "\n"; i++; }
			//if (i == 1 && i != 0) { f << x << "\n"; i++; }
			//------------------------------
			if (i>=3){ f << "\n"; }
			//if (i == 0)
			//{
			//	f << y << " " << x;//��������� �������� ������ ������� � ���� ����� �������, 
			//					   //����� ����� ���� ��������������� ������� ������ ��������
			//}
			//f << "\n";
			for (int j = 0; j < y; j++)
			{
				f << blackwhitevec[i-2][j]; 
			}
		}
	}
	f.close();
}

 void ArrayToFromFile::SingleVecToFile(std::vector<int> weights)
 {
	 ofstream f;
	 f.open("weiguts.txt");
	 if (f.is_open()) {
		 for (int i = 0; i < weights.capacity(); i++)
		 {
				 f << weights[i] << "\n";
		 }
	 }
	 f.close();
 }

 void ArrayToFromFile::SingleVecToFileTest(std::vector<int> weights)
 {
	 ofstream f;
	 f.open("testmatr.txt");
	 if (f.is_open()) {
		 for (int i = 0; i < weights.capacity(); i++)
		 {
			 f << weights[i] << "\n";
		 }
	 }
	 f.close();
 }

 void ArrayToFromFile::ArrayToFile(int ** arr, int column, int row, std::string name)
 {
	 ofstream f;
	 f.open(name);
	 int t = column + 2;
	 if (f.is_open()) {
		 for (int i = 0; i < t; i++)
		 {
			 //������ �������� �������-------
			 if (i == 0) { f << row << "\n"; i++; f << column << "\n"; i++; }
			 //if (i == 1 && i != 0) { f << x << "\n"; i++; }
			 //------------------------------
			 if (i >= 3) { f << "\n"; }
			 //if (i == 0)
			 //{
			 //	f << y << " " << x;//��������� �������� ������ ������� � ���� ����� �������, 
			 //					   //����� ����� ���� ��������������� ������� ������ ��������
			 //}
			 //f << "\n";
			 for (int j = 0; j < row; j++)
			 {
				 f << arr[i - 2][j]<<';';
			 }
		 }
	 }
	 f.close();
 }

 void ArrayToFromFile::Avg_VecToFile(std::vector<std::vector<int>> Sum_Avg_Vec)
 {
	 ofstream f;
	 f.open("AVG.txt");
	 int t = Sum_Avg_Vec.size() + 2;
	 if (f.is_open()) {
		 for (int i = 0; i < t; i++)
		 {
			 //������ �������� �������-------
			 if (i == 0) { f << Sum_Avg_Vec.size() << "\n"; i++; f << Sum_Avg_Vec.size(); i++; }
			 //if (i == 1 && i != 0) { f << x << "\n"; i++; }
			 //------------------------------
			// if (i >= 3) { f << "\n"; }
			 //if (i == 0)
			 //{
			 //	f << y << " " << x;//��������� �������� ������ ������� � ���� ����� �������, 
			 //					   //����� ����� ���� ��������������� ������� ������ ��������
			 //}
			 //f << "\n";
			 for (int j = 0; j < Sum_Avg_Vec.size(); j++)
			 {
				 f << "\n" << Sum_Avg_Vec[i - 2][j];
			 }
		 }
	 }
	 f.close();
 }

 std::vector<std::vector<int>> ArrayToFromFile::Avg_FileToVec(std::ifstream & ff)
 {
	// ifstream in;
	 //in.open("AVG.txt");//��������� ���� ��� ������ ���� �� ����� � �����
	 char dig;//������ � �����, ����� ��������� �������� 0 ��� 1 ��� ������ �������
	 int x, y;//������� �������
	 string str;//���������� ��� ������ �����()
	 if (!ff.is_open()) // ���� ���� �� ������
		 cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	 else
	 {
		 //����� ������� ������� �� �����------------
		 for (int f = 0; f < 2; f++)//��� ���� ��� ������� �� 2 ������ ������� � �����(��� ������ ������ ����������� �������) 
		 {
			 str = "";
			 while (getline(ff, str)) {
				 str = str;
				 break;
			 }
			 if (f == 0) { y = std::stoi(str); }//�� �������� �������� ������ � ������������ � �����
			 if (f == 1) { x = std::stoi(str); }
		 }
		 vector<vector<int>> output_avg(x, vector <int>(y));//������� ������ ������� ������ ���
															   //-------------------------------------------
		 int t = x + 2;//��� ������������
		 for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
		 {
			 for (int j = 0; j < y; j++)
			 {
				 str = "";
				 while (getline(ff, str)) {
					 str = str;
					 break;
				 }
				 output_avg[i - 2][j] = std::stoi(str);
			 }
		 }
		 ff.close(); // ��������� ����
		 return output_avg;
	 }
 }

 int ** ArrayToFromFile::FileToArray(std::ifstream & f)
 {
	 ifstream in;
	 in.open("weiguts.txt");//��������� ���� ��� ������ ���� �� ����� � �����
	 char dig;//������ � �����, ����� ��������� �������� 0 ��� 1 ��� ������ �������
	 int x, y;//������� �������
	 string str;//���������� ��� ������ �����()
	 if (!in.is_open()) // ���� ���� �� ������
		 cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	 else
	 {
		 //����� ������� ������� �� �����------------
		 for (int f = 0; f < 2; f++)//��� ���� ��� ������� �� 2 ������ ������� � �����(��� ������ ������ ����������� �������) 
		 {
			 str = "";
			 while (getline(in, str)) {
				 str = str;
				 break;
			 }
			 if (f == 0) { y = std::stoi(str); }//�� �������� �������� ������ � ������������ � �����
			 if (f == 1) { x = std::stoi(str); }
		 }
		 int ** arr = new int *[x];//������� ������ ������� ������ ���
		 //-------------------------------------------
		 int t = x + 2;//��� ������������
		 for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
		 {
			 arr[i] = new int[y];
			 for (int j = 0; j < y; j++)
			 {
				 in >> dig;
				 arr[i - 2][j] = Convert::ToInt16(dig);
			 }
		 }
		 in.close(); // ��������� ����
		 return arr;
	 }
 }

 std::vector<std::vector<int>> ArrayToFromFile::FileToVec(std::ifstream &f)
 {
	 ifstream in;
	 in.open("weiguts.txt");//��������� ���� ��� ������ ���� �� ����� � �����
	 char dig;//������ � �����, ����� ��������� �������� 0 ��� 1 ��� ������ �������
	 int x, y;//������� �������
	 string str;//���������� ��� ������ �����()
	 if (!in.is_open()) // ���� ���� �� ������
		 cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	 else		
	 {
		 //����� ������� ������� �� �����------------
		 for (int f = 0; f < 2; f++)//��� ���� ��� ������� �� 2 ������ ������� � �����(��� ������ ������ ����������� �������) 
		 {
			 str = "";
			 while (getline(in, str)) {
				 str = str;
				 break;
			 }
					 if (f == 0) {  y = std::stoi(str); }//�� �������� �������� ������ � ������������ � �����
					 if (f == 1) {  x = std::stoi(str); }
		 }
		 vector<vector<int>> blackwhitevec(x, vector <int>(y));//������� ������ ������� ������ ���
		 //-------------------------------------------
		 int t = x + 2;//��� ������������
		 for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
		 {
			 for (int j = 0; j < y; j++)
			 {
				 in >> dig;
				 blackwhitevec[i-2][j]=Convert::ToInt16(dig);
			 }
		 }
		 in.close(); // ��������� ����
		 return blackwhitevec;
	 }
 }

ArrayToFromFile::ArrayToFromFile()
{
}

ArrayToFromFile::~ArrayToFromFile()
{
}