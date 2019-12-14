#ifndef APPLICATION_H
#define APPLICATION_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdlib.h> 
#include <iostream>

#include "UI.h"

class Application
{
public:
	Application();
	~Application();

	void executeLoop();
	
	GLFWwindow* window;
	UI* ui;

private:
	static void glfwErrorCallback(int error, const char* description);
};

#endif