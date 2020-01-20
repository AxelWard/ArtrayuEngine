#pragma once
#ifndef __DISPLAYMANAGER__
#define __DISPLAYMANAGER__

#include "../../../LogicEngine/Interfaces/IDisplayManager.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <iostream>

class GDisplayManager : public IDisplayManager {
public:
	GDisplayManager() {
		mainWindow = NULL;
	}

	~GDisplayManager() {
		
	}

	void initDisplay();
	void updateDisplay();
	void closeDisplay();
	bool shouldDisplayClose();

private:
	GLFWwindow* mainWindow;
};

#endif