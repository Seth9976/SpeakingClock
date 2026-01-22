// 函数: sub_429280
// 地址: 0x429280
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
char* var_8 = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404c20(&var_8, arg2)
char eax_2 = sub_428a0c(var_8)

if (eax_2 == 0)
    sub_4050c0(&var_8, 1, 1)

HKEY phkResult = nullptr
enum REG_SAM_FLAGS samDesired = *(arg1 + 0x18)
PSTR lpSubKey = sub_405018(var_8)
RegOpenKeyExA(sub_428b68(arg1, eax_2), lpSubKey, 0, samDesired, &phkResult)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
    sub_42930d
char** result = &var_8
sub_404b88(result)
return result
