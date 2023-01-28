#include <kipr/wombat.h>

int main(){
    
	while (digital(0) == 0){
        
    	if (analog(0) > 1600){
            
        	motor(0, 90); 
        	motor(3, 20); 
		} 
     	
        else{
            
        	motor(0, 20); 
        	motor(3, 90); 
		} 
	} 
             
 ao();
    
 return 0;
}
