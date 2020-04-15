#include "GDataManager.h"

void GDataManager::updateData() {

}

void GDataManager::initializeModelTable() {

}

void GDataManager::bindModelToRenderer(int modelID, int rendererID) {
	gameModelTable.getModel(modelID)->renderID = rendererID;
}

void GDataManager::createBaseModel() {
	BaseModelBuilder b;
	gameModelTable.addModel(b.buildBaseModel());
}

Model* GDataManager::getModelFromTable(int modelID) {
	return gameModelTable.getModel(modelID);
}

void GDataManager::createObject(int modelID, int objectID, mat4 startPos) {
	Object o = Object();
	o.setModelID(modelID);
	o.setObjectMatrix(startPos);
	if (objectID != -1) {
		o.setObjectID(objectID);
	}
	else {
		o.setObjectID(gameObjectTable.getAvailableID());
	}
	
	gameObjectTable.addObject(o);
}

void GDataManager::requestObjectRenderData(int rendererID, vector<vec4>& positions, vector<vec3>& colors, vector<unsigned int>& indices) {
	ModelDataRetriever m = ModelDataRetriever(rendererID, gameObjectTable, gameModelTable);

	m.getPositionData(positions);
	m.getColorData(colors);
	m.getIndexData(indices);
}