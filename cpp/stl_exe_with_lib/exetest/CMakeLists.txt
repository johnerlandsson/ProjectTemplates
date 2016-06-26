project(exetest)

set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -O1")

set(${PROJECT_NAME}_headers exetest_config.h TestClassExe.h)
set(${PROJECT_NAME}_sources main.cpp TestClassExe.cpp)

include_directories(../libtest)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_headers}
				${${PROJECT_NAME}_sources})

target_link_libraries(${PROJECT_NAME} libtest)

install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
