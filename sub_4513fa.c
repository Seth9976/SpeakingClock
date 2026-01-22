// 函数: sub_4513fa
// 地址: 0x4513fa
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg6 + (arg5 << 2) + 0x4a) += (arg2 - 1).b
char var_48afffb6[0x48afffaa]
var_48afffb6[arg1 << 3] += (arg2 - 1):1.b
arg1[0x4c004ac4] += arg1.b
int32_t ebx
ebx:1.b = 0x4a
arg1:1.b += arg3:1.b
*(arg2 - 2) = ror.b(*(arg2 - 2), 0x48)
ebx:1.b = 0x4a
*arg1 += arg1.b
*(arg2 - 2) = ror.d(*(arg2 - 2), 0x44)
ebx:1.b = 0x4a
*(arg3 + (arg1 << 3) + 0x4a) += arg3.b
*(arg4 - 0x75) += (arg2 - 2).b
int32_t eflags
arg1.b = __in_al_dx((arg2 - 2).w, eflags)
void* var_4 = arg4
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1c38
data_4b1c38 += 1

if (temp1 == 0xffffffff)
    sub_403c68(data_4b1c34)
    sub_403c68(data_4b1c30)
    sub_403c68(data_4b1c3c)
    sub_404b88(&data_4ab730)
    sub_405724(0x4ab744, sub_4010aa+0x16, 0x12)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
