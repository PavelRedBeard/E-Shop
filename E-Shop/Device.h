#pragma once
#include"IElectronics.h"
#include <iostream>
using namespace std;

class Device : virtual public IElectronics
{
public:
	Device(int Battery = 0) : _Battery(Battery){}
	virtual ~Device() = default;
	virtual void ShowSpec();	

protected:
	int _Battery;
		
	
}; class Player final : public Device
{
public:
	Player(int Battery, int Storage) : Device(Battery), _Storage(Storage){}

	void ShowSpec() override;

private:
	int _Storage;	
};

class EBook final : public Device
{
public:
	EBook(int Battery, string Display): Device(Battery), _Display(Display){}

	void ShowSpec() override;

private:
	string _Display;
};

class ActionCamera final : public Device
{
public:
	ActionCamera(int Battery, int Resolution) : Device(Battery), _Resolution(Resolution){}

	void ShowSpec() override;
private:
	int _Resolution;
};