// 函数: sub_490638
// 地址: 0x490638
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t var_c = 0
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
var_8:3.b = arg2
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(arg3)

if (arg1 u< 1)
    sub_49070c(arg3)
label_490685:
    
    if (*(ebp_1 - 1) == 0)
        sub_4867a4(*arg3, &ebp_1[-3])
        sub_404bdc(arg3, ebp_1[-3])
    else
        sub_48675c(*arg3, &ebp_1[-2])
        sub_404bdc(arg3, ebp_1[-2])
else
    if (arg1 == 1)
        sub_4906e0(arg3)
        goto label_490685
    
    if (arg1 == 2)
        ebp_1 = sub_4905ec(arg3)
        esp = &var_8
        goto label_490685

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4906d7
return sub_404bac(&ebp_1[-3], 2)
