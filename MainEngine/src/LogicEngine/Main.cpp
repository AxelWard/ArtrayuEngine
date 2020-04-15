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

	// Setting up DataManager interface
	GDataManager GDatM;
	IDataManager& DatM = GDatM;

	// Setting up RenderManager interface
	GRenderManager GRenM(DatM);
	IRenderManager& RenM = GRenM;

	// Main Loop
	DisM.initDisplay();
	DatM.initializeModelTable();

	// Create base model, Base Renderer, and then bind them
	int renderer = RenM.createBaseRenderer();
	DatM.createBaseModel();
	DatM.bindModelToRenderer(0, renderer);
	DatM.createObject(0, 1);

	while (!DisM.shouldDisplayClose()) {
		// Check if display has resized
		if (DisM.isWindowSizeUpdate()) {
			RenM.updatePerspectiveMatrices(DisM.getDisplayWidth(), DisM.getDisplayHeight());
		}

		RenM.render();

		DisM.updateDisplay();
		DatM.updateData();
	}

	DisM.closeDisplay();
	RenM.shutdown();

	return 0;
}