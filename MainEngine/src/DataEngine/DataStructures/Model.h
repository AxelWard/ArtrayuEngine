#pragma once
#ifndef __MODEL__
#define __MODEL__

#include "Mesh.h"

class Model {
public:
	Model() {

	}

	~Model() {

	}

	Mesh m;
	int renderID = -1;
	int modelID = -1;
};

#endif __MODEL__