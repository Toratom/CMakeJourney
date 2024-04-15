cmake_minimum_required(VERSION 3.28) #Première ligne d'un CMake, définit la version minimum de CMake requise
project(mediumProject LANGUAGES CXX) #Permet de définir le nom du projet,
                                    #on peut optionnellement préciser le langage,
									#ici CXX=C++(la version et un description du projet)

add_subdirectory(src) #Délègue la création des bibliothèques (va créer la target geo)

add_executable(app main.cpp) #Permet de définir une target de type executable, ici notre executable s'appelle app
					         #Il ne dépend directement que d'un fichier source main.cpp
target_compile_features(app PUBLIC cxx_std_11) #Permet de définir la version minimum de C++ compatible avec une target
target_link_libraries(app PUBLIC geo) #Permet de link une target à une bibliothèque
									  #(ici app dépend de la bilbiothèque geo)