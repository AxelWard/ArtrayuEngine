#pragma once
#ifndef __BASERENDERER__
#define __BASERENDERER__

#include "../Renderer.h"
#include <vector>

using std::vector;

class BaseRenderer : public Renderer {
public:
	BaseRenderer() {
		
	}

	~BaseRenderer() {

	}

	void initialize();
	void prepare();
	void render();
	void cleanup();

private:
	vector<unsigned int> indices;
};

#endif // !__BASERENDERER__
