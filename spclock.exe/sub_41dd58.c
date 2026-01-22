// 函数: sub_41dd58
// 地址: 0x41dd58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* eax_1 = sub_41a4bc(data_4b19d0)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = eax_1[2] - 1

if (i s>= 0)
    do
        int32_t* eax_3 = sub_41a0f4(eax_1, i)
        
        if (eax_3[1] == *(arg1 + 4) && eax_3[3] == *(arg1 + 0xc))
            sub_403c68(eax_3)
            sub_419fe8(eax_1, i)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_41ddcf
return sub_41a520(data_4b19d0)
