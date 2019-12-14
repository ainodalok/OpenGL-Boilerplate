#ifndef APPLICATION_H
#define APPLICATION_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Application
{
public:
	Application();
	~Application();
	
	GLFWwindow* window;

private:
	static void glfwErrorCallback(int error, const char* description);
};

#endif