#include "GDataManager.h"

void GDataManager::updateData() {

}

void GDataManager::initializeModelTable() {

}

void GDataManager::bindModelToRenderer(int modelID, int rendererID) {
	gameModelTable.getModel(modelID)->renderID = rendererID;
}

void GDataManager::createBaseModel() {
	Model temp;

	vector<vec3> tempPositions;
	vector<vec3> tempColors;
	vector<unsigned int> tempIndices;

	// Front
	tempPositions.push_back(vec3(0.5f,  0.5f,  0.5f));
	tempPositions.push_back(vec3(-0.5f, 0.5f,  0.5f));
	tempPositions.push_back(vec3(-0.5f, -0.5f, 0.5f));
	tempPositions.push_back(vec3(0.5f,  -0.5f, 0.5f));

	tempColors.push_back(vec3(0.0f, 0.0f, 1.0f));
	tempColors.push_back(vec3(0.0f, 0.0f, 1.0f));
	tempColors.push_back(vec3(0.0f, 0.0f, 1.0f));
	tempColors.push_back(vec3(0.0f, 0.0f, 1.0f));

	tempIndices.push_back(0);
	tempIndices.push_back(1);
	tempIndices.push_back(2);
	tempIndices.push_back(1);
	tempIndices.push_back(2);
	tempIndices.push_back(3);

	// Back
	tempPositions.push_back(vec3(0.5f,  0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, 0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, 0.5f, -0.5f));
	tempPositions.push_back(vec3(0.5f,  0.5f, -0.5f));

	tempColors.push_back(vec3(0.0f, 0.0f, 0.7f));
	tempColors.push_back(vec3(0.0f, 0.0f, 0.7f));
	tempColors.push_back(vec3(0.0f, 0.0f, 0.7f));
	tempColors.push_back(vec3(0.0f, 0.0f, 0.7f));

	tempIndices.push_back(4);
	tempIndices.push_back(5);
	tempIndices.push_back(6);
	tempIndices.push_back(5);
	tempIndices.push_back(6);
	tempIndices.push_back(7);

	// Left
	tempPositions.push_back(vec3(-0.5f, 0.5f,  0.5f));
	tempPositions.push_back(vec3(-0.5f, 0.5f,  -0.5f));
	tempPositions.push_back(vec3(-0.5f, -0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, -0.5f, 0.5f));

	tempColors.push_back(vec3(0.0f, 1.0f, 0.0f));
	tempColors.push_back(vec3(0.0f, 1.0f, 0.0f));
	tempColors.push_back(vec3(0.0f, 1.0f, 0.0f));
	tempColors.push_back(vec3(0.0f, 1.0f, 0.0f));

	tempIndices.push_back(8);
	tempIndices.push_back(9);
	tempIndices.push_back(10);
	tempIndices.push_back(9);
	tempIndices.push_back(10);
	tempIndices.push_back(11);

	// Right
	tempPositions.push_back(vec3(0.5f, 0.5f,  0.5f));
	tempPositions.push_back(vec3(0.5f, 0.5f,  -0.5f));
	tempPositions.push_back(vec3(0.5f, -0.5f, -0.5f));
	tempPositions.push_back(vec3(0.5f, -0.5f, 0.5f));

	tempColors.push_back(vec3(0.0f, 0.7f, 0.0f));
	tempColors.push_back(vec3(0.0f, 0.7f, 0.0f));
	tempColors.push_back(vec3(0.0f, 0.7f, 0.0f));
	tempColors.push_back(vec3(0.0f, 0.7f, 0.0f));

	tempIndices.push_back(12);
	tempIndices.push_back(13);
	tempIndices.push_back(14);
	tempIndices.push_back(13);
	tempIndices.push_back(14);
	tempIndices.push_back(15);

	// Top
	tempPositions.push_back(vec3(0.5f,  0.5f, 0.5f));
	tempPositions.push_back(vec3(0.5f,  0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, 0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, 0.5f, 0.5f));

	tempColors.push_back(vec3(1.0f, 0.0f, 0.0f));
	tempColors.push_back(vec3(1.0f, 0.0f, 0.0f));
	tempColors.push_back(vec3(1.0f, 0.0f, 0.0f));
	tempColors.push_back(vec3(1.0f, 0.0f, 0.0f));

	tempIndices.push_back(16);
	tempIndices.push_back(17);
	tempIndices.push_back(18);
	tempIndices.push_back(17);
	tempIndices.push_back(18);
	tempIndices.push_back(19);

	// Bottom
	tempPositions.push_back(vec3(0.5f,  -0.5f, 0.5f));
	tempPositions.push_back(vec3(0.5f,  -0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, -0.5f, -0.5f));
	tempPositions.push_back(vec3(-0.5f, -0.5f, 0.5f));

	tempColors.push_back(vec3(0.7f, 0.0f, 0.0f));
	tempColors.push_back(vec3(0.7f, 0.0f, 0.0f));
	tempColors.push_back(vec3(0.7f, 0.0f, 0.0f));
	tempColors.push_back(vec3(0.7f, 0.0f, 0.0f));

	tempIndices.push_back(20);
	tempIndices.push_back(21);
	tempIndices.push_back(22);
	tempIndices.push_back(21);
	tempIndices.push_back(22);
	tempIndices.push_back(23);

	temp.m.positions = tempPositions;
	temp.m.colors = tempColors;
	temp.m.indices = tempIndices;

	temp.modelID = 0;

	gameModelTable.addModel(temp);
}