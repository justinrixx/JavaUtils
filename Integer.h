#ifndef INTEGER_H
#define INTEGER_H

#include <string>
#include <cstdlib>
#include <cmath>

/**
* This class is meant to mimic Java's static classes for utility methods
* <p/> on integers
* @author Justin Ricks
*/
class Integer {

public:

	/**
	* Parse a single character into an integer
	* @param c A character to be parsed into a character
	* @return The integer represented by the character
	*/
	int parseInt(char c) throw (const char *) {
		if (isdigit(c)) {
			return c - '0';
		} else {
			throw "NumberFormatException: Not a valid integer";
		}
	}

	/**
	* Parse a string into an integer
	* @param s A string to be parsed to an integer
	* @return The integer represented by the string
	*/
	int parseInt(std :: string s) throw (const char *) {

		int toReturn = 0;

		// loop from the back of the string to the front
		for (int i = s.size() - 1; i >= 0; i--) {
			// make sure it's a digit
			if (isdigit(s[i])) {
				// add to the tens, hundreds, or whatever place we're at
				toReturn += (pow(10, (s.size() - 1) - i) * parseInt(s[i]));
			} else {
				throw "NumberFormatException: Not a valid integer";
			}
		}

		return toReturn;
	}

	/**
	* Reverse an integer (e.g. 1234 -> 4321)
	* @param toReverse The integer to reverse
	* @return The reverse integer
	*/
	int reverse(int toReverse) {
		int toReturn = 0;

		// keep track of the counter to keep track of the tens place
		for (int i = 0; toReverse != 0; i++) {
			toReturn += toReverse % 10;
			toReturn *= 10;
			toReverse /= 10;
		}
		// cut off the trailing zero
		toReturn /= 10;

		return toReturn;
	}

	/**
	* Generate the binary representation of an integer
	* @param i The integer to convert
	* @return A string object containing the binary string of the integer
	*/
	std :: string toBinaryString(int i) {		
		std :: string toReturn = "";

		for ( ; i > 0; i /= 2) {
			toReturn = char('0' + (i % 2)) + toReturn;
		}

		return toReturn;
	}

} Integer; // instantiates an object called Integer

#endif