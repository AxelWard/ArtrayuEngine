#pragma once
#ifndef __RENDERER__
#define __RENDERER__

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <iostream>

using glm::vec3;

class Renderer {
public:
	Renderer() {

	}

	~Renderer() {

	}

	void setProgramID(GLuint i) {
		programID = i;
	}

	virtual void prepare() {

	}

	virtual void render() {
		
	}

	virtual void cleanup() {

	}

	virtual void initialize() {

	}

protected:
	int id = -1;
	int numVertices = 0;

	GLuint programID = -1;
	GLuint VAO = -1;

	GLuint vertexBuffer = -1;
	GLuint colorBuffer = -1;
	GLuint normalBuffer = -1;
	GLuint indexBuffer = -1;

	GLint vertexPos = -1;
	GLint colorPos = -1;
	GLint normalPos = -1;
};

#endif