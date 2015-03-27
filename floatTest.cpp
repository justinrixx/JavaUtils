#include <iostream>
#include "Float.h"

using namespace std;

int main()
{
	cout << "Testing the Float class." << endl
		 << "parseFloat: \"12.34\", -> ";
	cout << Float.parseFloat("12.34") << endl << endl;

	cout << "Testing the Float class." << endl
		 << "parseFloat: \"1234.3\", -> ";
	cout << Float.parseFloat("1234.3") << endl << endl;

	cout << "Testing the Float class." << endl
		 << "parseDouble: \"1234.388284882828\", -> ";
	cout << Float.parseDouble("1234.388284882828") << endl << endl;

	cout << "parseFloat: '4', -> ";
	cout << Float.parseFloat('4') << endl << endl;
}