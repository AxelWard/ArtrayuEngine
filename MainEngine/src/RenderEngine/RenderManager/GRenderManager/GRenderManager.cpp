#include "GRenderManager.h"

#include <iostream>

void GRenderManager::render() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < renderers.size(); i++) {
		renderers[i]->prepare();
		renderers[i]->render();
		renderers[i]->cleanup();
	}
}

void GRenderManager::createBaseRenderer() {
	// Create Shader Loader Interface
	ShaderLoader sLoader;
	IShaderLoader& loader = sLoader;

	GLuint program = loader.loadShader("C:/GameEngine/MainEngine/rsc/baseShader/vertexShader.glsl", "C:/GameEngine/MainEngine/rsc/baseShader/fragmentShader.glsl");

	BaseRenderer* r = new BaseRenderer();
	r->setProgramID(program);
	r->initialize();

	renderers.push_back(r);
}

void GRenderManager::shutdown() {
	for (int i = 0; i < renderers.size(); i++) {
		delete renderers[i];
	}
}