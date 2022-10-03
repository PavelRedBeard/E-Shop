#include<iostream>
#include<string>
#include"IElectronics.h"
#include"Device.h"
#include"Appliances.h"
#include"HairClipper.h"
using namespace std;

int main()
{
	IElectronics* eshop[7];
	eshop[0] = new Player(1500, 32);
	eshop[1] = new EBook(1000, "E-Ink Carta");
	eshop[2] = new ActionCamera(2000, 12);
	eshop[3] = new Refrigerator(62, 300);
	eshop[4] = new Hoover(4, 4.5);
	eshop[5] = new Washer(60, 6);
	eshop[6] = new HairClipper(1200, 500);

	bool flag = true;
	while (flag)
	{
		cout << "Choice device: 1:Player, 2:E-Book, 3:Action camera, 4:Refrigirator, 5:Vacuum cleaner, 6:Washing machine, 7:Hair clipper, 0:Exit" << endl;
		int select;
		cin >> select;
		switch (select)
		{
		case 1:
			eshop[0]->ShowSpec();
			break;
		case 2:
			eshop[1]->ShowSpec();
			break;
		case 3:
			eshop[2]->ShowSpec();
			break;
		case 4:
			eshop[3]->ShowSpec();
			break;
		case 5:
			eshop[4]->ShowSpec();
			break;
		case 6:
			eshop[5]->ShowSpec();
			break;
		case 7:
			eshop[6]->ShowSpec();
			break;
		case 0:
			flag = false;
			break;
		default:
			cout << "Choice device from 1 to 7 or press 0 for exit" << endl;
			break;
		}
	}
	delete eshop[0];
	delete eshop[1];
	delete eshop[2];
	delete eshop[3];
	delete eshop[4];
	delete eshop[5];
	delete eshop[6];

	return 0;
}