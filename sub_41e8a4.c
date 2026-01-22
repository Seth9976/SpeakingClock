// 函数: sub_41e8a4
// 地址: 0x41e8a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg3
int32_t* ebx = arg2
ExceptionList = arg1

if (ExceptionList->__offset(0x30).d != 0)
    return sub_41e914(arg3, ebx)

arg2.b = 1
int32_t eax_2
int32_t ecx
eax_2, ecx = sub_403c38(arg3, arg2)
ExceptionList->__offset(0x30).d = eax_2
int32_t __saved_ebp
__return_addr = &__saved_ebp
int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41e914(ecx, ebx)
sub_41ddd4(ExceptionList)
fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = &data_41e910
return sub_41df3c(ExceptionList)
