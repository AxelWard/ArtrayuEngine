#version 330 core

in vec3 posIn;
in vec3 colorIn;
in vec3 normalIn;

out vec4 fragColor;

void main() {
	gl_Position = vec4(posIn, 1.0);
	fragColor = vec4(colorIn, 1.0);
}