// hcf
LXI H,9000
MVI M,0C
INX H
MVI M,04
// MAIN PROG
	LXI H,9000
	MOV A,M
	//MOV B,M
	INX H
	MOV B,M
LOOP1:
	CMP B
	JZ EXIT
	JNC NEXT // A>B
SWAP:
	// SWAP A AND B
	MOV C,A
	MOV A,B
	MOV B,C
NEXT:
	SUB B
	JMP LOOP1
EXIT:
	STA 9500
	HLT