// 函数: sub_429318
// 地址: 0x429318
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t eax_1 = *(arg1 + 0x18)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x18) = (eax_1 & 0x300) | 0x20009
char** hKey
void* edx
void* ebp_1
hKey, ebp_1 = sub_429280(arg1, edx)

if (hKey != 0)
    RegCloseKey(hKey)

*(ebp_1 - 5) = hKey != 0
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (* var_18_1)(int32_t* arg1 @ ebp) = sub_429384
void* result = *(ebp_1 - 4)
*(result + 0x18) = *(ebp_1 - 0xc)
return result
