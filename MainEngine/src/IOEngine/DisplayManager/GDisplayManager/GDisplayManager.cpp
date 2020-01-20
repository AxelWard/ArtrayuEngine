#include "GDisplayManager.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}

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
	glfwSetFramebufferSizeCallback(mainWindow, framebuffer_size_callback);

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