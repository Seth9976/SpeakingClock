// 函数: sub_426277
// 地址: 0x426277
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
char* eax_4
char ecx_1
uint16_t edx_1
eax_4, edx_1, ecx_1 = (*eax)()
*eax_4 += eax_4.b
char temp1 = *(arg3 + 0x65)
*(arg3 + 0x65) += eax_4.b
bool cond:2 = temp1 s<= neg.b(eax_4.b)
void* result
void* esp
void arg_c
void* entry_ebx

if (temp1 == neg.b(eax_4.b))
    if (*(entry_ebx + 8) s<= 0 || *(entry_ebx + 0xc) s<= 0)
        result = arg2
        esp = &arg_c
    else
        int32_t var_4_1 = 0
        cond:2 = data_4b1a00(0) s<= *entry_ebx
    label_4262e9:
        
        if (cond:2)
            result = arg2
            esp = &arg_c
        else
            int32_t var_4_2 = 1
            
            if (data_4b1a00(1) s> *(entry_ebx + 4))
                arg2 = 0x12340042
            
            result = arg2
            esp = &arg_c
else if (temp1 + eax_4.b s>= 0)
    eax_4.b += 0x7e
    result = &eax_4[0x340042be]
    *(entry_ebx + 0x5b5e5fc6)
else
    if (temp1 == neg.b(eax_4.b))
        goto label_4262e9
    
    int32_t eflags
    int32_t* edi
    int32_t temp0_1
    temp0_1, edi = __insd(arg3, edx_1, eflags)
    *edi = temp0_1
    
    if (arg1 != 1)
        return sub_426290() __tailcall
    
    eax_4.b ^= 0x12
    result = arg2
    esp = &arg_c
*esp
return result
