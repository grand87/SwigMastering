%module (directors="1") Test

%import "SmartPtr.i"

%feature("director") A;
%feature("director") B;

%include "test.h"

%template(APtr) Surc::System::SmartPtr<A>;

%template(BPtr) Surc::System::SmartPtr<B>;
