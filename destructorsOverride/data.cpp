#include <data.h>
#include <stdio.h>

Data::Data()
{

}

Data::~Data()
{
    printf("\nData::~Data()\n");
}

int Data::getData()
{
    return 15;
}

DataDerived::DataDerived()
{

}

DataDerived::~DataDerived()
{

}

int DataDerived::getData()
{
    return 25;
}

