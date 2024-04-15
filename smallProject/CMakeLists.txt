cmake_minimum_required(VERSION 3.28) #Première ligne d'un CMake, définit la version minimum de CMake requise
project(smallProject LANGUAGES CXX) #Permet de définir le nom du projet,
                                    #on peut optionnellement préciser le langage,
									#ici CXX=C++(la version et un description du projet)

add_executable(app main.cpp point.cpp point.h) #Permet de définir une target de type executable,
											   #ici notre executable s'appelle app
											   #Ensuite on liste les fichiers sources de l'executable
target_compile_features(app PUBLIC cxx_std_11) #Permet de définir la version minimum de C++ compatible avec une target