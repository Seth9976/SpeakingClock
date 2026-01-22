// 函数: sub_441d79
// 地址: 0x441d79
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg6 = *arg6
char temp1 = *arg1
*arg1 += arg1.b
*arg1 = adc.d(*arg1, arg1, temp1 + arg1.b u< temp1)
arg1.b |= *(arg2 + 0x65)
char* eax_2
bool c_6
int32_t eflags
char* entry_ebx

if (arg1.b u<= 0)
    char temp2_1 = *arg1
    *arg1 += arg1.b
    arg1.b = adc.b(arg1.b, 0, temp2_1 + arg1.b u< temp2_1)
    arg1.b |= *(arg2 + 0x65)
    
    if (arg1.b u<= 0)
        *arg6 += arg2.b
        char temp3 = *entry_ebx
        *entry_ebx += arg3.b
        bool c_5 = temp3 + arg3.b u< temp3
        __outsd((arg2 + 1).w, *arg5, arg5, eflags)
        
        if (not(c_5))
            if (c_5)
                jump(sub_441db2+0x110)
            
            jump(sub_441db2+0xb9)
        
        *arg1 += arg1.b
        char eax_5 = (*(arg2 + 1))()
        char temp8 = *0x6f6c6f43
        *0x6f6c6f43 += eax_5
        
        if (temp8 + eax_5 u< temp8)
            jump(sub_441db2+0x136)
        
        jump(sub_441db2+0x126)
    
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(arg6, arg2.w, eflags)
    *edi_1 = temp0_2
    
    if (edi_1 == 1)
        if (arg1.b u< 0)
            jump(0x441e62)
        
        jump(0x441e02)
    
    TEB* fsbase
    arg1.b += *(fsbase + arg1)
    eax_2 = &arg1[1] ^ 0x10044
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    char temp9_1 = *eax_2
    *eax_2 += eax_2.b
    c_6 = temp9_1 + eax_2.b u< temp9_1
else
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0
    
    if (arg1.b u< 0)
        int32_t eflags_1
        char temp0_1
        temp0_1, eflags_1 = __das(arg1.b, eflags)
        arg1.b = temp0_1
        arg3[2] += entry_ebx.b
        entry_ebx:1.b *= 2
        char* eax = arg1 ^ 0x10044
        *eax += eax.b
        *eax += eax.b
        char temp7 = *eax
        *eax += eax.b
        eax.b = adc.b(eax.b, *eax, temp7 + eax.b u< temp7)
        eax.b |= *(arg2 + 0x65)
        
        if (eax.b u<= 0)
            jump(0x441e17)
        
        return sub_441db2(eax, arg2, arg3, arg4 + 2, arg5, edi, arg1) __tailcall
    
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    char temp5_1 = *arg1
    *arg1 += arg1.b
    bool c_3 = temp5_1 + arg1.b u< temp5_1
    eax_2 = adc.d(arg1, 0x65420a00, c_3)
    
    if (adc.d(arg1, 0x65420a00, c_3) != 0 && adc.d(arg1, 0x65420a00, c_3) u>= arg1
            && (not(c_3) || adc.d(arg1, 0x65420a00, c_3) != arg1))
        uint8_t* edi_3
        uint8_t temp0_3
        temp0_3, edi_3 = __insb(edi, arg2.w, eflags)
        *edi_3 = temp0_3
        uint8_t* var_4_1 = edi_3
        void arg_64
        int32_t* esp = *(&arg_64 + (arg5 << 1)) * &data_416f8c
        *esp
        *eax_2 += eax_2.b
        *esp = *(eax_2 * 2)
        undefined
    
    char temp10_1 = *eax_2
    *eax_2 += eax_2.b
    c_6 = temp10_1 + eax_2.b u< temp10_1
*eax_2 = sbb.b(*eax_2, eax_2.b, c_6)

if ((eax_2 | *(arg2 + 0x6f)) u< 0)
    jump(sub_441db2+0x140)

jump(sub_441db2+0xdc)
