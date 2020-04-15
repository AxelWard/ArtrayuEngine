#include "GDisplayManager.h"

void GDisplayManager::initDisplay() {
	if (!glfwInit()) {
		std::cout << "Could not initialize GLFW!" << std::endl;
		std::exit(-1);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	mainWindow = glfwCreateWindow(640, 480, "Game Engine", NULL, NULL);
	if (!mainWindow) {
		glfwTerminate();
		std::cout << "Could not initialize window!" << std::endl;
		std::exit(-1);
	}

	glfwMakeContextCurrent(mainWindow);

	resizeHandle = ResizeHandler::getInstance();
	glfwSetFramebufferSizeCallback(mainWindow, &ResizeHandler::windowResizeCallback);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Could not initialize GLAD!" << std::endl;
		std::exit(-1);
	}

	glViewport(0, 0, 640, 480);
}

void GDisplayManager::updateDisplay() {
	glfwSwapBuffers(mainWindow);
	glfwPollEvents();
}

void GDisplayManager::closeDisplay() {
	glfwTerminate();
}

bool GDisplayManager::shouldDisplayClose() {
	if (glfwWindowShouldClose(mainWindow)) {
		return(true);
	}
	else {
		return(false);
	}
}

bool GDisplayManager::isWindowSizeUpdate() {
	return resizeHandle.checkWindowResize();
}

int GDisplayManager::getDisplayWidth() {
	int width = 0;
	glfwGetWindowSize(mainWindow, &width, NULL);
	return width;
}

int GDisplayManager::getDisplayHeight() {
	int height = 0;
	glfwGetWindowSize(mainWindow, NULL, &height);
	return height;
}