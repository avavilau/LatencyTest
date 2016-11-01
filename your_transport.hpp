#ifndef _YOUR_TRANSPORT
#define _YOUR_TRANSPORT

#include "abstract_transport.hpp"

class YourTransport : public AbstractTransport
{
// TODO


public:
    YourTransport(/* You can add whatever parameters you want.*/);
    virtual ~YourTransport() override;
    virtual void put(uint32_t x) override;
    virtual uint32_t get() override;
};

#endif
