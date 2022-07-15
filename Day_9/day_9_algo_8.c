/*Algorithm
1)read the value for SSPSTAT register
2)and set the 6,4,3 bits to one using bitwise operator with SSPSTAT register
3)print the SSPSTAT value
4)assign new value to 0x55 to SSPSTAT register
5)clear the o bit in the SSPSTAT register using & bitwise operator store this value in bit_value position
6)set the 7 bit to 1 in SSPSTAT register
7)print the bit_value