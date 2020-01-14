#pragma once
#ifndef __IPHYSICSMANAGER__
#define __IPHYSICSMANAGER__

class IPhysicsManager {
public:
	IPhysicsManager() {

	}

	~IPhysicsManager() {

	}

	virtual void runPhysics() = 0;
};

#endif // !__IPHYSICSMANAGER__