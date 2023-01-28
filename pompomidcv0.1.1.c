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
    msleep(1000);
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    motor(0,50);
    msleep(3500);
    motor(0,50);
    motor(3,410);
    set_servo_position(0,1400);
    
   
    msleep(1000);
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
