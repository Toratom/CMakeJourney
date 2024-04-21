cmake_minimum_required(VERSION 3.28)
project(vulkanProject LANGUAGES CXX)

#GLM and GLFW
add_subdirectory(extern)

add_executable(app main.cpp)
target_compile_features(app PUBLIC cxx_std_17)
find_package(Vulkan REQUIRED)
target_link_libraries(app PUBLIC
	glm::glm
	glfw
	Vulkan::Vulkan
	imgui
)