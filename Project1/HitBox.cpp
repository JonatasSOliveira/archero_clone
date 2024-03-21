#include <SDL.h>
#include "HitBox.h"
#include "VisualElement.h"
#include "Character.h"

using namespace Game;

HitBox::HitBox(
	RendererPort* adapter, const RenderDataDTO& renderDataDTOParam
) : VisualElement(adapter, renderDataDTOParam) {
	this->hitBoxHeight = renderDataDTOParam.heightInMeters + 10;
	this->hitBoxWidth = renderDataDTOParam.widthInMeters + 10;
}

