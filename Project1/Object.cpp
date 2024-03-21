#include "Object.h"


namespace Game {
    Object::Object(
        RendererPort* adapter, const RenderDataDTO& renderDataDTO
    ) : rendererPort(adapter) {
        this->positionXInMeters = renderDataDTO.positionXInMeters;
        this->positionYInMeters = renderDataDTO.positionYInMeters;
    }
}
