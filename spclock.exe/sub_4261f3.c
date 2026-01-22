// 函数: sub_4261f3
// 地址: 0x4261f3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg6 -= 1
*arg1 += arg1.b
char temp1 = *(arg6 + 0x65)
*(arg6 + 0x65) += arg1.b
bool c = temp1 + arg1.b u< temp1
int32_t result
int32_t* esp
int32_t entry_ebx
bool c_1

if (temp1 == neg.b(arg1.b))
    result = adc.d(arg1, 0x2ea834a, c)
    c_1 = adc.d(arg1, 0x2ea834a, c) u< arg1 || (c && adc.d(arg1, 0x2ea834a, c) == arg1)
label_42624e:
    
    if (not(c_1))
        goto label_426264
    
    result = 1
label_426264:
    
    if (result == 0xffffffff)
        *(esp - 4) = entry_ebx
        result = GetSystemMetrics()
else
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
    __outsb(arg2, *esi, esi, eflags)
    *(arg6 + (arg4 << 1) + 0x72)
    *(arg4 - 0x75) += arg2.b
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_4 = entry_ebx
    esp = &var_4
    entry_ebx = *(arg4 + 8)
    
    if (data_4b1a28 != 0)
        result = arg1 | 0xffffffff
        
        if (entry_ebx - 0x4c u< 2)
            result = 0
            goto label_426264
        
        if (entry_ebx == 0x4e)
            entry_ebx = 0
            goto label_426264
        
        if (entry_ebx == 0x4f)
            entry_ebx = 1
            goto label_426264
        
        c_1 = entry_ebx - 0x50 u< 2
        goto label_42624e
    
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    int32_t ebx
    eax, ebx = sub_426124(0, data_4b1a00, sub_426277+5)
    data_4b1a00 = eax
    int32_t var_8 = ebx
    esp = &var_8
    result = data_4b1a00(var_8)
*esp
esp[1]
return result
