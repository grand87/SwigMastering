template<class T>
class SmartPtr {
public:
    typedef T* PointerType;
    SmartPtr(PointerType aValue);
    
    PointerType operator->();
};