#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
	cout << "Testing the Integer class." << endl
		 << "parseInt: \"1000\", -> " << endl;
	cout << Integer.parseInt("1000") << endl << endl;

	cout << "parseInt: '4', -> " << endl;
	cout << Integer.parseInt('4') << endl << endl;

	cout << "reverse: '1234', -> " << Integer.reverse(1234) << endl << endl;

	cout << "toBinaryString: 13, -> " << Integer.toBinaryString(13) << endl << endl;
}