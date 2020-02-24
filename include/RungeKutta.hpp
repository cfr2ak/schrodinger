#ifndef GY_RUNGE_KUTTA_H
#define GY_RUNGE_KUTTA_H

#include <vector>

using namespace std;

namespace gy
{

class RK4
{
private:
    vector<float> y;
    vector<float> t;
    float k1, k2, k3, k4;
    float h;    // Step size
    void step();
public:
    RK4(float y0, float t0, float h);
    void get();
};

}

#endif