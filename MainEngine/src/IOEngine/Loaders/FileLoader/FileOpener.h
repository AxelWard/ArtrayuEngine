#pragma once
#ifndef __FILEOPENER__
#define __FILEOPENER__

class FileOpener {
public:
	FileOpener() {

	}

	~FileOpener() {

	}

	void loadFile(const char* filePath, const char* out);
};

#endif // !__FILEOPENER__
