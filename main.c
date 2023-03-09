#include <kipr/wombat.h>
//starting position 1000
//left 1400
//right 700
int main()
   
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(0,1000);
    msleep(1000);
    set_servo_position(0,645);
    msleep(3500);
    motor(0,25);
    motor(1,25);
    msleep(1100);
    ao();
    motor(1,-834);
    msleep(1200);
    motor(0,1500);
    motor(1,1500);
    set_servo_position(0,1400);
    
   
    msleep(1000);
    motor(0,1500);
    motor(1,1500);
   
   
    set_servo_position(0,700);
    msleep(1000);
    set_servo_position(0,700);
    
    
    msleep(1000);
    set_servo_position(0,1400);
    msleep(1000);
    set_servo_position(0,700);
    
    
    msleep(1000);
    set_servo_position(0,1400);
    msleep(1000);
    set_servo_position(0,700);
    msleep(1000);
    set_servo_position(0,1000);
    msleep(1000);
   
    
    
    
    
    return 0;
}
