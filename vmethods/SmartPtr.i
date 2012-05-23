%module (directors="1") Sophia

namespace Surc { namespace System {

template<class T>
class SmartPtr {
public:
    typedef T* PointerType;
    PointerType operator->();
};

}}
