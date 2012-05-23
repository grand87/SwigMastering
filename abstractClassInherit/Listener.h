class Listener
{
public:
    Listener();
    virtual ~Listener();
    
    virtual void onEvent() = 0;
};

class ListenerImpl : public Listener
{
public:
    ListenerImpl();
    virtual ~ListenerImpl();
    
    virtual void onEvent();
};