#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>

/**
* This class is meant to mimic Java's static classes for utility methods
* <p/> on Boolean objects
* @author Justin Ricks
*/
class Boolean {

public:

	/**
	* Parse a string into a boolean
	* @param s A string to be parsed to a boolean
	* @return The boolean represented by the string
	*/
	bool parseBoolean(std :: string s) throw (const char *) {
		if (s == "false") {
			return false;
		} else {
			return true;
		}
	}

	/**
	* Parse a string into a boolean
	* @param b A boolean to be parsed into a string
	* @return The string represented by the boolean (i.e. "true" or "false")
	*/
	std::string toString(bool b) {
		if (!b) {
			return "false";
		} else {
			return "true";
		}
	}


} Boolean; // instantiates an object called Boolean

#endif // BOOLEAN_H