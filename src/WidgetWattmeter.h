#ifndef WIDGET_WATTMERTER_H_
#define WIDGET_WATTMERTER_H_

#include "application.h"

class WidgetWattmeter : public WidgetBaseClass
{
    public:
        WidgetWattmeter(uint8_t ucItem = 0);
        ~WidgetWattmeter();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayPower(float ucVal);

    private:
        char pDataPowerTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
