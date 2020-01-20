#pragma once
#ifndef __IRENDERMANAGER__

class IRenderManager {
public:
	IRenderManager() {

	}

	~IRenderManager() {

	}

	virtual void render() = 0;

	virtual void createBaseRenderer() = 0;

	virtual void shutdown() = 0;
};

#endif // !__IRENDERMANAGER__

