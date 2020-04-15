#pragma once
#ifndef __GDATAMANAGER__
#define __GDATAMANAGER__

#include <vector>

#include "../../../LogicEngine/Interfaces/IDataManager.h"

#include "../../DataStructures/ModelTable.h"
#include "../../DataStructures/Model.h"
#include "../../DataStructures/ObjectTable.h"
#include "../../DataStructures/Object.h"

#include "../../ModelBuilders/BaseModelBuilder/BaseModelBuilder.h"

#include "../../DataRetrievers/ModelDataRetriever/ModelDataRetriever.h"

using std::vector;

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
	Model* getModelFromTable(int modelID);
	void createObject(int modelID, int objectID = -1, mat4 startPos = mat4(1.0f));

	void requestObjectRenderData(int rendererID, vector<vec4>& positions, vector<vec3>& colors, vector<unsigned int>& indices);

private:
	ModelTabel gameModelTable;
	ObjectTable gameObjectTable;
};

#endif // !__GDATAMANAGER__
