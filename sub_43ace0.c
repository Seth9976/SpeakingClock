// 函数: sub_43ace0
// 地址: 0x43ace0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1 = (*(*arg1 + 0xe0))()
void* eax_3 = (*(*arg1 + 0xdc))()
void** result = arg2
sub_404c78(result, nullptr, eax_3)

if (eax_3 == 0)
    return result

sub_457748()
void* eax_5 = sub_409ea0(1)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_457758(sub_409eb4(eax_5), eax_5)
sub_4030d0(eax_5 + eax_1, *arg2, eax_3, ExceptionList, var_20, var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_1c_1 = 0x43ad75
return sub_409eec(eax_5)
