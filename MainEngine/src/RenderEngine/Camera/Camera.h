#pragma once
#ifndef __CAMERA__
#define __CAMERA__

#include <glm/glm.hpp>

using glm::mat4;
using glm::vec3;

class Camera {
public:
	Camera() {
		mat4 viewMatrix = mat4(0.0f);
		mat4 perspectiveMatrix = mat4(0.0f);
		location = vec3(0.0f, 0.0f, 0.0f);
	}

	~Camera() {

	}

	mat4 getViewMatrix() {
		return viewMatrix;
	}

	mat4 getPerspectiveMatrix() {
		return perspectiveMatrix;
	}

	void updatePerspectiveMatrix() {

	}

private:
	mat4 viewMatrix;
	mat4 perspectiveMatrix;

	vec3 location;
};

#endif // !__CAMERA__
