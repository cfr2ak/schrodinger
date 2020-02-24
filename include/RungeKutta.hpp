#ifndef GY_RUNGE_KUTTA_H
#define GY_RUNGE_KUTTA_H

#include <functional>
#include <vector>

using namespace std;

namespace gy
{

class RK4
{
private:
    function<float(float, float)> f;
    vector<float> y, t;
    float k1, k2, k3, k4, h;

    void step();
public:
    RK4(float y0, float t0, float h, function<float(float, float)> f);
    void get();
};

}

#endif