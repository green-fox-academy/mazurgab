#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument : public Instrument
        {
        public:
            virtual void sound() = 0;

        protected:
            int _numberOfString;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
