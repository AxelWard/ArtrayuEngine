#pragma once
#ifndef __OBJECT__
#define __OBJECT__

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using glm::mat4;

class Object {
public:
	Object() {
		objectMatrix = mat4(1.0f);
	}

	~Object() {

	}

	int getObjectID() {
		return objectID;
	}

	int getModelID() {
		return modelID;
	}

	void setObjectID(int id) {
		objectID = id;
	}

	void setModelID(int id) {
		modelID = id;
	}

	mat4 getObjectMatrix() {
		return objectMatrix;
	}

	void rotateX(float xRot) {
		objectMatrix = glm::rotate(objectMatrix, glm::radians(xRot), glm::vec3(1.0f, 0.0f, 0.0f));
	}

	void rotateY(float yRot) {
		objectMatrix = glm::rotate(objectMatrix, glm::radians(yRot), glm::vec3(0.0f, 1.0f, 0.0f));
	}

	void rotateZ(float zRot) {
		objectMatrix = glm::rotate(objectMatrix, glm::radians(zRot), glm::vec3(0.0f, 0.0f, 1.0f));
	}

	void translateX(float xTrans) {
		objectMatrix = glm::translate(objectMatrix, glm::vec3(xTrans, 0.0f, 0.0f));
	}

	void translateY(float yTrans) {
		objectMatrix = glm::translate(objectMatrix, glm::vec3(0.0f, yTrans, 0.0f));
	}

	void translateZ(float zTrans) {
		objectMatrix = glm::translate(objectMatrix, glm::vec3(0.0f, 0.0f, zTrans));
	}

	void scaleX(float xScale) {
		objectMatrix = glm::scale(objectMatrix, glm::vec3(xScale, 0.0f, 0.0f));
	}

	void scaleY(float yScale) {
		objectMatrix = glm::scale(objectMatrix, glm::vec3(0.0f, yScale, 0.0f));
	}

	void scaleZ(float zScale) {
		objectMatrix = glm::scale(objectMatrix, glm::vec3(0.0f, 0.0f, zScale));
	}

	void setObjectMatrix(mat4 m) {
		objectMatrix = m;
	}

private:
	int objectID = 0;
	int modelID = 0;
	mat4 objectMatrix;
};

#endif // !__OBJECT__
