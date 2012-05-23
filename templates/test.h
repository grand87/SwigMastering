
#include "smartptr.h"

class Data
{
public:
    void work();
};

typedef SmartPtr<Data> DataPtr;