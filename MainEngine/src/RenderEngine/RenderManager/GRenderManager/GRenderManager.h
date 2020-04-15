#ifndef __GRENDERMANAGER__
#define __GRENDERMANAGER__

#include "../../../LogicEngine/Interfaces/IRenderManager.h"

#include "../../../IOEngine/Loaders/ShaderLoader/ShaderLoader.h"
#include "../../../LogicEngine/Interfaces/IDataManager.h"
#include "../../Renderer/Renderer.h"
#include "../../Renderer/BaseRenderer/BaseRenderer.h"
#include "../../../DataEngine/DataStructures/Model.h"

#include <vector>

class GRenderManager : public IRenderManager {
public:
	GRenderManager(IDataManager& d) : DatM(d) {
		
	}

	~GRenderManager() {

	}

	void render();
	int createBaseRenderer();
	void shutdown();
	void updatePerspectiveMatrices(int width, int height);

	void loadData(Renderer* r);

private:
	std::vector<Renderer*> renderers;
	IDataManager& DatM;
	bool modelChange = false;
};

#endif