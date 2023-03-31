#pragma once

#include "Core.h"
#include "Event/Event.h"

namespace Kngine {

	class KNGINE_API Application
	{

	public:

		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in a client
	Application* CreateApplication();


}

