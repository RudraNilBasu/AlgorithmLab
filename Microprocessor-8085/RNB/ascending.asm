LXI H,8500
MVI M,04
LXI H,8501
MVI M,08
LXI H,8502
MVI M,05
LXI H,8503
MVI M,02
LXI H,8504
MVI M,0A
	// MAIN PROG
	LXI H,8500
	MOV C,M // C = NO OF ELEM
	DCR C
LOOP1:
	MOV D,C
	LXI H,8501
LOOP2:
	MOV A,M
	INX H
	CMP M
	JC SKIP
	MOV B,M
	MOV M,A
	DCX H
	MOV M,B
	INX H
SKIP:
	DCR D
	JNZ LOOP2
	DCR C
	JNZ LOOP1
	HLT