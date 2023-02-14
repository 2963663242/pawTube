

find_package(Qt5 COMPONENTS Widgets Network REQUIRED)
find_package(Qt5Network)

# 从文件夹从获取文件的决定路径
file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.h" "${CMAKE_CURRENT_SOURCE_DIR}/*.ui" "${CMAKE_CURRENT_SOURCE_DIR}/*.qrc")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# 设置vs调试目录为输出目录
set_target_properties(${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "$(OutDir)")

#添加编译选项(下面是添加以utf-8解码，避免中文跨平台乱码)
target_compile_options(${PROJECT_NAME} PUBLIC "/utf-8")

add_definitions(-DUNICODE -D_UNICODE)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Network)