#include <GLFW/glfw3.h>

#include "Interfaces/IDisplayManager.h"
#include "Interfaces/IRenderManager.h"

#include "../IOEngine/DisplayManager/GDisplayManager/GDisplayManager.h"
#include "../RenderEngine/RenderManager/GRenderManager/GRenderManager.h"

int main() {

	// Setting up DisplayManager interface
	GDisplayManager IOM;
	IDisplayManager& DM = IOM;

	// Setting up RenderManager interface
	GRenderManager GRM;
	IRenderManager& RM = GRM;

	// Main Loop
	DM.initDisplay();

	while (!DM.shouldDisplayClose()) {
		RM.prepare();
		RM.render();

		DM.updateDisplay();
	
		RM.cleanup();
	}

	DM.closeDisplay();

	return 0;
}