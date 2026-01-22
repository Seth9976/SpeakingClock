// 函数: sub_42a590
// 地址: 0x42a590
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int16_t eax_2 = sub_42a504(arg2, zx.d(*(arg1 + 0x20)))
sub_42a578(arg1)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i

for (i = *(arg1 + 4); i != 0; i = *i)
    if (eax_2 == i[3].w && sub_408e34(&i[4], arg2, zx.d(*(arg1 + 0x20))) != 0)
        break

if (i == 0)
    i = sub_402ea8(zx.d(*(arg1 + 0x20)) + 0x10)
    *i = *(arg1 + 4)
    i[1] = 0
    i[2] = *arg2
    i[3].w = eax_2
    sub_4030d0(arg2, &i[4], zx.d(*(arg1 + 0x20)))
    *(arg1 + 4) = i

i[1] += 1
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
    sub_42a66b
return sub_42a584(arg1)
