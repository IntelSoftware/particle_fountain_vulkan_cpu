#ifndef _PSIM_PARTICLE_
#define _PSIM_PARTICLE_

#include <cstddef>
#include <psim/types.h>

namespace psim {
    struct particle
    {
        vec::vec3f pos;
        base::colorRGB color;
        base::time ttl;
        vec::vec3f velocity;
        float massKG;

        static std::size_t size();
        static std::size_t visualSize();
        static std::size_t modelSize();
        static std::size_t coordOffset();
        static std::size_t colorOffset();

        float distanceTo(const vec::vec3f &p) const noexcept;
        float distanceToSq(const vec::vec3f &p) const noexcept;
        vec::vec3f directionTo(const vec::vec3f &p) const noexcept;
    };
}

#include <psim/particle_inline.h>

#endif
