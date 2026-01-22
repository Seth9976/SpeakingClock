// 函数: sub_41166c
// 地址: 0x41166c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int16_t eax_1 = *arg1

if (eax_1 u< 1)
    return 0

if (eax_1 == 1)
    if (data_4aaa10 != 0)
        sub_40ff78(1, 0x11)
    
    return 0

if (eax_1 == 0xb)
    return zx.d(arg1[4].b)

if (eax_1 == 0x11)
    return zx.d(arg1[4].b)

int32_t __saved_ebp
int32_t* var_18_1 = &__saved_ebp
int32_t (* var_1c_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_411168(arg1)

if (result u<= 0xff)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

sub_403b30()
noreturn
