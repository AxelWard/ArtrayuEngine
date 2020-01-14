#include "ShaderLoader.h"

#include <iostream>
#include "../FileLoader/FileOpener.h"

GLuint ShaderLoader::loadShader(const char* vertPath, const char* fragPath) {

	GLuint program, vertexShader, fragmentShader;

	const char* vertexBuffer = "";
	const char* fragmentBuffer = "";

	FileOpener f;
	f.loadFile(vertPath, vertexBuffer);
	f.loadFile(fragPath, fragmentBuffer);

	const GLchar* vertSource = vertexBuffer;
	const GLchar* fragSource = fragmentBuffer;

	vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertSource, NULL);
	glCompileShader(vertexShader);

	GLint isCompiled = 0;
	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &isCompiled);
	if (isCompiled == GL_FALSE)
	{
		GLsizei maxLength = 0;
		glGetShaderiv(vertexShader, GL_INFO_LOG_LENGTH, &maxLength);

		GLchar* log = new GLchar[maxLength];
		glGetShaderInfoLog(vertexShader, maxLength, &maxLength, &log[0]);

		std::cout << "Failed to compile vertex shader!\nLOG: " << log << std::endl;

		delete[] log;

		exit(EXIT_FAILURE);
	}

	fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragSource, NULL);
	glCompileShader(fragmentShader);

	isCompiled = 0;
	glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &isCompiled);
	if (isCompiled == GL_FALSE)
	{
		GLsizei maxLength = 0;
		glGetShaderiv(fragmentShader, GL_INFO_LOG_LENGTH, &maxLength);

		GLchar* log = new GLchar[maxLength];
		glGetShaderInfoLog(fragmentShader, maxLength, &maxLength, &log[0]);

		std::cout << "Failed to compile fragment shader!\nLOG: " << log << std::endl;

		delete[] log;

		exit(EXIT_FAILURE);
	}

	program = glCreateProgram();

	glAttachShader(program, vertexShader);
	glAttachShader(program, fragmentShader);
	glLinkProgram(program);

	std::cout << "Successfully created shader!" << std::endl;

	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	return program;
}