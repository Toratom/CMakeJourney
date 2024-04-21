include(FetchContent)

#GLM
FetchContent_Declare(
	glm
	GIT_REPOSITORY	https://github.com/g-truc/glm.git
	GIT_TAG 	bf71a834948186f4097caa076cd2663c69a10e1e #tags: 1.0.1
)
FetchContent_MakeAvailable(glm)

#GLFW
FetchContent_Declare(
	glfw
	GIT_REPOSITORY https://github.com/glfw/glfw
	GIT_TAG 7b6aead9fb88b3623e3b3725ebb42670cbe4c579 #tags: 3.4
)
FetchContent_GetProperties(glfw)
if(NOT glfw_POPULATED)
    FetchContent_Populate(glfw)

	set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
	set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
	set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

    add_subdirectory(${glfw_SOURCE_DIR} ${glfw_BINARY_DIR})
endif()

#IMGUI
FetchContent_Declare(
	imgui
	GIT_REPOSITORY https://github.com/ocornut/imgui
	GIT_TAG 231cbee0fc4f59dbe5b8b853a11b08dc84e57c65 #tags: 1.90.5
)
FetchContent_GetProperties(imgui)
if (NOT imgui_POPULATED)
	FetchContent_Populate(imgui)

	add_library(imgui STATIC
		${imgui_SOURCE_DIR}/imgui.h
		${imgui_SOURCE_DIR}/imgui.cpp
		${imgui_SOURCE_DIR}/imgui_draw.cpp
		${imgui_SOURCE_DIR}/imgui_demo.cpp
		${imgui_SOURCE_DIR}/imgui_tables.cpp
		${imgui_SOURCE_DIR}/imgui_widgets.cpp
		
		${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
		${imgui_SOURCE_DIR}/backends/imgui_impl_vulkan.cpp
	)
	target_include_directories(imgui PUBLIC
	  ${imgui_SOURCE_DIR}
	  ${imgui_SOURCE_DIR}/backends
	)
	find_package(Vulkan REQUIRED)
	target_link_libraries(imgui PRIVATE glfw Vulkan::Vulkan)
endif()