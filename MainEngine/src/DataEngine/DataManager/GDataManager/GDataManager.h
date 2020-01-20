#pragma once
#ifndef __GDATAMANAGER__
#define __GDATAMANAGER__

#include "../../../LogicEngine/Interfaces/IDataManager.h"
#include "../../DataStructures/ModelTable.h"

class GDataManager : public IDataManager {
public:
	GDataManager() {

	}

	~GDataManager() {

	}

	void updateData();
	void initializeModelTable();
	void createBaseModel();

	void bindModelToRenderer(int modelID, int rendererID);
private:
	ModelTabel gameModelTable;
};

#endif // !__GDATAMANAGER__
