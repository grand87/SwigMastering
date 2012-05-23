%module (directors="1") testlib
%{
#include "data.h"
%}

%define SMARTPTR_OWNERSHIP_CONTROL(type)

%typemap(javacode) SmartPtr<type> %{
    public type ## Ptr(type aValue) {
        this(aValue, true);
        if(aValue.isSwigOwnMem()) {
            aValue.resetOwnership();
        }
        else
            throw new IllegalArgumentException("Can't initialize type Ptr with type object which is not owned by SWIG !!!!!");
    }
%}

%typemap(javacode) type %{
    public void resetOwnership() {
        swigCMemOwn = false;
    }
    
    public boolean isSwigOwnMem() {
        return swigCMemOwn;
    }    
%}

%ignore SmartPtr(ValueType* aValue);

%extend SmartPtr<type> {
    SmartPtr<type>(type* value, bool swigOwnFlag)
    {
        return new SmartPtr<type>(value);
    }
}

%enddef

%define SMARTPTR_WRAPPER_EXTEND(full_type_name, type_name, DerivedType_full, DerivedType)

%extend  SmartPtr<full_type_name> {
    public:
         SmartPtr<full_type_name>( SmartPtr<DerivedType_full> bPtr)
        {
            return new  SmartPtr<full_type_name>(bPtr);
        }
};

%enddef

%define SMARTPTR_WRAPPER(full_type_name, type_name)

%template(type_name ## Ptr)  SmartPtr<full_type_name>;

%enddef

SMARTPTR_OWNERSHIP_CONTROL(Data)
SMARTPTR_OWNERSHIP_CONTROL(DataDerived)

SMARTPTR_WRAPPER_EXTEND(Data, Data, DataDerived, DataDerived)

%include <SmartPtr.h>
%include <data.h>

SMARTPTR_WRAPPER(Data, Data)
SMARTPTR_WRAPPER(DataDerived, DataDerived)

