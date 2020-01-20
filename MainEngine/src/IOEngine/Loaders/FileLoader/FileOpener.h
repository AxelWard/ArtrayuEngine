#pragma once
#ifndef __FILEOPENER__
#define __FILEOPENER__

#include <fstream>

class FileOpener {
public:
	FileOpener() {

	}

	~FileOpener() {

	}

	const char* loadFile(const char* filePath);
};

#endif // !__FILEOPENER__
