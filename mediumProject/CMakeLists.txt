cmake_minimum_required(VERSION 3.28) #Premi�re ligne d'un CMake, d�finit la version minimum de CMake requise
project(mediumProject LANGUAGES CXX) #Permet de d�finir le nom du projet,
                                    #on peut optionnellement pr�ciser le langage,
									#ici CXX=C++(la version et un description du projet)

add_subdirectory(src) #D�l�gue la cr�ation des biblioth�ques (va cr�er la target geo)

add_executable(app main.cpp) #Permet de d�finir une target de type executable, ici notre executable s'appelle app
					         #Il ne d�pend directement que d'un fichier source main.cpp
target_compile_features(app PUBLIC cxx_std_11) #Permet de d�finir la version minimum de C++ compatible avec une target
target_link_libraries(app PUBLIC geo) #Permet de link une target � une biblioth�que
									  #(ici app d�pend de la bilbioth�que geo)