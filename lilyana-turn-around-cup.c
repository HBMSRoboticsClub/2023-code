#include <kipr/wombat.h>

int main()
{
    motor(0,100);
    motor(3,100);
    msleep(3600);
    motor(0,100);
    motor(3,0);
    msleep(1400);
    motor(0,100);
    motor(3,100);
    msleep(1350);
    motor(0,100);
    motor(3,0);
    msleep(1500);
    motor(0,100);
    motor(3,90);
    msleep(4000);
    return 0;
}
 