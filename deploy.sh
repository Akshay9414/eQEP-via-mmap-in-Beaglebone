#!/bin/bash

#set these values to 1 for using the pins in eQEP mode.  
eQEP0_enable = 1  #(P9.27 and P9.42)
eQEP1_enable = 0  #(Conflicts with HDMI pins : P8.33 and P8.35)
eQEP2_enable = 1  #(eQEP2 is for eQEP2b with pin P8.11 and P8.12)
#---------------------------------------------------------------------------------

if [ $eQEP0_enable -eq 1 ]
then
	config-pin -a P9.27 qep
	config-pin -a P9.42 qep
fi

if [ $eQEP1_enable -eq 1 ]
then
	config-pin -a P8.33 qep
	config-pin -a P8.35 qep
fi

if [ $eQEP2_enable -eq 1 ]
then
	config-pin -a P8.11 qep
	config-pin -a P8.12 qep
fi
