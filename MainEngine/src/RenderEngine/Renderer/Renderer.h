#pragma once
#ifndef __RENDERER__
#define __RENDERER__

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <iostream>
#include <vector>

using glm::vec3;
using glm::vec4;
using std::vector;

class Renderer {
public:
	Renderer() {

	}

	~Renderer() {

	}

	void setProgramID(GLuint i) {
		programID = i;
	}

	unsigned int getLastIndex() {
		unsigned int last = 0;
		for (int i = 0; i < indices.size(); i++) {
			if (indices[i] > last) {
				last = indices[i];
			}
		}
		return last;
	}

	vector<vec4>& getPositionVector() {
		return vertices;
	}

	vector<vec3>& getColorVector() {
		return colors;
	}

	vector<unsigned int>& getIndexVector() {
		return indices;
	}

	void clearData() {
		vertices.clear();
		indices.clear();
		colors.clear();
	}

	int getID() {
		return id;
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

	vector<unsigned int> indices;
	vector<vec4> vertices;
	vector<vec3> colors;
};

#endif