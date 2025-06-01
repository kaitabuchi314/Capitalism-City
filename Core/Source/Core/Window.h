#pragma once
#include <string_view>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Core::Window {

	// Public
	void Initialise(std::string_view title, int width, int height);
	
	void Update();

	bool ShouldClose();

	void Destroy();
	
	// Private
	inline GLFWwindow* m_Window;

}