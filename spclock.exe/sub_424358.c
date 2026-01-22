// 函数: sub_424358
// 地址: 0x424358
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* eax_1 = sub_41a4bc(data_4b19c4)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_2 = eax_1[2] - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        sub_403c68(sub_41a0f4(eax_1, esi_1))
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4243b4
return sub_41a520(data_4b19c4)
