class A
{
public:
    A();
    virtual ~A();
    virtual void test();
};

class B : public A
{
public:
    B();
    virtual ~B();
    virtual void test();
};
