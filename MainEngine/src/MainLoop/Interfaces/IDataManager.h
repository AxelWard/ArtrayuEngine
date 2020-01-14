#pragma once
#ifndef __IDATAMANAGER__
#define __IDATAMANAGER__

class IDataManager {
public:
	IDataManager() {

	}

	~IDataManager() {

	}

	virtual void updateData() = 0;
};

#endif // !__IDATAMANAGER__

