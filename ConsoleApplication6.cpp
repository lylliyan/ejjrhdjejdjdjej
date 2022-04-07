#include"Antique.h"
#include<iostream>
#include<string>
using namespace std;
void main()
{
	Antique a1, a2;
	cout << "莲鹤方壶体积：" << a1.Volume(30.5, 54.0, 126.5) << "立方厘米" << endl;
	cout << "贾湖骨笛：" << a2.Volume(2.0, 23.1) << "立方厘米" << endl;
	system("pause");
}



