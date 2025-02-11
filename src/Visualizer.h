#ifndef VISUALIZER_H
#define VISUALIZER_H

#include <opencv2/opencv.hpp>
#include <GLFW/glfw3.h>
#include "imgui.h"

class Visualizer {
public:
    Visualizer(int width, int height);
    void show();
    void update();
    void close();
    bool isClosed() const;
    int GetWidth() const;
    int GetHeight() const;

private:
    bool _closed = false;
    bool _simulationStart = false;
    int _width;
    int _height;

    float _frequency = 20.0f;
    float _length = 1.0f;
    float _amplitude = 1.0f;
    float _maxSimSpeed = 343;
    float _maxSpeed = 2000.0f;
    float _currentSpeed = 343.0f;

    enum EditMode {
        EDIT_SOURCES,
        EDIT_SPEEDS
    };
    int _editMode = EDIT_SOURCES;

    enum SpeedShape {
        SHAPE_RECTANGLE,
        SHAPE_CIRCLE
    };
    int _speedShape = SHAPE_RECTANGLE;

    // New member variables for drawing shapes
    bool _isDrawing = false;
    cv::Point2i _startPoint;
    
    std::string LoadShaderSource(const char* filePath);
    GLuint CompileShader(GLenum type, const char* filePath);
    GLuint CreateShaderProgram();
    void CreateQuad(); 
    void CreateTextures();
    GLuint CreateComputeShader(const char* filePath);
    void CheckOpenGLError(const std::string& errorMessage);
    void DrawUI();
    void ApplyTool(double xpos, double ypos);
    void AddValueToTexture(double xpos, double ypos);
    void DrawSpeedShape(double x1, double y1, double x2, double y2); // Updated signature
    void Reset();

    cv::Point2i _lastMousePoint = cv::Point2i(-1, -1);

    GLFWwindow* _window;
    GLuint _shaderProgram;
    GLuint _waveShaderProgram;
    GLuint _VAO, _VBO, _EBO;
    GLuint _framebufferTexture, _currentWaveTex, _previousWaveTex, _nextWaveTex, _speedsTex, _sourcesTex;
    GLuint _FBO;
    GLuint _textureID;

};

#endif // VISUALIZER_H