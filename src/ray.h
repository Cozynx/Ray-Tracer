#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
public:
    ray() {}
    ray(const point3& origin, const vec3& direction)
        : orig(origin), dir(direction) {}

    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }

    /**
     * @brief Calculate the position of the point from the origin using the function,
     *          P(t) = A + t*b
     *          where,  P = 3D position along a line in 3D Plane
     *                  A = origin of the ray
     *                  b = Direction of the ray
     *                  t = ray parameter
     * 
     * @param t
     * @return point3 
     */
    point3 at(double t) const {
        return orig + t * dir;
    }

private:
    point3 orig;
    vec3 dir;
};

#endif // !RAY_H
