// 函数: sub_42fc3c
// 地址: 0x42fc3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HGDIOBJ h_1 = arg1

if (h_1 == 0 || *(arg3 + 0x26) u> 8)
    return 

void prgbq
arg1 = sub_42d2dc(arg2, &prgbq, 0xff)

if (arg1 == 0)
    return 

HDC eax_1 = GetDC(nullptr)
HDC hdc = CreateCompatibleDC(eax_1)
HGDIOBJ h = SelectObject(hdc, h_1)
int32_t __saved_ebp
int32_t* var_420_3 = &__saved_ebp
int32_t (* var_424_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
SetDIBColorTable(hdc, 0, arg1, &prgbq)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_420_4 = 0x42fcf2
ExceptionList = hdc
SelectObject(ExceptionList, h)
DeleteDC(hdc)
ExceptionList = nullptr
ReleaseDC(ExceptionList, eax_1)
