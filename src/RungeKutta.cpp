#include "RungeKutta.hpp"

namespace gy
{

RK4::RK4(float y0, float t0, float h, function<float(float, float)> f)
: h(h), f(f)
{
    y.push_back(y0);
    t.push_back(t0);
}

void RK4::step()
{
    auto tn = t.back();
    auto yn = y.back();

    k1 = h * f(tn, yn);
    k2 = h * f(tn + h / 2.0f, yn + k1 / 2.0f);
    k3 = h * f(tn + h / 2.0f, yn + k2 / 2.0f);
    k4 = h * f(tn + h, yn + k3);

    auto y_next = yn + (k1 + 2.0f * k2 + 2.0f * k3 + k4) / 6.0f; 
    y.push_back(y_next);

    auto t_next = tn + h;
    t.push_back(t_next);
}

void RK4::get()
{

}

}