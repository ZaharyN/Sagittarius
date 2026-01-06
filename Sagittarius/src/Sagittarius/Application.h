#pragma once

#include "Core.h"

namespace Sagittarius
{

	class SAGITTARIUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

