#ifndef Vec2_H
#define Vec2_H
struct Vec2 
{
    union {
        struct {
            double v1, v2;
        };
        struct {
            double x, y;
        };
    };
    Vec2() : x(0.), y(0.) {}
    Vec2(double x, double y) : x(x), y(y) {}
};

struct Vec2f
{
    union {
        struct {
            float v1, v2;
        };
        struct {
            float x, y;
        };
    };
    Vec2f() : x(0.), y(0.) {}
    Vec2f(float x, float y) : x(x), y(y) {}
};
#endif
