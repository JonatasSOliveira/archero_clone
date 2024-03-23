#include "Scene.h"
#include "config.h"

namespace Game
{
	Scene::Scene(RendererPort *adapter) : VisualElement(adapter, RenderDataDTO{
																																	 Config::scenePositionX,
																																	 Config::scenePositionY,
																																	 Config::sceneWidth,
																																	 Config::sceneHeight,
																																	 "#9999FF"}) {}

	void Scene::onCollision()
	{
		std::cout << "Scene collision" << std::endl;
	}
}
