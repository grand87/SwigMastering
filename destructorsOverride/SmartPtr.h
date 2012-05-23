#ifndef _SMARTPTR_H_
#define _SMARTPTR_H_

#include <stdio.h>

template<typename ValueType>
class SmartPtr
{

public:
    SmartPtr()
    {
        value = 0;
        counter = 0;
    }

    SmartPtr(ValueType *aValue)
	{
		if (aValue == 0)
		{
			value = 0;
			counter = 0;
		}
		else
		{
			value = aValue;
			counter = new unsigned int;
			(*counter) = 1;
		}
	}

	SmartPtr(const SmartPtr& aSharedPtr)
	{
		if (aSharedPtr.get() != 0)
		{
			value = aSharedPtr.value;
			counter = aSharedPtr.counter;
			(*counter)++;
		}
		else
		{
			value = 0;
			counter = 0;
		}
	}

    template<typename ValueType2>
	SmartPtr(const SmartPtr<ValueType2>& aSharedPtr)
	{
		if (aSharedPtr.get() != 0)
		{
			value = aSharedPtr.value;
			counter = aSharedPtr.counter;
			(*counter)++;
		}
		else
		{
			value = 0;
			counter = 0;
		}
	}

	SmartPtr& operator = (const SmartPtr& aSmartPtr)
	{
		reset();
		if(aSmartPtr.value != 0)
		{
			value = aSmartPtr.value;
			counter = aSmartPtr.counter;
			++(*counter);
		}
		return *this;
	}

	virtual ~SmartPtr()
	{
        printf("\nSmartPtr::~SmartPtr()\n");
		reset();
	}

	void reset()
	{
		if (value)
		{
			--(*counter);
            printf("\nSmartPtr::reset() counter = %d\n", (*counter));
			if ((*counter) == 0)
			{
                printf("\nSmartPtr::reset() deleting object\n");
				delete value;
				delete counter;
			}
			value = 0;
			counter = 0;
		}
	}
    
    ValueType* operator ->()
    {
        return value;
    }

    ValueType* get()
    {
        return value;
    }

    ValueType* get() const
    {
        return value;
    }

    ValueType& operator &()
    {
        return *value;
    }

    ValueType* getImpl()
    {
        return value;
    }

public:

    ValueType* value;
    unsigned int* counter;
};


#endif /* _SMARTPTR_H_ */