// STORE 05 IN 9000
// STORE 5 NO S FROM 9001-9005
LXI H,9000
MVI M,05
INX H
MVI M,02
INX H
MVI M,01
INX H
MVI M,01
INX H
MVI M,01
INX H
MVI M,01
// MAIN PROG
	LXI H,9000 // H-L POINTS TO 9000
	MOV D,M // D = NO OF ELEMENTS
LOOP:
	INX H
	ADD M
	DCR D
	JNZ LOOP
	STA 8500
	HLT