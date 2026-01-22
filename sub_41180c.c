// 函数: sub_41180c
// 地址: 0x41180c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

switch (zx.d(*arg1))
    case 0
        return 0
    case 1
        if (data_4aaa10 != 0)
            uint32_t eax_2
            eax_2.w = 1
            sub_40ff78(eax_2.w, 0x12)
        
        return 0
    case 0xb
        return zx.d(arg1[4])
    case 0x11
        return zx.d(arg1[4].b)
    case 0x12
        return zx.d(arg1[4])

int32_t __saved_ebp
int32_t* var_18_1 = &__saved_ebp
int32_t (* var_1c_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_411168(arg1)

if (result u<= 0xffff)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

sub_403b30()
noreturn
