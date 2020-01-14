#include "FileOpener.h"

#include <fstream>
#include <string>
#include <cerrno>

void FileOpener::loadFile(const char* filePath, const char* out) {
	// Open File
	std::ifstream in(filePath, std::ios::in | std::ios::binary);
	if (in) {
		// Create content container
		std::string contents;

		// Get content from file
		in.seekg(0, std::ios::end);
		contents.resize(in.tellg());
		in.seekg(0, std::ios::beg);
		in.read(&contents[0], contents.size());
		in.close();

		// Convert content to char* and return it
		out = contents.c_str();
		return;
	}
	throw(errno);
}