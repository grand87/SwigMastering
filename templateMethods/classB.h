#include "SmartPtr.h"

class B : public A
{
    public:
        B();
        virtual ~B(); 
        void test();
};

typedef SmartPtr<B> BPtr;
