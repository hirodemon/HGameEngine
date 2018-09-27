#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//GLEW

#include <glew.h>

//GLFW
#include <glfw3.h>
//GLM
#include <glm.hpp>
#include <vec2.hpp>
#include <vec3.hpp>
#include <vec4.hpp>
#include <mat4x4.hpp>
#include <gtc\matrix_transform.hpp>
#include <gtc\type_ptr.hpp>
//SOIL2
#include <SOIL2.h>


struct Vertex
{
	glm::vec3 position;
	glm::vec3 color;
	glm::vec3 texcoord;
};