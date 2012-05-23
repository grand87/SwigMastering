%module testwrap

%{
    #include "test.h"
%}

%include "test.h"

template<class T>
class SmartPtr {
public:
    typedef T* PointerType;

    PointerType operator->();
};

%template(DataPtr) SmartPtr<Data>;
