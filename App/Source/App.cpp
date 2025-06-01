#include <Core/Core.h>

int main()
{
	Core::Window::Initialise("Capitalism City", 640, 480);

	while (!Core::Window::ShouldClose())
	{
		Core::Window::Update();
	}

	Core::Window::Destroy();
}