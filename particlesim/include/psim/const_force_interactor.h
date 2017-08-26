#ifndef _PSIM_CONST_FORCE_INTERACTOR_
#define _PSIM_CONST_FORCE_INTERACTOR_

#include <psim/base_interactor.h>

//CPU_TP35
namespace psim {
    namespace interactors {
        class ConstForceInteractor : public BaseInteractor
        {
        public:
            ConstForceInteractor(vec::vec3f direction, float magnitude);
				
            virtual result computeAcceleration(const particle & p) override;
            virtual BaseInteractor* clone() const override;
        private:
            vec::vec3f force;
        };
    }
}

#endif
