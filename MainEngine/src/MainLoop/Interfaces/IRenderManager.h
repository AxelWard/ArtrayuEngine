#pragma once
#ifndef __IRENDERMANAGER__

class IRenderManager {
public:
	IRenderManager() {

	}

	~IRenderManager() {

	}

	virtual void prepare() = 0;
	virtual void render() = 0;
	virtual void cleanup() = 0;
};

#endif // !__IRENDERMANAGER__

