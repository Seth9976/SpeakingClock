// 函数: sub_4355e5
// 地址: 0x4355e5
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg6 = *arg6
char temp1 = *arg1
*arg1 += arg1.b
arg1.b = adc.b(arg1.b, *arg1, temp1 + arg1.b u< temp1)
arg1.b |= arg2[0x65]
char* entry___return_addr
uint32_t* esp
bool c_6
int32_t eflags

if (arg1.b u<= 0)
    char temp2_1 = *arg1
    *arg1 += arg1.b
    bool c_2 = temp2_1 + arg1.b u< temp2_1
    char* eax = adc.d(arg1, 0x65420a00, c_2)
    bool c_3 = adc.d(arg1, 0x65420a00, c_2) u< arg1 || (c_2 && adc.d(arg1, 0x65420a00, c_2) == arg1)
    
    if (adc.d(arg1, 0x65420a00, c_2) == 0 || c_3)
        *eax += entry___return_addr.b
        char temp4 = *entry___return_addr
        *entry___return_addr += arg3.b
        bool c_5 = temp4 + arg3.b u< temp4
        uint16_t* esi_1 = __outsd(arg2.w + 1, *arg5, arg5, eflags)
        
        if (not(c_5))
            if (c_5)
                jump(0x43572a)
            
            jump("tyle")
        
        bool cond:1 = (eax | *(entry___return_addr + 0x6f)) u>= 0
        __outsb(arg2.w + 1, *esi_1, esi_1, eflags)
        
        if (cond:1)
            jump(0x4357b2)
        
        jump("raints")
    
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(arg6, arg2.w, eflags)
    *edi_1 = temp0_2
    
    if (edi_1 == 1)
        if (c_3)
            jump(0x4356ce)
        
        jump(0x43566e)
    
    entry___return_addr = __return_addr
    void arg_4
    esp = &arg_4
    eax.b += *eax
    arg1 = (*(arg3 + (arg4 << 2) + 0x10043))()
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp10_1 = *arg1
    *arg1 += arg1.b
    c_6 = temp10_1 + arg1.b u< temp10_1
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
        entry___return_addr[0x28ff0001] += arg2.b
        *arg3 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg2 += arg1.b
        *arg1 += arg1.b
        *entry___return_addr += arg2.b
        char temp8 = *arg2
        *arg2 += arg3.b
        
        if (arg2 == 0xffffffff || temp8 + arg3.b u< temp8)
            jump(0x435683)
        
        jump(sub_43521c+0x402)
    
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    *arg1 += arg1.b
    int16_t ss
    uint32_t var_4 = zx.d(ss)
    esp = &var_4
    char temp6_1 = *arg2
    *arg2 += arg3.b
    
    if (arg2 != 0xffffffff && temp6_1 + arg3.b u>= temp6_1)
        uint8_t* edi_3
        uint8_t temp0_3
        temp0_3, edi_3 = __insb(edi, arg2.w + 1, eflags)
        *edi_3 = temp0_3
        uint8_t* var_8 = edi_3
        void arg_60
        int32_t* esp_1 = *(&arg_60 + (arg5 << 1)) * &data_416f8c
        *esp_1
        *arg1 += arg1.b
        *esp_1 = *(arg1 * 2)
        undefined
    
    char temp11_1 = *arg1
    *arg1 += arg1.b
    c_6 = temp11_1 + arg1.b u< temp11_1
*arg1 = sbb.d(*arg1, arg1, c_6)
char temp12 = entry___return_addr[0x68] | arg1.b
entry___return_addr[0x68] = temp12
*esp
esp[1]
esp[2]
esp[4]
esp[5]
esp[6]
esp[7]

if (temp12 u< 0)
    jump("raints")

jump(0x4356fb)
