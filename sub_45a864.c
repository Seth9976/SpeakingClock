// 函数: sub_45a864
// 地址: 0x45a864
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
struct _EXCEPTION_REGISTRATION_RECORD* result = ExceptionList

if (result->__offset(0x1d0).d == 0)
    return result

int32_t edx
edx.b = 1
int32_t ecx
int32_t* eax_1 = sub_403c38(ecx, edx)
int32_t __saved_ebp
__return_addr = &__saved_ebp
int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_4 = *(ExceptionList->__offset(0x1d0).d + 8)
sub_41a2ec(eax_1, i_4)

if (i_4 - 1 s>= 0)
    int32_t i_2 = i_4
    int32_t esi_1 = 0
    int32_t i
    
    do
        void* eax_7 = sub_41a0f4(ExceptionList->__offset(0x1d0).d, esi_1)
        int32_t edx_3 = *(eax_7 + 0x1d4)
        
        if (edx_3 s>= 0 && edx_3 s< i_4)
            sub_41a240(eax_1, edx_3, eax_7)
        
        esi_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_4 - 1 s>= 0)
    int32_t i_3 = i_4
    int32_t esi_2 = 0
    int32_t i_1
    
    do
        void* eax_10 = sub_41a0f4(eax_1, esi_2)
        
        if (eax_10 != 0)
            sub_45fae4(eax_10, esi_2.w)
        
        esi_2 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = &data_45a92f
return sub_403c68(eax_1)
