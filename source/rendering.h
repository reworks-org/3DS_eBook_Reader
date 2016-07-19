#ifndef RENDERING_H
#define RENDERING_H

#include "container_3ds.h"

class Renderer
{
public:
	void StartDrawingTop();
	void StartDrawingTopRight();
	void StartDrawingBottom();
	void StopDrawing();
	void Render();

	container_3ds c3ds;
	litehtml::context html_context;
};

#endif