#include "ResizeHandler.h"

#include <glad/glad.h>

void ResizeHandler::windowResizeCallbackImplementation(int width, int height) {
	glViewport(0, 0, width, height);
	windowResize = true;
}

bool ResizeHandler::checkWindowResize() {
	if (windowResize) {
		windowResize = false;
		return true;
	}

	return false;
}