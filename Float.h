#ifndef FLOAT_H
#define FLOAT_H

#include <string>
#include <cstdlib>
#include <cmath>

/**
* This class is meant to mimic Java's static classes for utility methods
* <p/> on floating point numbers
* @author Justin Ricks
*/
class Float {

public:

	/**
	* Parse a single character into a float
	* @param c A character to be parsed into a character
	* @return The integer represented by the character
	*/
	float parseFloat(char c) throw (const char *) {
		if (isdigit(c)) {
			return (float)(c - '0');
		} else {
			throw "NumberFormatException: Not a valid integer";
		}
	}

	/**
	* Parse a string into a float
	* @param s A string to be parsed to an integer
	* @return The integer represented by the string
	*/
	float parseFloat(std :: string s) throw (const char *) {

		float toReturn = 0;
		int decimalPosition = 0;
		bool hasHadADecimal = false;

		// loop from the back of the string to the front
		for (int i = s.size() - 1; i >= 0; i--) {
			// make sure it's a digit
			if (isdigit(s[i])) {
				// add to the tens, hundreds, or whatever place we're at
				if (hasHadADecimal) {
					toReturn += (pow(10, (s.size() - 2) - i) * parseFloat(s[i]));
				} else{
					toReturn += (pow(10, (s.size() - 1) - i) * parseFloat(s[i]));
				}
			// only allow one decimal
			} else if (s[i] == '.' && !hasHadADecimal) {
				hasHadADecimal = true;
				decimalPosition = i;
			} else {
				throw "NumberFormatException: Not a valid integer";
			}
		}

		// adjust for where the decimal was
		toReturn /= (float)(pow(10, (s.size() - 1 - decimalPosition)));
		return toReturn;
	}

	/**
	* Parse a string into a double
	* @param s A string to be parsed to an integer
	* @return The integer represented by the string
	*/
	double parseDouble(std :: string s) throw (const char *) {

		float toReturn = 0;
		int decimalPosition = 0;
		bool hasHadADecimal = false;

		// loop from the back of the string to the front
		for (int i = s.size() - 1; i >= 0; i--) {
			// make sure it's a digit
			if (isdigit(s[i])) {
				// add to the tens, hundreds, or whatever place we're at
				if (hasHadADecimal) {
					toReturn += (pow(10, (s.size() - 2) - i) * parseFloat(s[i]));
				} else{
					toReturn += (pow(10, (s.size() - 1) - i) * parseFloat(s[i]));
				}
			// only allow one decimal
			} else if (s[i] == '.' && !hasHadADecimal) {
				hasHadADecimal = true;
				decimalPosition = i;
			} else {
				throw "NumberFormatException: Not a valid integer";
			}
		}

		// adjust for where the decimal was
		toReturn /= (float)(pow(10, (s.size() - 1 - decimalPosition)));
		return toReturn;
	}


} Float; // instantiates an object called Float

#endif