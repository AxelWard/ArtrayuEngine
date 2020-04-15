#pragma once
#ifndef __RESIZEHANDLER__
#define __RESIZEHANDLER__

#include <GLFW/glfw3.h>

class ResizeHandler {
public:
	static ResizeHandler& getInstance() {
		static ResizeHandler instance;
		return instance;
	}

	static void windowResizeCallback(GLFWwindow* window, int width, int height) {
		getInstance().windowResizeCallbackImplementation(width, height);
	}

	void windowResizeCallbackImplementation(int width, int height);
	bool checkWindowResize();

private:
	ResizeHandler(void) {
		windowResize = false;
	}

	ResizeHandler(ResizeHandler const&);

	bool windowResize;
};

#endif // !__RESIZEHANDLER__
