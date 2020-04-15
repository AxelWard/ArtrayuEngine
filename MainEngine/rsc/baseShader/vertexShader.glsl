#version 330 core

in vec4 posIn;
in vec3 colorIn;
in vec3 normalIn;

out vec4 fragColor;

void main() {
	gl_Position = posIn;
	fragColor = vec4(colorIn, 1.0);
}