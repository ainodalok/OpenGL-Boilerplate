#ifndef UI_H
#define UI_H

#include <imgui.h>
#include <examples/imgui_impl_glfw.h>
#include <examples/imgui_impl_opengl3.h>

class UI
{
public:
	UI(GLFWwindow* window);
	~UI();

private:
	ImGuiIO* io;
};

#endif