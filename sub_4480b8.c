// 函数: sub_4480b8
// 地址: 0x4480b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (4 == arg4 && *arg3 == 0x43)
    sub_40d810()
    int32_t ecx
    int32_t ebx_2
    ecx, ebx_2 = sub_448268(arg1)
    esp = &var_8
    ebp_1 = sub_448124(ecx, var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_448119
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
