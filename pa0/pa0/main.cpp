﻿#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // Vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    Eigen::Vector3f w(1.0f, 0.0f, 0.0f);
    // Vector output
    std::cout << "Example of vector output \n";
    std::cout << v << std::endl;
    // Vector add
    std::cout << "Example of vector add \n";
    std::cout << v + w << std::endl;
    // Vector scalar multiply
    std::cout << "Example of vector scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;
    // Vector dot product
    std::cout << "Example of vector dot product \n";
    std::cout << v.dot(w) << std::endl;
    std::cout << w.dot(v) << std::endl;
    // Vector cross product
    std::cout << "Example of vector cross product \n";
    std::cout << v.cross(w) << std::endl;
    std::cout << w.cross(v) << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // Matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // Matrix output
    std::cout << "Example of matrix output \n";
    std::cout << i << std::endl;
    // Matrix add i + j
    std::cout << "Example of matrix add \n";
    std::cout << i + j << std::endl;
    // Matrix scalar multiply i * 2.0
    std::cout << "Example of matrix scalar multiply \n";
    std::cout << i * 2.0f << std::endl;
    // Matrix multiply i * j
    std::cout << "Example of matrix multiply \n";
    std::cout << i * j << std::endl;
    // Matrix multiply vector i * v
    std::cout << "Example of matrix vector \n";
    std::cout << i * v << std::endl;

    //Example of matrix transformation
    std::cout << "Example of matrix transformation \n";
    Eigen::Vector3f p(1.0f, 0.0f, 1.0f);
    Eigen::Matrix3f t;
    float cosx = cos(45.0f / 180.0f * acos(-1));
    float sinx = sin(45.0f / 180.0f * acos(-1));
    t << cosx, -sinx, 2.0,
         sinx,  cosx, 1.0,
         0.0f,  0.0f, 1.0;
    std::cout << "p =\n" << p << std::endl;
    std::cout << "Doing matrix transformation \n";
    std::cout << t * p << std::endl;

    return 0;
}
