#pragma once
#ifndef __RDATARETRIEVER__
#define __RDATARETRIEVER__

#include "../../RenderEngine/Interfaces/IDataRetriever.h"

class RDataRetriever : public IDataRetriever {
public:
	RDataRetriever() {

	}

	~RDataRetriever() {

	}

	void getData(vector<vec3>& positions, vector<vec3>& colors);
};

#endif // !__RDATARETREIVER__
