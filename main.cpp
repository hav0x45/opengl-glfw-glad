#include <iostream>
#include <GLFW/glfw3.h>

int main() {

    glfwInit();

    GLFWwindow* window = glfwCreateWindow(1280, 720, "Title", 0, 0);

    if (!window) {
        return 1;
    }

    return 0;
}