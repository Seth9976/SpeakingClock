// 函数: sub_40d724
// 地址: 0x40d724
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_20 = ebx
int32_t var_8 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t var_c = 0xffffffff
sub_404c20(&var_8, arg1)
j_sub_40502c(&var_8)
uint32_t var_10
uint32_t dwLen = GetFileVersionInfoSizeA(sub_405018(var_8), &var_10)

if (dwLen == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_24_1)(int32_t* arg1 @ ebp) = sub_40d801
    int32_t* result = &var_8
    sub_404b88(result)
    return result

int32_t eax_5 = sub_402ea8(dwLen)
int32_t* var_30_1 = &var_4
int32_t (* var_34_1)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t puLen
void* lplpBuffer

if (GetFileVersionInfoA(sub_405018(var_8), var_10, dwLen, eax_5) != 0
        && VerQueryValueA(eax_5, sub_40d809+3, &lplpBuffer, &puLen) != 0)
    int32_t var_c_1 = *(lplpBuffer + 8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_30_2 = 0x40d7e4
return sub_402ec4(eax_5)
