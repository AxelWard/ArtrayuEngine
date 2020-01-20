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
	virtual void initializeModelTable() = 0;
	virtual void createBaseModel() = 0;

	virtual void bindModelToRenderer(int modelId, int rendererID) = 0;
};

#endif // !__IDATAMANAGER__

