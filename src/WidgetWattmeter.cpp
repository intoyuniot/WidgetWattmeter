#include "WidgetWattmeter.h"


WidgetWattmeter::WidgetWattmeter(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataPowerTopic,0,sizeof(pDataPowerTopic));
    sprintf(pDataPowerTopic,"channel/wattmeter_%d/data/power",_Item);
}

WidgetWattmeter::~WidgetWattmeter()
{

}

void WidgetWattmeter::begin(void (*UserCallBack)(void))
{
}


void WidgetWattmeter::displayPower(float ucVal)
{
    IntoRobot.publish(pDataPowerTopic,ucVal);
}


void WidgetWattmeter::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

