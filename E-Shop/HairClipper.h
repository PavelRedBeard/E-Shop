#pragma once
#include"Appliances.h"
#include"Device.h"
#include <iostream>
using namespace std;

class HairClipper final : public Appliance, Device
{
public:
	HairClipper(int Battery, int Weight) : Device(Battery), Appliance(Weight){}
	void ShowSpec() override;
};

