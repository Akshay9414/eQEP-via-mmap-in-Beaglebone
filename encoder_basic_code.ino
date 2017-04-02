/* Run the script named encoder_settings.sh before running this code
Initialise the object of encoder by 0,1,2
0 : for eQEP0 (P9_27 and P9_42)
1 : for eQEP1 (P8_33 and P8_35) These 2 pins are allocated to hdmi so avoid them if possible
2 : for eQEP2b (P8_11 and P8_12)
Functional Description :
1) read() : Read the current reading of the encoder.
2) set() : Set the reading to your choice (generally used for reference)
*/


#include "encoder.h"
#include <iostream>
using namespace std;

encoder left_wheel(2);
encoder right_wheel(0);

void setup(){
	cout<<"Code is Started"<<endl;
	left_wheel.set(0);
	right_wheel.set(0);
}

void loop() {
  	int position1 = left_wheel.read();  // To read from encoders use read() function
    	int position2 = right_wheel.read();
    	cout<<"Reading 1 = "<<position1 << " 	Reading 2 = "<<position2<<endl;

    	/* Rest of the code
	*-----------------
	*-----------------
	*-----------------
	*-----------------
	*/
	
	temp_position1 = position1;
    	temp_position2 = position2;
}
								
