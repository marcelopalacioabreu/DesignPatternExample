// Composite.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	City city("HoChiMinh");

	city.AddChild(new Humman("Nguyen Thi Thu Hien", 21));
	city.AddChild(new Humman("Nguyen Thanh Thuong", 21));
	city.AddChild(new Humman("Nguyen Thi Dieu  Hien", 21));
	city.AddChild(new Humman("Nguyen Van Hao", 21));
	city.AddChild(new Humman("Nguyen Thu Hoai", 21));

	city.PrintData();
	getc(stdin);
    return 0;
}

