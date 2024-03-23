#include "Scene.h"
#include "config.h"

using namespace Game;

Scene::Scene(RendererPort* adapter) : VisualElement(adapter, RenderDataDTO{
		Config::scenePositionX,
		Config::scenePositionY,
		Config::sceneWidth,
		Config::sceneHeight,
		"#0000FF"
	}
) {

}

void Scene::onCollision() {
	std::cout << "Scene collision" << std::endl;
}