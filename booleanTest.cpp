#include <iostream>
#include "Boolean.h"

using namespace std;

int main()
{
	cout << "Testing the Boolean class." << endl
		 << "Boolean.toString(true) : "
		 << Boolean.toString(true) << endl << endl;

	cout << "Boolean.parseBoolean(\"true\") : "
		 << Boolean.parseBoolean("true") << endl << endl;

	cout << "Boolean.parseBoolean(\"false\") : "
		 << Boolean.parseBoolean("false") << endl << endl;
}