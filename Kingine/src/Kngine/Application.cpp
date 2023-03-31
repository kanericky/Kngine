#include "kepch.h"
#include "Application.h"

#include "Kngine/Event/ApplicationEvent.h"
#include "Kngine/Log.h"

namespace Kngine {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		KE_CORE_TRACE(e);

		while (true);
	}

}
