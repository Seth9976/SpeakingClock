// 函数: sub_41c017
// 地址: 0x41c017
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += 1
*arg1 += arg1.b
*0xc300000a += arg3
int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0
int32_t* var_c = arg2
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_421088()
int32_t ebx_2 = (*(*arg1 + 0x14))(ExceptionList, var_24, var_20) - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t i
    
    do
        int32_t ecx_1 = (*(*ebp_1[-1] + 0xc))(arg1)
        ebp_1[-2]
        int32_t esi_2
        ebp_1, esi_2 = sub_4228e0(ecx_1, ebp_1[-3])
        i = i_1
        i_1 -= 1
    while (i != 1)

ebp_1[-2]
sub_421090()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_41c0a1
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]
