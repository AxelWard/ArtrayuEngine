#pragma once
#ifndef __MODELDATARETRIEVER__
#define __MODELDATARETRIEVER__

#include "../../DataStructures/ObjectTable.h"
#include "../../DataStructures/ModelTable.h"

using std::vector;
using glm::vec3;
using glm::vec4;

class ModelDataRetriever {
public:
	ModelDataRetriever(int rendererID, ObjectTable o, ModelTabel m) {
		objectRetrievalTable = o;
		modelRetrievalTable = m;

		rendererTarget = rendererID;
	}

	~ModelDataRetriever() {

	}

	void getPositionData(vector<vec4> &positions);
	void getColorData(vector<vec3>& colors);
	void getIndexData(vector<unsigned int>& indices);

	void setRendererTarget(int rendererID);

private:
	ObjectTable objectRetrievalTable;
	ModelTabel modelRetrievalTable;

	int rendererTarget;
};

#endif