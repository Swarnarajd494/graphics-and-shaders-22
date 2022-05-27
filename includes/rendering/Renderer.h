#ifndef RENDERER_H
#define RENDERER_H
#include <iostream>
#include "Config.h"
#include "thirdparty/glad/glad.h"
#include "thirdparty/GLFW/glfw3.h"

//Rendering class
class Renderer
{
    private:
    float previousTime;
    float currentTime;

    public:
    int major;
    int minor;
    int width;
    int height;

    float deltaTime;

    GLFWwindow* window;

    Renderer(int major_=OPENGL_MAJOR_VERSION, int minor_=OPENGL_MINOR_VERSION, int width_=WINDOW_WIDTH, int height_=WINDOW_HEIGHT);
    void initialise_glfw();
    void terminate_glfw();

    bool create_window();
    void setup_window_data();
    bool close_window();
    void swap_buffers(bool lockFrameRate);
    bool check_key(int key);
    void start_timer();
    void new_frame();

};

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

#endif