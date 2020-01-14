#pragma once
#ifndef __ISHADERLOADER__
#define __ISHADERLOADER__

class IShaderLoader {
public:
	IShaderLoader() {

	}

	~IShaderLoader() {

	}

	virtual void loadShader() = 0;
};

#endif // !__ISHADERLOADER__
