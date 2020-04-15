#pragma once
#ifndef __IRENDERMANAGER__

#include "IDataManager.h"

class IRenderManager {
public:
	IRenderManager() {

	}

	~IRenderManager() {

	}

	virtual void render() = 0;
	virtual int createBaseRenderer() = 0;
	virtual void shutdown() = 0;

	virtual void updatePerspectiveMatrices(int width, int height) = 0;
};

#endif // !__IRENDERMANAGER__