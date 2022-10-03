#pragma once
#include"IElectronics.h"
#include <iostream>
using namespace std;

class Appliance : virtual public IElectronics
{
public:
	Appliance(int Weight = 0) : _Weight(Weight){}
	virtual ~Appliance() = default;
	virtual void ShowSpec();

protected:
	int _Weight;
};

class Refrigerator final : public Appliance
{
public:
	Refrigerator(int Weight, int Volume) : Appliance(Weight), _Volume(Volume){}
	void ShowSpec() override;

private:
	int _Volume;
};

class Hoover final : public Appliance
{
public:
	Hoover(int Weight, float Container) : Appliance(Weight), _Container(Container){}
	void ShowSpec() override;

private:
	float _Container;
};

class Washer final : public Appliance
{
public:
	Washer(int Weight, int Capacity) : Appliance(Weight), _Capacity(Capacity){}
	void ShowSpec() override;

private:
	int _Capacity;
};