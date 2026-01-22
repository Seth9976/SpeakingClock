// 函数: sub_43ac44
// 地址: 0x43ac44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)(void* arg1, void* arg2)
int32_t (* var_4)(void* arg1, void* arg2) = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg2
int32_t eax_1 = (*(*arg1 + 0xe0))()
int32_t var_c = (*(*arg1 + 0xdc))()
sub_457748()
void* eax_5 = sub_409ea0(1)
__return_addr = &var_4
var_4 = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_457758(sub_409eb4(eax_5), eax_5)

if (arg3 s<= var_c)
    var_c = arg3 - 1

sub_409cd8(ExceptionList, eax_5 + eax_1, var_c)
fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = sub_43acd5
return sub_409eec(eax_5)
