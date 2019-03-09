#include "stdafx.h"
#include "Create_Image.h"



//Create_Image::Create_Image()
//{
//}

 Bitmap ^ Create_Image::Cr_image()
{
	// TODO: �������� ����� �������� return
	Bitmap ^image = gcnew Bitmap(100,100);
	Graphics ^ g = Graphics::FromImage(image);//������ ������ Graphics
	SolidBrush^ Blackbrush = gcnew SolidBrush(Color::Black);//������ ����� brush
	SolidBrush^ Whitebrush = gcnew SolidBrush(Color::White);//������ ����� brush
	//Pen^ BlackPen = gcnew Pen(Color::Black);//������ �����
	//g -> DrawRectangle(BlackPen, 40, 40, 25, 25);//������ �������
	int w = rand() % 50;//������ ������� ��������
	g->FillRectangle(Whitebrush, 0, 0, 100, 100);//�������� ������ �������
	g->FillRectangle(Blackbrush, rand()%75 , rand() % 75, w, w);//�������� ������ �������
	return image;
}

 void Create_Image::void_Cr_image(String^ path, int x)
 {
	 enum figures { Rectangle, Triangle, Circle, Elipse, NUM_FIGURES};//������ ������������ �������������� ����� ��� ���������� ������
	 figures fig =static_cast<figures>(rand() % NUM_FIGURES);//���������� ����� ��� ������ ������ �� ������������ figures
	 Bitmap ^image = gcnew Bitmap(100, 100);
	 Graphics ^ g = Graphics::FromImage(image);//������ ������ Graphics
	 SolidBrush^ Blackbrush = gcnew SolidBrush(Color::Black);//������ ����� brush
	 SolidBrush^ Whitebrush = gcnew SolidBrush(Color::White);//������ ����� brush
															 //Pen^ BlackPen = gcnew Pen(Color::Black);//������ �����
															 //g -> DrawRectangle(BlackPen, 40, 40, 25, 25);//������ �������
	 //int w = rand() % 250;//������ ������� ��������
	 //int z = rand() % 250;//������ ������� ��������������� ��������

	/* Point point1 = Point(rand() % 500, rand() % 500);
	 Point point2 = Point(rand() % 500, rand() % 500);
	 Point point3 = Point(rand() % 500, rand() % 500);
	 cli::array<Point, 1>^ TrianglePoints = { point1, point2, point3 };*/
	 g->FillRectangle(Whitebrush, 0, 0, 100, 100);//�������� ������ ���

	 switch (fig) 
	 {
		case 0: 
				{ //�������
					int w = rand() % 50;//������ ������� ��������
					g->FillRectangle(Blackbrush, rand() % 50, rand() % 50, w, w);//�������� ������ �������
					image->Save(path + "\\Rectangle" + x + ".bmp");
					break;
				}
		case 1: 
				{ //�����������
					// ������ ������ ��������� ��� ������������
					//TrianglePoints = gcnew array<Point, 1>(3);
					//Point TrianglePoints[3] = { Point(rand() % 500, rand() % 500),Point(rand() % 500, rand() % 500), Point(rand() % 500, rand() % 500) };
					Point point1 = Point(rand() % 100, rand() % 100);
					Point point2 = Point(rand() % 100, rand() % 100);
					Point point3 = Point(rand() % 100, rand() % 100);
					cli::array<Point, 1>^ TrianglePoints = { point1, point2, point3 };
					g->FillPolygon(Blackbrush, TrianglePoints);//�������� ������ �����������
					image->Save(path + "\\Triangle" + x + ".bmp");
					break;
				}
		 case 2: 
				{ //����������
					//int z = rand() % 250;//������ ������� ��������������� ��������
					int z = rand() % 50;//������ ������� ��������������� ��������
					g->FillEllipse(Blackbrush, rand() % 50, rand() % 50, z, z);//�������� ������ ����������
					image->Save(path + "\\Circle" + x + ".bmp");
					break;
				}
		 case 3:
				{	//������
					g->FillEllipse(Blackbrush, rand() % 50, rand() % 50, rand() % 50, rand() % 50);//�������� ������ �����������
					image->Save(path + "\\Elipse" + x + ".bmp");
					break;
				}
	 }
}

 Bitmap ^ Create_Image::GetImage()
 {
	 Bitmap^ img = gcnew Bitmap(imgperc);
	 //return this->imgperc;
	 return img;
 }

 Create_Image::Create_Image(int **load_arr, int **digit_arr, int &rows, int &colums)
 {
	 Bitmap ^ imgperc = gcnew Bitmap(600, 600);
	 Graphics ^ g = Graphics::FromImage(imgperc);//������ ������ Graphics
	 SolidBrush^ BlackBrush = gcnew SolidBrush(Color::Black);//������ ����� brush
	 SolidBrush^ WhiteBrush = gcnew SolidBrush(Color::White);//������ ����� brush
	 SolidBrush^ RedBrush = gcnew SolidBrush(Color::Red);//������ ����� brush
	 SolidBrush^ GreenBrush = gcnew SolidBrush(Color::Green);//������ ����� brush
	 SolidBrush^ YellowBrush = gcnew SolidBrush(Color::Yellow);//������ ����� brush
	 SolidBrush^ GrayBrash = gcnew SolidBrush(Color::Gray);//������ ����� brush
	 SolidBrush^ OrangeBrash = gcnew SolidBrush(Color::Orange);//������ ����� brush

	 Pen^ BlackPen = gcnew Pen(Color::Black);

	 StringFormat^ sf = gcnew StringFormat();
	 sf->Alignment = StringAlignment(1);
	 sf->LineAlignment = StringAlignment(1);

	 Font^ f_15 = gcnew Font("Times", 15);

	 g->FillRectangle(GrayBrash, 0, 0, 600, 600);//�������� ������ ���
	 g->TextRenderingHint = TextRenderingHint(4);

	 int cnt=0, rez=0;
	 for (int i = 0; i < rows; i++)
	 {
		 for (int j = 0; j < colums; j++)
		 {
			 PointF drawPoint = PointF(265.0F, cnt * 40 + 20.0F);
			 PointF drawPoint_1 = PointF(65.0F, cnt * 40 + 20.0F);
			 g->DrawLine(BlackPen, 75, cnt * 40 + 20, 250, cnt * 40 + 20);//������ �����
			 g->DrawLine(BlackPen, 250, cnt * 40 + 20, 550, 7 * 40 + 20);//������ �����
			 ////////////////////////////////////////////////////////////////////////////////////////////
			 if (digit_arr[i][j] == 0)
			 {
				 g->FillEllipse(WhiteBrush, 50, cnt * 40 + 5, 30, 30);//�������� ������ ����������
				 g->DrawString(Convert::ToString(digit_arr[i][j]), f_15, BlackBrush, drawPoint_1, sf);
			 }
			 else
			 {
				 g->FillEllipse(BlackBrush, 50, cnt * 40 + 5, 30, 30);//�������� ������ ����������
				 g->DrawString(Convert::ToString(digit_arr[i][j]), f_15, WhiteBrush, drawPoint_1, sf);
			 }
			 ////////////////////////////////////////////////////////////////////////////////////////////
			 if (load_arr[i][j] < 0)
			 {				 
				 g->FillEllipse(RedBrush, 250, cnt * 40 + 5, 30, 30);//�������� ������ ����������
				 g->DrawString( Convert::ToString(load_arr[i][j]), f_15, BlackBrush, drawPoint, sf);
			 }
			 else if (load_arr[i][j] == 0)
			 {
				 g->FillEllipse(YellowBrush, 250, cnt * 40 + 5, 30, 30);//�������� ������ ����������			 
				 g->DrawString(Convert::ToString(load_arr[i][j]), f_15, BlackBrush, drawPoint, sf);
			 }
			 else
			 {
				 g->FillEllipse(GreenBrush, 250, cnt * 40 + 5, 30, 30);//�������� ������ ����������
				 g->DrawString(Convert::ToString(load_arr[i][j]), f_15, BlackBrush, drawPoint, sf);
			 }
			 cnt++;
			 rez += load_arr[i][j] * digit_arr[i][j];
		 }
	 }
	 //MemoryStream ^stream = gcnew MemoryStream();
	 //imgperc->Save(stream, Imaging::ImageFormat::Bmp);
	 g->FillEllipse(OrangeBrash, 550, 285, 30, 30);//�������� ������ ����������
	 PointF drawPoint_2 = PointF(565.0F, 300.0F);
	 g->DrawString(Convert::ToString(rez), f_15, BlackBrush, drawPoint_2, sf);
	 imgperc->Save("test.bmp");
 }

 Create_Image::~Create_Image()
 {
 }
