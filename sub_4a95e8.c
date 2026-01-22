// 函数: sub_4a95e8
// 地址: 0x4a95e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = &var_4
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp0 = data_4b1c50
data_4b1c50 -= 1

if (temp0 u< 1)
    data_4b1c4c = zx.w(GetVersion()) u>= 4
    sub_465120()
    sub_419724(0x4529a0)
    esp = &var_8
    sub_4197c4(sub_452837+0x169)
    sub_419770(0x466848, sub_452837+0x169)
    sub_419770(&data_4683f8, sub_452837+0x169)
    sub_419770(0x46851c, sub_452837+0x169)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a9675
return 0
