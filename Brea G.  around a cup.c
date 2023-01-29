#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    motor(0,100);
    motor(3,100);
    msleep(3000);
    
    motor(0,77);
    motor(3,30);
    msleep(6500);
    
    motor(0,100);
    motor(3,100);
    msleep(3000);
    return 0;
}
