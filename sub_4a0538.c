// 函数: sub_4a0538
// 地址: 0x4a0538
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t var_c = arg2
sub_405008(var_8)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_49ffbc(arg1)

if (arg5 == 0xe)
    ebp_1 = sub_4a0654(arg4)
    esp = &var_8
else if (arg5 == 0xf)
    sub_4a0418(arg1, arg4, var_8)
    esp = &var_8
else if (arg5 == 0x12)
    sub_4a0228()
else if (arg5 == 0x13)
    sub_4a062c(var_8, arg4)
    esp = &ExceptionList
else
    sub_4a060c(var_8)
    sub_407b88(arg4)
    esp = &ExceptionList

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a05fd
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
