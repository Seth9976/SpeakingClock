// 函数: sub_40c8fc
// 地址: 0x40c8fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_1 = 1

while (true)
    if (*((ebx_1 << 2) + &data_4af8f4) == 0xffffffff)
        int32_t ecx
        *((ebx_1 << 2) + &data_4af8f4) = sub_4094b8(sub_404d80(ecx, arg1), 0)
        break
    
    if (ebx_1 == 7)
        break
    
    ebx_1 += 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4) =
    sub_40c968
int32_t* result = &var_8
sub_404b88(result)
return result
