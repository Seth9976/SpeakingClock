// 函数: sub_403b5c
// 地址: 0x403b5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10c = ebx
int32_t esi
int32_t var_110 = esi
int32_t var_8 = 0
int32_t* var_114 = &var_4
int32_t (* var_118)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_108[0x100]
sub_404dec(sub_403b48(arg1, &var_108), &var_108)
int32_t cchCount2 = sub_404e48(arg2)
char* lpString2 = sub_405018(arg2)
int32_t cchCount1 = sub_404e48(var_8)
void* ebx_1
ebx_1.b = CompareStringA(0x800, 1, sub_405018(var_8), cchCount1, lpString2, cchCount2) == CSTR_EQUAL
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_114_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_403bea
int32_t* result = &var_8
sub_404b88(result)
return result
