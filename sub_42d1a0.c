// 函数: sub_42d1a0
// 地址: 0x42d1a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 0

if (data_4b1a48 == 0)
    return 0

HDC eax = GetDC(nullptr)
int32_t __saved_ebp
int32_t* var_14_1 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (GetDeviceCaps(eax, 0x68) s>= 0x10)
    GetPaletteEntries(data_4b1a48, 0, 8, arg1 + 4)
    GetPaletteEntries(data_4b1a48, 8, 8, arg1 + (zx.d(*(arg1 + 2)) << 2) - 0x1c)
    char var_5_1 = 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_2 = 0x42d22d
ExceptionList = nullptr
return ReleaseDC(ExceptionList, eax)
