// 2s complement of a number
// 9000 = NO
// 900 = COMPLEMENT
LXI H,9000
MVI M,05
	LXI H,9000
	MOV A,M
	CMA
	ADI 01
	STA 9001
	HLT