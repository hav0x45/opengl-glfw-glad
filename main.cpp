#include <iostream>
#include <glad/glad.c>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {

    glfwInit();

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Title", 0, 0);

    if (!window) {
        return 1;
    }

    if (!glfwInit) {
        std::cout << "Couldn't initialize GLFW." << std::endl;
        return 1;
    }

    

    return 0;
}