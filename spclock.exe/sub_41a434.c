// 函数: sub_41a434
// 地址: 0x41a434
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
var_8 = arg1
sub_41a4bc(var_8)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (var_8->__offset(0x20).b == 1)
    sub_419f9c(var_8->Handler, arg2)
else if (sub_41a150(var_8->Handler, arg2) == 0xffffffff)
    sub_419f9c(var_8->Handler, arg2)
else if (var_8->__offset(0x20).b == 2)
    *var_8->Handler
    ebp_1 = sub_41a080(arg2, data_4ac198)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_41a4b7
return sub_41a520(ebp_1[-1])
