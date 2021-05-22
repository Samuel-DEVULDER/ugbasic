
N2STRING:
    JSR N2STRINGH2D
    LDX #9;
    LDY #0;
N2STRINGL1:
    LDA RESBUFFER,x
    BNE N2STRINGL2
    DEX
    BNE N2STRINGL1
N2STRINGL2:
    LDA RESBUFFER,X
    ORA #$30
    STA ($23),Y
    INY
    DEX
    BPL N2STRINGL2
    JMP N2STRINGEND
N2STRINGH2D:
    LDX #0
    N2STRINGL3:
    JSR N2STRINGDIV10
    STA RESBUFFER, X
    INX
    CPX #10
    BNE N2STRINGL3
    RTS
N2STRINGDIV10:
    LDY #32
    LDA #0
    CLC
N2STRINGL4:
    ROL
    CMP #10
    BCC N2STRINGSSKIP
    SBC #10
N2STRINGSSKIP:
    ROL $19
    ROL $20
    ROL $21
    ROL $22
    DEY
    BPL N2STRINGL4
    RTS
N2STRINGEND:
    TYA
    STA $25
    RTS

RESBUFFER:  .RES    10