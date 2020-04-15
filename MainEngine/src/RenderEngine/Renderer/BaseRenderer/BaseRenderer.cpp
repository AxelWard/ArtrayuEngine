#include "BaseRenderer.h"

#include <iostream>

void BaseRenderer::initialize() {
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &vertexBuffer);
	glGenBuffers(1, &colorBuffer);
	glGenBuffers(1, &normalBuffer);
	glGenBuffers(1, &indexBuffer);

	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
	vertexPos = glGetAttribLocation(programID, "posIn");
	glVertexAttribPointer(vertexPos, 4, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexPos);

	glBindBuffer(GL_ARRAY_BUFFER, colorBuffer);
	colorPos = glGetAttribLocation(programID, "colorIn");
	glVertexAttribPointer(colorPos, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(colorPos);

	glBindBuffer(GL_ARRAY_BUFFER, normalBuffer);
	normalPos = glGetAttribLocation(programID, "normalIn");
	glVertexAttribPointer(normalPos, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(normalPos);
}

void BaseRenderer::prepare() {
	/*
	vertices.push_back(vec3(0.5f, 0.5f, 0.0f));
	vertices.push_back(vec3(0.5f, -0.5f, 0.0f));
	vertices.push_back(vec3(-0.5f, -0.5f, 0.0f));
	vertices.push_back(vec3(-0.5f, 0.5f, 0.0f));

	colors.push_back(vec3(1.0f, 0.0f, 0.0f));
	colors.push_back(vec3(0.0f, 0.0f, 1.0f));
	colors.push_back(vec3(0.0f, 1.0f, 0.0f));
	colors.push_back(vec3(1.0f, 1.0f, 1.0f));

	indices.push_back(0);
	indices.push_back(1);
	indices.push_back(3);
	indices.push_back(1);
	indices.push_back(2);
	indices.push_back(3);
	*/

	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vec4) * vertices.size(), &vertices[0], GL_STATIC_DRAW);

	glBindBuffer(GL_ARRAY_BUFFER, colorBuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vec3) * colors.size(), &colors[0], GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * indices.size(), &indices[0], GL_STATIC_DRAW);
}

void BaseRenderer::render() {
	glUseProgram(programID);
	glBindVertexArray(VAO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
	glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, 0);
}

void BaseRenderer::cleanup() {
	
}