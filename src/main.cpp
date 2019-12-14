#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Application.h"

int main()
{
	//Initializes GLFW window
	Application app;

	app.executeLoop();
	
	return 0;
}