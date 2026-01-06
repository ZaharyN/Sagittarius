#pragma once

#ifdef SGT_PLATFORM_WINDOWS
	
extern Sagittarius::Application* Sagittarius::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Sagittarius::CreateApplication();
	app->Run();
	delete app;
}
#endif