// Rohit
LXI H,8000
MVI M,21
INX H
MVI M,30
DCX H
MOV A,M
INX H
MOV B,M
//CMP B
//JNC LAB1
//JC LAB2
//LAB
SUB B
JM LAB1
JMP LAB2
LAB1:
CMA
ADI 01
JMP LAB2
LAB2:
STA 8002
HLT