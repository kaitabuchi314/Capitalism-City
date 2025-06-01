#include <Core/Window.h>
#include <Core/Debug.h>

namespace Core::Window {

	void Initialise(std::string_view title, int width, int height)
	{
		C_ASSERT(glfwInit());
		m_Window = glfwCreateWindow(width, height, title.data(), NULL, NULL);
		C_ASSERT(m_Window);

		glfwMakeContextCurrent(m_Window); // (Documentation | GLFW, 2025)

		C_ASSERT(gladLoadGLLoader((GLADloadproc)glfwGetProcAddress));
	}

	void Update()
	{
		// rendering test
		glClearColor(0, 1, 1, 1);
		glClear(GL_COLOR_BUFFER_BIT | GL_ACCUM_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

		glfwSwapBuffers(m_Window);
		glfwPollEvents(); // (Documentation | GLFW, 2025)
	}

	bool ShouldClose()
	{
		return glfwWindowShouldClose(m_Window); // (Documentation | GLFW, 2025)
	}

	void Destroy()
	{
		glfwTerminate(); // (Documentation | GLFW, 2025)
	}

}

// References
// Documentation | GLFW, Retrieved 2025, https://www.glfw.org/documentation.html