#pragma once

#ifdef SGT_PLATFORM_WINDOWS
	
extern Sagittarius::Application* Sagittarius::CreateApplication();

int main(int argc, char** argv)
{
	Sagittarius::Log::Init();
	SGT_CORE_WARN("Initialized Log!");
	SGT_INFO("Hello!");

	auto app = Sagittarius::CreateApplication();
	app->Run();
	delete app;
}
#endif