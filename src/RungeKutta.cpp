#include "RungeKutta.hpp"

namespace gy
{

RK4::RK4(float y0, float t0, float h): h(h)
{
    y.push_back(y0);
    t.push_back(t0);
}

void RK4::step()
{
    // Calculate k1~k4

    auto y_next = y.back() + (k1 + 2.0f * k2 + 2.0f * k3 + k4) / 6.0f; 
    y.push_back(y_next);

    auto t_next = t.back() + h;
}

void RK4::get()
{

}

}