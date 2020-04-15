#pragma once
#ifndef __IDISPLAYMANAGER__
#define __IDISPLAYMANAGER__

class IDisplayManager {
public:
	IDisplayManager() {

	}

	~IDisplayManager() {

	}

	virtual void initDisplay() = 0;
	virtual void updateDisplay() = 0;
	virtual void closeDisplay() = 0;
	virtual bool shouldDisplayClose() = 0;

	virtual bool isWindowSizeUpdate() = 0;
	virtual int getDisplayWidth() = 0;
	virtual int getDisplayHeight() = 0;
};

#endif // !__IDISPLAYMANAGER__


