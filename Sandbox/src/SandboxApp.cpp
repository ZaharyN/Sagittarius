#include <Sagittarius.h>

class Sandbox : public Sagittarius::Application
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};

Sagittarius::Application* Sagittarius::CreateApplication() 
{
	return new Sandbox();
}