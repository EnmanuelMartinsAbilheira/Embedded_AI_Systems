#pragma once
#include <stdarg.h>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class LinearRegression {
                public:
                    /**
                    * Predict class for features vector
                    */
                    float predict(float *x) {
                        return dot(x, 23.366435873929, -108.408533445231, 94.202576983506, 59.293676278679, -85.437224557847, -6.913118654001, -1.539394083284, 77.514609288524, 268.640600727511, -33.394519107915) + 37.84492009123127;
                    }

                protected:
                    /**
                    * Compute dot product
                    */
                    float dot(float *x, ...) {
                        va_list w;
                        va_start(w, 10);
                        float dot = 0.0;

                        for (uint16_t i = 0; i < 10; i++) {
                            const float wi = va_arg(w, double);
                            dot += x[i] * wi;
                        }

                        return dot;
                    }
                };
            }
        }
    }