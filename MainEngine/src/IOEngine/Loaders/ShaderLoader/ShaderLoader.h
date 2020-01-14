#pragma once
#ifndef __SHADERLOADER__
#define __SHADERLOADER__

#include "../../../RenderEngine/Interfaces/IShaderLoader.h"
#include <glad/glad.h>

class ShaderLoader : public IShaderLoader {
public:
	ShaderLoader() {

	}
	
	~ShaderLoader() {

	}

	GLuint loadShader(const char* vertPath, const char* fragPath);
};

#endif // !__SHADERLOADER__

