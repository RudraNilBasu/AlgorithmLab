// subtraction
LXI H,9000
MVI M,05
INX H
MVI M,0E
// MAIN PROG
	LXI H,9000
	MOV A,M
	INX H
	SUB M
	JNC STOP
	CMA
	ADI 01
	MVI C,01
STOP:
	STA 9500
	MOV A,C
	STA 9501
	HLT