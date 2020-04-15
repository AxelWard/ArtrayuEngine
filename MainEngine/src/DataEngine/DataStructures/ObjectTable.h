#pragma once
#ifndef __OBJECTTABLE__
#define __OBJECTTABLE__

#include "Object.h"
#include <vector>

using std::vector;

class ObjectTable {
public:
	ObjectTable() {

	}

	~ObjectTable() {

	}

	void addObject(Object o) {
		for (int i = 0; i < objects.size(); i++) {
			if (o.getObjectID() == objects[i].getObjectID()) {
				return;
			}
		}

		objects.push_back(o);
	}

	int size() {
		return objects.size();
	}

	int getAvailableID() {
		int max = 0;
		for (int i = 0; i < objects.size(); i++) {
			if (!(objects[i].getObjectID() < max)) {
				max = objects[i].getObjectID() + 1;
			}
		}

		return max;
	}

	Object* getObject(int index) {
		return &objects[index];
	}

private:
	vector<Object> objects;
};

#endif // !__OBJECTTABLE__
