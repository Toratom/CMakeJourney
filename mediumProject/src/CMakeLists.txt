set(HEADER_LIST "${CMAKE_SOURCE_DIR}/include/mediumProject/point.h"
                "${CMAKE_SOURCE_DIR}/include/mediumProject/matrix.h") #Pour faciliter l'ajout des headers dans l'IDE

add_library(geo STATIC point.cpp ${HEADER_LIST}) #Permet de g�n�rer une target biblioth�que,
												 #La target est geo et est compos� des fichiers sources
												 #point.cpp, on pr�cise les headers pour l'IDE
target_include_directories(geo PUBLIC ${CMAKE_SOURCE_DIR}/include/)
target_compile_features(geo PUBLIC cxx_std_11)

# IDEs should put the headers in a nice place
#source_group(
#  TREE "${PROJECT_SOURCE_DIR}/include"
#  PREFIX "Header Files"
#  FILES ${HEADER_LIST})