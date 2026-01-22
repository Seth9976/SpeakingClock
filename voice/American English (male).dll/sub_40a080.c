// 函数: sub_40a080
// 地址: 0x40a080
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char temp1 = arg1[0x90e0040] & arg1:1.b
void* const* var_4 = &__return_addr
void* const** esp = &var_4

if (temp1 u>= 0)
    int32_t eflags
    __outsd(arg2.w, *arg5, arg5, eflags)
    
    if (temp1 u>= 0)
        int32_t eflags_1
        int16_t* gsbase
        int16_t temp0
        temp0, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg1), arg3.w)
        *(gsbase + arg1) = temp0
        *arg1 += arg1.b
        *arg3 += arg1.b
        *arg1 += arg1.b
        char temp2 = *arg1
        *arg1 += arg1.b
        *arg1 = adc.b(*arg1, arg1.b, temp2 + arg1.b u< temp2)
        arg1.b = arg1.b
        *arg1 += arg1.b
        return sub_40a0a0() __tailcall
    
    arg2.b = 1
    int32_t esi_1
    arg1, esi_1 = sub_409fe0(sub_405ccc+0x168, arg2, data_413404, 0, &var_4)
    *(arg1 + 0xc) = esi_1
    esp = &__return_addr

*esp
