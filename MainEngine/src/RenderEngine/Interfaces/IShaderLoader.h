#pragma once
#ifndef __ISHADERLOADER__
#define __ISHADERLOADER__

#include <glad/glad.h>

class IShaderLoader {
public:
	IShaderLoader() {

	}

	~IShaderLoader() {

	}

	virtual GLuint loadShader(const char* vertPath, const char* fragPath) = 0;
};

#endif // !__ISHADERLOADER__
