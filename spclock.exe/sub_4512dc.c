// 函数: sub_4512dc
// 地址: 0x4512dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t cchCount2_2 = 0
int64_t* cchCount1_2 = nullptr
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_451184(arg1, &cchCount1_2)
int64_t* cchCount1_1 = cchCount1_2
sub_451184(arg2, &cchCount2_2)
int32_t cchCount2_1 = cchCount2_2
int64_t* cchCount1 = cchCount1_1

if (cchCount1 != 0)
    cchCount1 = *(cchCount1 - 4)

int32_t cchCount2 = cchCount2_1

if (cchCount2 != 0)
    cchCount2 = *(cchCount2 - 4)

char* lpString2 = sub_405018(cchCount2_1)
int32_t eax_6
eax_6.b = CompareStringA(0x400, 1, sub_405018(cchCount1_1), cchCount1, lpString2, cchCount2) == 2
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_451386
return sub_404bac(&cchCount2_2, 2)
