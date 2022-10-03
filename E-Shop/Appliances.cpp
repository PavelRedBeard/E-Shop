#include "Appliances.h"

void Appliance::ShowSpec()
{
	cout << "Weight(kg): " << _Weight << endl;
}

void Refrigerator::ShowSpec()
{
	cout << "Weigth(kg): " << _Weight << endl;
	cout << "Internal volume(L): " << _Volume << endl;
}

void Hoover::ShowSpec()
{
	cout << "Weight(kg): " << _Weight << endl;
	cout << "Volume of container(L): " << _Container << endl;
}

void Washer::ShowSpec()
{
	cout << "Weight(kg): " << _Weight << endl;
	cout << "Internal capacity(kg): " << _Capacity << endl;
}
