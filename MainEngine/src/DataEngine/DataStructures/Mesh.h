#pragma once
#ifndef __MESH__
#define __MESH__

#include <vector>
#include <glm/glm.hpp>

using std::vector;
using glm::vec4;
using glm::vec3;
using glm::vec2;

class Mesh {
public:
	Mesh() {

	}

	~Mesh() {

	}

	vector<vec4> positions;
	vector<vec3> colors;
	vector<vec4> normals;
	vector<vec2> texCoords;
	vector<unsigned int> indices;
};

#endif // !__MESH__
