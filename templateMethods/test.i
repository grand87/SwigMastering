%module (directors="1") testlib
%{
    include "classA.h"
    include "classB.h"
%}

%include "SmartPtr.i"


%include "classA.h"

%extend SmartPtr<A> {
    public:
        SmartPtr<A>(SmartPtr<B> bPtr)
        {
            return new SmartPtr<A>(bPtr);
        }
}

%include "classB.h"


%template(APtr) SmartPtr<A>;
%template(BPtr) SmartPtr<B>;

