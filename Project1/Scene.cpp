#include "Scene.h"
#include "ConfigManager.h"

ConfigManager configManager = ConfigManager();

Scene::Scene(RendererPort* adapter) : VisualElement(adapter, new RenderDataDTO(
	configManager.getScenePositionX(),
	configManager.getScenePositionY(),
	configManager.getSceneWith(),
	configManager.getSceneHeight(),
	"#0000FF"
)) {

}