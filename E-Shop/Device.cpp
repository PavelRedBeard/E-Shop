#include "Device.h"

void Device::ShowSpec()
{
	cout << "Battery capacity(mAh): " << _Battery << endl;
}

void Player::ShowSpec()
{
	cout << "Battery capacity(mAh): " << _Battery << endl;
	cout << "Internal Storage(GB): " << _Storage << endl;
}

void EBook::ShowSpec()
{
	cout << "Battery capacity(mAh): " << _Battery << endl;
	cout << "Type of display: " << _Display << endl;
}

void ActionCamera::ShowSpec()
{
	cout << "Battery capacity(mAh): " << _Battery << endl;
	cout << "Resolution camera(MP): " << _Resolution << endl;
}
