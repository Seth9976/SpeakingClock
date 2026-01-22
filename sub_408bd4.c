// 函数: sub_408bd4
// 地址: 0x408bd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t var_8 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4054c8(0, arg1)
HRESULT eax_2
eax_2.b = (CLSIDFromString(sub_4054d8(var_8), arg2) & 0x80000000) == 0
char temp0 = eax_2.b
eax_2.b = neg.b(eax_2.b)

if (sbb.d(eax_2, eax_2, temp0 != 0) == 0)
    uint8_t* var_10 = arg1
    char var_c_1 = 0xb
    sub_408ba8(data_4ac3a0, &var_10, 0)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_408c4f
int32_t* result = &var_8
sub_405368(result)
return result
