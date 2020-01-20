#include <GLFW/glfw3.h>

#include "Interfaces/IDisplayManager.h"
#include "Interfaces/IRenderManager.h"
#include "Interfaces/IDataManager.h"

#include "../IOEngine/DisplayManager/GDisplayManager/GDisplayManager.h"
#include "../RenderEngine/RenderManager/GRenderManager/GRenderManager.h"
#include "../DataEngine/DataManager/GDataManager/GDataManager.h"

int main() {

	// Setting up DisplayManager interface
	GDisplayManager GDisM;
	IDisplayManager& DisM = GDisM;

	// Setting up RenderManager interface
	GRenderManager GRM;
	IRenderManager& RM = GRM;

	// Setting up DataManager interface
	GDataManager GDatM;
	IDataManager& DatM = GDatM;

	// Main Loop
	DisM.initDisplay();
	DatM.initializeModelTable();

	// Create Base Model and Renderer
	RM.createBaseRenderer();
	DatM.createBaseModel();

	// Bind Base Model to Base Renderer
	DatM.bindModelToRenderer(0, 0);

	while (!DisM.shouldDisplayClose()) {
		RM.render();

		DisM.updateDisplay();
		DatM.updateData();
	}

	DisM.closeDisplay();
	RM.shutdown();

	return 0;
}