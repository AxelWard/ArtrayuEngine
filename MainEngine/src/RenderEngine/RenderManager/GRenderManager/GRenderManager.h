#ifndef __GRENDERMANAGER__
#define __GRENDERMANAGER__

#include "../../../MainLoop/Interfaces/IRenderManager.h"

#include <vector>

#include "../../Renderer/Renderer.h"

class GRenderManager : public IRenderManager {
public:
	GRenderManager() {
		
	}

	~GRenderManager() {

	}

	void prepare();
	void render();
	void cleanup();

private:
	std::vector<Renderer> renderers;
};

#endif