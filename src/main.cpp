#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <imgui.h>
#include <examples/imgui_impl_glfw.h>
#include <examples/imgui_impl_opengl3.h>

#include "Application.h"

int main()
{
	//Initializes GLFW window
	Application app;

	while (!glfwWindowShouldClose(app.window))
	{
		int width, height;
		glfwGetFramebufferSize(app.window, &width, &height);
		glViewport(0, 0, width, height);
		glClearColor(0.5f, 0.0f, 0.5f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		
		glfwSwapBuffers(app.window);
		glfwPollEvents();
	}

	return 0;
}