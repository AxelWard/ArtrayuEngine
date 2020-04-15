#pragma once
#ifndef __DISPLAYMANAGER__
#define __DISPLAYMANAGER__

#include "../../../LogicEngine/Interfaces/IDisplayManager.h"
#include "../../InputHandlers/ResizeHandler/ResizeHandler.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <iostream>

class GDisplayManager : public IDisplayManager {
public:
	GDisplayManager() : resizeHandle(ResizeHandler::getInstance()) {
		mainWindow = NULL;
	}

	~GDisplayManager() {
		
	}

	void initDisplay();
	void updateDisplay();
	void closeDisplay();
	bool shouldDisplayClose();

	bool isWindowSizeUpdate();
	int getDisplayWidth();
	int getDisplayHeight();


private:
	GLFWwindow* mainWindow;

	ResizeHandler& resizeHandle;
};

#endif