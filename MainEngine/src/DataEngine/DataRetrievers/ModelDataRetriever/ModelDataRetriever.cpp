#include "ModelDataRetriever.h"

void ModelDataRetriever::getPositionData(vector<vec4>& positions) {
	for (int i = 0; i < objectRetrievalTable.size(); i++) {
		Object* object = objectRetrievalTable.getObject(i);
		Model* model = modelRetrievalTable.getModel(object->getModelID());

		if (model->renderID == rendererTarget) {
			for (int j = 0; j < model->mesh.positions.size(); j++) {
				positions.push_back(model->mesh.positions[j] * object->getObjectMatrix());
			}
		}
	}
}

void ModelDataRetriever::getColorData(vector<vec3>& colors) {
	for (int i = 0; i < objectRetrievalTable.size(); i++) {
		Object* object = objectRetrievalTable.getObject(i);
		Model* model = modelRetrievalTable.getModel(object->getModelID());

		if (model->renderID == rendererTarget) {
			for (int j = 0; j < model->mesh.colors.size(); j++) {
				colors.push_back(model->mesh.colors[j]);
			}
		}
	}
}

void ModelDataRetriever::getIndexData(vector<unsigned int>& indices) {

	unsigned int iter = 0;

	for (int i = 0; i < objectRetrievalTable.size(); i++) {
		Object* object = objectRetrievalTable.getObject(i);
		Model* model = modelRetrievalTable.getModel(object->getModelID());

		if (model->renderID == rendererTarget) {
			for (int j = 0; j < model->mesh.indices.size(); j++) {
				indices.push_back(model->mesh.indices[j] + iter);
			}
			iter += model->mesh.indices.size();
		}
	}
}

void ModelDataRetriever::setRendererTarget(int rendererID) {
	rendererTarget = rendererID;
}