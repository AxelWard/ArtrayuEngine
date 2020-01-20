#pragma once
#ifndef __MODELTABLE__
#define __MODELTABLE__

#include <iostream>
#include <vector>
#include "Model.h"

using std::vector;

class ModelTabel {
public:
	ModelTabel() {

	}

	~ModelTabel() {

	}

	void addModel(Model m) {
		for (int i = 0; i < models.size(); i++) {
			if (m.modelID == models[i].modelID) {
				std::cout << "Model being added has conflicting ID!" << std::endl;
				return;
			}
		}

		models.push_back(m);
	}

	void removeModel() {

	}

	Model* getModel(int id) {
		for (int i = 0; i < models.size(); i++) {
			if (id == models[i].modelID) {
				return &models[i];
			}
		}

		std::cout << "Could not find a model with id: " << id << std::endl;
		Model empty;
		return &empty;
	}

private:
	vector<Model> models;
};

#endif // !__MODELTABLE__
