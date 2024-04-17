include(FetchContent)

FetchContent_Declare(
	glm
	GIT_REPOSITORY	https://github.com/g-truc/glm.git
	GIT_TAG 	bf71a834948186f4097caa076cd2663c69a10e1e #refs/tags/1.0.1
) #Premiere étape consiste à décrire ce qu'on veut fetch, c'est représenté par ici variable glm
FetchContent_MakeAvailable(glm) #Ensuite on fait, et rend disponible le contenu (ce charge de add_subdirectory)