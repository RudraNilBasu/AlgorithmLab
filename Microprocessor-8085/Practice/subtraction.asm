// subtract two 8 bit no
LXI H,2000
MVI M,10
INX H
MVI M,0F
// MAIN PROG
	LXI H,2000
	MOV A,M
	INX H
	MOV B,M
	SUB B
	JNC RES
	INR C
	CMA
	ADI 01
RES:
	STA 9500
	MOV A,C
	STA 9501
	HLT