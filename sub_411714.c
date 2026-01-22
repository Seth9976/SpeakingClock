// 函数: sub_411714
// 地址: 0x411714
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
            sub_40ff78(eax_2.w, 2)
        
        return 0
    case 2
        return zx.d(arg1[4])
    case 0xb
        return zx.d(arg1[4])
    case 0x10
        return sx.d(arg1[4].b)
    case 0x11
        return zx.d(arg1[4].b)

int32_t __saved_ebp
int32_t* var_18_1 = &__saved_ebp
int32_t (* var_1c_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_6 = sub_411168(arg1) + 0x8000

if (ebx_6 u> 0xffff)
    sub_403b30()
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return ebx_6 - 0x8000
