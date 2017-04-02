# eQEP via mmap in Beaglebone
A very fast method to get the rotations of quadrature-encoders.

Beaglebone has a dedicated hardware for decoding quadrature pulses
called as eQEP.

This library uses the feature of mmap() to read the value directly 
from eQEP register and is very fast the comparison to reading
from its Sysfs file.
