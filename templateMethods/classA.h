#include "SmartPtr.h"

class A
{
    public:
        A();
        virtual ~A(); 
        void testA();
};

typedef SmartPtr<A> APtr;
