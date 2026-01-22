// 函数: sub_489358
// 地址: 0x489358
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
int32_t i_6 = *(ExceptionList->__offset(0x58).d + 8)
int32_t result
int32_t ecx_1
int32_t edx
result, edx, ecx_1 = (*(*arg2 + 0x10))()

if (arg3 == 0)
    if (i_6 - 1 s>= 0)
        int32_t i_5 = i_6
        int32_t esi_3 = 0
        int32_t i
        
        do
            result = sub_489190(sub_41a0f4(ExceptionList->__offset(0x58).d, esi_3))
            esi_3 += 1
            i = i_5
            i_5 -= 1
        while (i != 1)
else if (i_6 s> 0)
    edx.b = 1
    int32_t* eax_4 = sub_403c38(ecx_1, edx)
    int32_t __saved_ebp
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_6 = sub_41c874(arg2)
    int32_t i_7
    int32_t* edx_1
    edx_1:i_7 = sx.q(i_6 * 4 + eax_6)
    sub_41c894(edx_1, i_7, edx_1)
    
    if (i_7 - 1 s>= 0)
        int32_t i_3 = i_7
        int32_t esi_1 = 0
        int32_t i_1
        
        do
            sub_419f9c(eax_4, sub_41c874(edx_1))
            sub_489190(sub_41a0f4(ExceptionList->__offset(0x58).d, esi_1))
            esi_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t eax_19 = sub_41c874(edx_1)
    int32_t i_8
    int32_t* edx_5
    edx_5:i_8 = sx.q(eax_6)
    sub_41c894(edx_5, i_8, edx_5)
    
    if (i_8 - 1 s>= 0)
        int32_t i_4 = i_8
        int32_t esi_2 = 0
        int32_t i_2
        
        do
            sub_488640(edx_5, sub_41a0f4(eax_4, esi_2))
            esi_2 += 1
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    int32_t eax_26
    int32_t* edx_8
    edx_8:eax_26 = sx.q(eax_19)
    sub_41c894(edx_8, eax_26, edx_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_489492
    return sub_403c68(eax_4)

return result
