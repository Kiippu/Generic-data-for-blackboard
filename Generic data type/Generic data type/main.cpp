#include <memory>
#include "DataTemplate.h"
#include <iostream>

using namespace std;

int main() {

	Data_int int_;
	Data_double double_;
	Data_char char_;
	Data_string string_;

	

	cout << "get as pri msg: " << int_.getMsgPrimary() << endl;
	cout << "get as sec msg: " << int_.getMsgSecondary() << endl;
	cout << "get as value: " << int_.getValue() << endl;
	cout << "get as ID: " << int_.getID() << endl;

	int_.setParams(999,M_FIGHTING_MSG,M_FIGHTING_DAMAGE_PER_SECOND);
	cout << "get as pri msg: " << int_.getMsgPrimary() << endl;
	cout << "get as sec msg: " << int_.getMsgSecondary() << endl;
	cout << "get as value: " << int_.getValue() << endl;
	cout << "get as ID: " << int_.getID() << endl;

	char_.setParams('k',M_FARMING_MSG, M_FIGHTING_RAW_DAMAGE_VALAUE);
	cout << "get as pri msg: " << char_.getMsgPrimary() << endl;
	cout << "get as sec msg: " << char_.getMsgSecondary() << endl;
	cout << "get as value: " << char_.getValue() << endl;
	cout << "get as ID: " << char_.getID() << endl;

	double_.setParams(9.001,M_HUNTING_MSG, M_FIGHTING_RESISTANCE);
	cout << "get as pri msg: " << double_.getMsgPrimary() << endl;
	cout << "get as sec msg: " << double_.getMsgSecondary() << endl;
	cout << "get as value: " << double_.getValue() << endl;
	cout << "get as ID: " << double_.getID() << endl;

	string_.setParams("kory",M_FARMING_MSG, M_FIGHTING_ARMOR);
	cout << "get as pri msg: " << string_.getMsgPrimary() << endl;
	cout << "get as sec msg: " << string_.getMsgSecondary() << endl;
	cout << "get as value: " << string_.getValue() << endl;
	cout << "get as ID: " << string_.getID() << endl;


	int k;
	cin >> k;

	return 0;
}