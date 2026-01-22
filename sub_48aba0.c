// 函数: sub_48aba0
// 地址: 0x48aba0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (sub_403df4(arg2, &data_489a10) == 0)
    return sub_4897b4(arg1, arg2)

sub_49195c(arg1)
int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4895e0(arg1)
sub_489584(arg1, arg2)
arg1[0x14].b = arg2[0x14].b
arg1[0x1b].b = arg2[0x1b].b
arg1[0x1a] = 0
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_1 = 0x48ac2b
struct _EXCEPTION_REGISTRATION_RECORD* edx_3
edx_3.b = 1
return sub_491964(arg1, edx_3.b)
