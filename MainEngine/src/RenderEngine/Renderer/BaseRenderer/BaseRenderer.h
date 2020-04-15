#pragma once
#ifndef __BASERENDERER__
#define __BASERENDERER__

#include "../Renderer.h"

using std::vector;

class BaseRenderer : public Renderer {
public:
	BaseRenderer() {
		id = 0;
	}

	~BaseRenderer() {

	}

	void initialize();
	void prepare();
	void render();
	void cleanup();

private:
	
};

#endif // !__BASERENDERER__
