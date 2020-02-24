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
    float k1, k2, k3, k4;
    void step();
public:
    RK4();
    void get();
};

}

#endif