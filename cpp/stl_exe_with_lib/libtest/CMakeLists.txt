project(libtest)

set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O1")

set(${PROJECT_NAME}_headers LibClass.h)
set(${PROJECT_NAME}_sources LibClass.cpp)

find_package(Doxygen)
if(DOXYGEN_FOUND)
	set(DOXYGEN_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/../doc)
	file(MAKE_DIRECTORY ${DOXYGEN_OUTPUT_PATH})
	configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
	add_custom_target(doc 
			${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile 
			WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
			COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)

add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_headers}
			${${PROJECT_NAME}_sources})

install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
