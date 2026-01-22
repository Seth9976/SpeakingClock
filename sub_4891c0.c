// 函数: sub_4891c0
// 地址: 0x4891c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (sub_403df4(arg2, sub_403b40(arg1)) == 0)
    int32_t eax_5 = sub_403b40(arg2)
    
    if (sub_403e94(sub_403b40(arg1), eax_5) == 0)
        return sub_41a70c(ecx, arg2)

sub_49195c(arg1)
int32_t __saved_ebp
int32_t* var_10_2 = &__saved_ebp
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4895e0(arg1)
arg1[0x14].b = arg2[0x14].b
sub_489584(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_10_3 = 0x489256
struct _EXCEPTION_REGISTRATION_RECORD* edx_4
edx_4.b = 1
return sub_491964(arg1, edx_4.b)
