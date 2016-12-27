// swap contents of two mem location
LXI H,2000
MVI M,0E
INX H
MVI M,0F
// MAIN PROG
	LXI H,2000
	MOV A,M
	INX H
	MOV B,M
	DCX H
	MOV M,B
	INX H
	MOV M,A
	HLT