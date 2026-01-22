// 函数: sub_4118e8
// 地址: 0x4118e8
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
            sub_40ff78(eax_2.w, 0x13)
        
        return 0
    case 0xb
        return sx.d(arg1[4])
    case 0x11
        return zx.d(arg1[4].b)
    case 0x12
        return zx.d(arg1[4])
    case 0x13
        return *(arg1 + 8)

int32_t __saved_ebp
int32_t* var_18_1 = &__saved_ebp
int32_t (* var_1c_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result
int32_t edx_1
result, edx_1 = sub_411c38(arg1)

if (edx_1 != 0)
    sub_403b30()
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
return result
