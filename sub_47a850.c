// 函数: sub_47a850
// 地址: 0x47a850
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_60 = ebx
int32_t esi
int32_t var_64 = esi
int32_t edi
int32_t var_68 = edi
int32_t var_58 = 0
uint32_t var_5c = 0
int32_t* var_6c = &var_4
int32_t (* var_70)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg6 - 1) == 0)
    DrawTextA(arg1, sub_405018(arg2), arg3, arg5, arg4)
else
    int32_t var_48
    sub_403578(&var_48, 0x40, 0)
    var_48 = 0x40
    int32_t var_44_1 = 0x2001
    int32_t var_40_1 = sub_42ad8c(*(*(*(arg6 - 8) + 0xc) + 0x18))
    sub_4659bc()
    void var_54
    void* ecx = &var_54
    int32_t edx
    edx.b = 2
    sub_465d2c(ecx, edx)
    int32_t ecx_1 = sub_4054c8(ecx, arg2)
    int32_t eax_9 = sub_4054d8(var_58)
    sub_4054c8(ecx_1, arg2)
    int32_t eax_11 = sub_4054e8(var_5c)
    int32_t var_50
    int32_t var_4c
    sub_433004(var_50, arg1, sub_465a84(sub_4659bc(), 0), &var_48, arg5, arg4, eax_11, eax_9, 
        var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_6c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_47a94a
return sub_405380(&var_5c, 2)
