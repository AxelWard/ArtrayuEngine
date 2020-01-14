#include "GDisplayManager.h"

void GDisplayManager::initDisplay() {
	if (!glfwInit()) {
		std::cout << "Could not initialize GLFW!" << std::endl;
		std::exit(-1);
	}

	mainWindow = glfwCreateWindow(640, 480, "Game Engine", NULL, NULL);
	if (!mainWindow) {
		glfwTerminate();
		std::cout << "Could not initialize window!" << std::endl;
		std::exit(-1);
	}

	glfwMakeContextCurrent(mainWindow);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Could not initialize GLAD!" << std::endl;
		std::exit(-1);
	}

	glViewport(0, 0, 640, 480);
}

void GDisplayManager::updateDisplay() {
	glClearColor(0.0f, 0.2f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

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