#include<iostream>
#include"Rectangle.h"
#include<fstream> // ������ � �������


using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	ifstream in;
	ofstream out; //co����� �����
	out.open("write.txt"); //app-���������� � �����
	in.open("read.txt");
	double xa, ya, xb,yb,xc,yc,xd,yd;
	double xCenter, yCenter, sideA, sideB;
	Rectangle *p;
	p = new Rectangle[5];
	int i = 0;
	if(!in)
	{
		cerr << "file open error" << endl;
	}
	else
	{
		while (!in.eof())
		{
			//in >> xa >> ya>> xb>> yb>> xc>> yc>> xd>> yd;// ����� �����
			//Rectangle R(xa, ya, xb, yb, xc, yc, xd, yd); //������� ������ 
			//p[i++] = R;									//���������� 
			in >> xCenter >> yCenter >> sideA >> sideB;
			Rectangle R(xCenter, yCenter, sideA, sideB); //������� ������ 
			p[i++] = R;									//���������� 
			
		}
	}
	
	for (int k = 0;k < i;k++) // ������ � ����
	{
		//p[k].move('x');
		//p[k].resize(2, 10);
		out << p[0].getXA() << "\t" << p[0].getYA() << "\t" <<
			p[0].getXB() << "\t" << p[0].getYB() << "\t" <<
			p[0].getXC() << "\t" << p[0].getYC() << "\t" <<
			p[0].getXD() << "\t" << p[0].getYD() << "\t"<<endl;
		
	}
	out.close(); //�������� �����
	system("pause");
	return 0;
}