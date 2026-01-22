// 函数: sub_48929c
// 地址: 0x48929c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
sub_49195c(arg1)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4895e0(arg1)
(*(*arg2 + 0xc))(ExceptionList, var_20, var_1c)
int32_t i_2

if (arg3 != 0 && i_2 s> 0)
    int32_t eax_4
    int32_t edx
    eax_4, edx = sub_41c874(arg2)
    int32_t eax_8
    int32_t edx_1
    edx_1:eax_8 = sx.q(edx * 4)
    i_2 = adc.d(edx_1, edx, eax_8 + eax_4 u< eax_8)
    sub_41c894(arg2, eax_8 + eax_4, i_2)

if (i_2 - 1 s>= 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t eax_12 = sub_489548(arg1, 0)
        sub_489188(sub_41a0f4(arg1[0x16], eax_12))
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_489350
int32_t* edx_5
edx_5.b = 1
return sub_491964(arg1, edx_5.b)
