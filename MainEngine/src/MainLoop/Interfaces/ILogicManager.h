#pragma once
#ifndef __ILOGICMANAGER__
#define __ILOGICMANAGER__

class ILogicManager {
public:
	ILogicManager() {

	}

	~ILogicManager() {

	}

	virtual void runLogic() = 0;
};

#endif // !__ILOGICMANAGER__

