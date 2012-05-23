#ifndef _DATA_H_
#define _DATA_H_

#include <SmartPtr.h>

class Data
{
    public:
        Data();
        virtual ~Data();
        virtual int getData();
};

class DataDerived : public Data
{
    public:
        DataDerived();
        virtual ~DataDerived();
        virtual int getData();
};

typedef SmartPtr<Data> DataPtr;
typedef SmartPtr<DataDerived> DataDerivedPtr;

#endif /* _DATA_H_ */
