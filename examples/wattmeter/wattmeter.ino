/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
显示功率大小值

所需器件:
*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetWattmeter.h>

WidgetWattmeter wattmeter;

void setup() 
{
// put your setup code here, to run once.
    wattmeter.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
    wattmeter.displayPower(1000);
    delay(2000);
}
