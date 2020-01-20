#ifndef __GRENDERMANAGER__
#define __GRENDERMANAGER__

#include "../../../LogicEngine/Interfaces/IRenderManager.h"

#include "../../../IOEngine/Loaders/ShaderLoader/ShaderLoader.h"

#include <vector>

#include "../../Renderer/Renderer.h"
#include "../../Renderer/BaseRenderer/BaseRenderer.h"

class GRenderManager : public IRenderManager {
public:
	GRenderManager() {
		
	}

	~GRenderManager() {

	}

	void render();
	void createBaseRenderer();
	void shutdown();

private:
	std::vector<Renderer*> renderers;
};

#endif