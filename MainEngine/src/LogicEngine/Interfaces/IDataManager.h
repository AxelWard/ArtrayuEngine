#pragma once
#ifndef __IDATAMANAGER__
#define __IDATAMANAGER__

#include "../../DataEngine/DataStructures/Model.h"
#include <glm/glm.hpp>

using glm::mat4;

class IDataManager {
public:
	IDataManager() {

	}

	~IDataManager() {

	}

	virtual void updateData() = 0;
	virtual void initializeModelTable() = 0;
	virtual void createBaseModel() = 0;

	virtual void bindModelToRenderer(int modelID, int rendererID) = 0;
	virtual Model* getModelFromTable(int modelID) = 0;
	virtual void createObject(int modelID, int objectID = -1, mat4 startPos = mat4(1.0f)) = 0;

	virtual void requestObjectRenderData(int rendererID, vector<vec4>& positions, vector<vec3>& colors, vector<unsigned int>& indices) = 0;
};

#endif // !__IDATAMANAGER__

