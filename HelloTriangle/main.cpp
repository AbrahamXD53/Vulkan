#include <vulkan/vulkan.h>

#include <functional>
#include <iostream>
#include <Windows.h>

#include "VkApplication.h"

#ifdef WIN323
int WINAPI WinMain(HINSTANCE hThisInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow) {
	VkApplication app;
	try
	{
		app.Run();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
#else
int main() {
	VkApplication app;
	try
	{
		app.Run();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
	return 0;
}
#endif // Win32
