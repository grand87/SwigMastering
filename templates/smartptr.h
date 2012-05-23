template<typename  T>
class SomeStoragePolicy
{
public:
    typedef T* PointerType;
};

template
<
    typename  ValueType,
    template <typename> typename StoragePolicy = SomeStoragePolicy
>
class SmartPtr : public StoragePolicy<ValueType>
{
public:

    typedef StoragePolicy<ValueType> StoragePolicyType;
    typedef StoragePolicyType<ValueType>::PointerType PointerType;
    
    PointerType operator->();
};
