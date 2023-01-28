#include <kipr/wombat.h>


int main(){
    float starttime = seconds();
	//while (seconds() < starttime + 15){
        
    	//542, 1663, 1000
        
        enable_servos();
        
        set_servo_position(0, 200);
        
        motor(0, 100);
        motor(3, 100);
        msleep(580);
    	ao();
        
        set_servo_position(0, 542);
    	msleep(1000);
        set_servo_position(0, 1663);
    	msleep(1000);
        set_servo_position(0, 1000);
        msleep(1000);
    	ao();
    
        motor(0, -100);
    	motor(3, 100);
    	msleep(500);
        /*if (analog(0) > 1600){
                
        	motor(0, 90); 
        	motor(3, 20);
            
		} 
     	
        else{
            
        	motor(0, 20); 
        	motor(3, 90);
            
		}*/ 
	//} 
             
 ao();
    
 return 0;
}
