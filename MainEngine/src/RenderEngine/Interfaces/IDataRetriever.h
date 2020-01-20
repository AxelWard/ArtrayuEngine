#pragma once
#ifndef __IDATARETRIEVER__
#define __IDATARETRIEVER__

#include <vector>
#include <glm/glm.hpp>

using glm::vec3;
using std::vector;

class IDataRetriever {
public:
	IDataRetriever() {

	}

	~IDataRetriever() {

	}

	virtual void getData(vector<vec3>& positions, vector<vec3>& colors) = 0;

private:
	
};

#endif // !__IDATARETREIVER__
