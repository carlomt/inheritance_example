#----------------------------------------------------------------------------
# Setup the project
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
project(inheritance_example)

#----------------------------------------------------------------------------
# Locate sources and headers for this project
#
include_directories(${PROJECT_SOURCE_DIR}/include)
#file(GLOB pkg_sources ${PROJECT_SOURCE_DIR}/src/*.cc)
file(GLOB pkg_headers ${PROJECT_SOURCE_DIR}/include/*.hh)

#----------------------------------------------------------------------------
# Set total list of headers and sources
#
#set(sources ${pkg_sources})
set(headers ${pkg_headers})

#----------------------------------------------------------------------------
# Setup ROOT include directories and compile definitions
#
# find_package(ROOT)
# if(NOT ROOT_FOUND OR WITHOUT_ROOT)
#   message(WARNING "ROOT not found or disabled by hand")
#   add_definitions(-D__WITHOUT_ROOT__)
#   list(REMOVE_ITEM sources ${PROJECT_SOURCE_DIR}/src/TreeManager.cc)
#   list(REMOVE_ITEM headers ${PROJECT_SOURCE_DIR}/include/TreeManager.hh)
# else()
#   include_directories(${ROOT_INCLUDE_DIRS})
# endif()

#----------------------------------------------------------------------------
# Add the executable, and link it to the Geant4 libraries
#
add_executable(main.x main.cc ${sources} ${headers})
# if(ROOT_FOUND)
#   target_link_libraries(main.x ${ROOT_LIBRARIES})
# endif()

#----------------------------------------------------------------------------
# Install the executable to 'bin' directory under CMAKE_INSTALL_PREFIX
#
install(TARGETS main.x DESTINATION bin)


