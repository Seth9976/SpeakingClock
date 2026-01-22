// 函数: sub_40a100
// 地址: 0x40a100
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

arg1.b -= 0x5f
*arg5 += arg3.b
arg2.b |= *(arg4 + ((arg1 + 1) << 1) + 0x78)
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*(arg4 + 0x70), &__return_addr)
*(arg4 + 0x70) = temp0
int32_t* edx_2
int32_t entry_ebx
int32_t* esp

if (arg2.b == 0)
    esp = &__return_addr:2
    edx_2 = sub_40a0a0()
else
    int32_t eflags_1
    int16_t* gsbase
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg1 + 1), arg3.w)
    *(gsbase + arg1 + 1) = temp0_1
    *(arg1 + 1) += (arg1 + 1).b
    *arg3 += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    char temp1_1 = *(arg1 + 1)
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) = adc.b(*(arg1 + 1), (arg1 + 1).b, temp1_1 + (arg1 + 1).b u< temp1_1)
    char* eax
    eax.b = (arg1 + 1).b
    *eax += eax.b
    int32_t var_4 = entry_ebx
    esp = &var_4
    entry_ebx = arg2
    char* edx
    edx.b = eax.b - 1
    
    if (eax.b == 1)
        edx_2 = data_414794
    else
        char temp3_1 = edx.b
        edx.b -= 1
        
        if (temp3_1 == 1)
            edx_2 = data_414798
        else
            void* edx_1
            edx_1.b = (edx - 1).b - 0x16
            
            if ((edx - 1).b u< 0x16)
                edx_1.b = 1
                edx_2 = sub_409ee8(*(((eax & 0xff) << 3) + &data_413244), edx_1, 
                    *(((eax & 0xff) << 3) + 0x413248))
            else
                edx_2 = sub_40a0a0()

*(esp - 4) = entry_ebx
return sub_4033c4(edx_2, edx_2) __tailcall
