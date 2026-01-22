// 函数: sub_41e1a4
// 地址: 0x41e1a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_8 = ecx
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
int32_t esi
int32_t var_10 = esi
(*(*arg2 + 0x20))()
var_4 = &var_4
int32_t (* var_8_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_41dc30(arg1) == 0)
    ebp_1 = sub_41adb4(var_8_2)

while (sub_41dc30(arg1) == 0)
    char eax_5
    int32_t ecx_1
    int32_t edx_1
    eax_5, ecx_1, edx_1 = sub_41e028(arg1)
    
    if (eax_5 - 2 u< 3)
        ecx_1, edx_1 = sub_41ec34(arg1)
    
    struct _EXCEPTION_REGISTRATION_RECORD* eax_8 = sub_41ace8(ebp_1[-1], edx_1, ecx_1)
    sub_41ece4()
    
    while (sub_41dc30(arg1) == 0)
        ebp_1 = sub_41ee50(arg1, eax_8)
    
    sub_41ecec()

sub_41ecec()
fsbase->NtTib.ExceptionList = ExceptionList
var_4 = sub_41e24b
return (*(*ebp_1[-1] + 0x24))(var_4)
