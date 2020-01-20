#include "FileOpener.h"

#include <iostream>
#include <cerrno>
#include <string>

const char* FileOpener::loadFile(const char* filePath) {
	// Open file
	std::ifstream in;
	in.open(filePath, std::ios_base::in);

	// Check that it opened correctly
	if (in) {
		// Get length of file
		int length;
		in.seekg(0, in.end);    // go to the end
		length = in.tellg();           // report location (this is the length)
		in.seekg(0, std::ios::beg);    // go back to the beginning

		char c;
		char* buffer = new char[length];    // allocate memory for a buffer of appropriate dimension
		int iter = 0;
		in.get(c);
		while(!in.eof()) {
			buffer[iter] = c;
			in.get(c);
			iter++;
		}
		in.close();

		buffer[iter] = '\0';

		return buffer;
	}
	throw(errno);
}