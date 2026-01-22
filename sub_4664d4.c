// 函数: sub_4664d4
// 地址: 0x4664d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t result = GetWindowLongA(sub_45f888(arg2), 0xffffffec)

if ((result:1.b & 2) == 0)
    return result

RECT rect
GetWindowRect(sub_45f888(arg2), &rect)
int32_t dy = neg.d(rect.top)
int32_t dx = neg.d(rect.left)
RECT* ExceptionList = &rect
OffsetRect(ExceptionList, dx, dy)
HDC eax_8 = GetWindowDC(sub_45f888(arg2))
int32_t __saved_ebp
int32_t* var_58_4 = &__saved_ebp
int32_t (* var_5c_3)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
RECT lprc
lprc.left = rect.left
var_18
void* edi = &var_18
var_28
void* esi_1 = &var_28
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)

if (arg3 != 0)
    int32_t eax_11 = GetWindowLongA(sub_45f888(arg2), 0xfffffff0)
    
    if ((eax_11 & 0x100000) != 0 && (eax_11 & 0x200000) != 0)
        int32_t eax_12 = GetSystemMetrics(SM_CXVSCROLL)
        int32_t eax_13 = GetSystemMetrics(SM_CYHSCROLL)
        InflateRect(&lprc, 0xfffffffe, 0xfffffffe)
        int32_t var_48
        sub_418a64(lprc.right, lprc.bottom - eax_13, lprc.right - eax_12, &var_48, lprc.bottom)
        lprc.left = var_48
        void* edi_5 = &var_18
        void var_44
        void* esi_5 = &var_44
        *edi_5 = *esi_5
        void* edi_6 = edi_5 + 4
        void* esi_6 = esi_5 + 4
        *edi_6 = *esi_6
        *(edi_6 + 4) = *(esi_6 + 4)
        FillRect(eax_8, &lprc, GetSysColorBrush(COLOR_BTNFACE))

ExcludeClipRect(eax_8, rect.left + 2, rect.top + 2, rect.right - 2, rect.bottom - 2)
int32_t edx_2
edx_2.b = 2
void var_38
sub_465db0(&var_38, edx_2)
sub_465bd0(&var_38, eax_8, arg1, 0, &rect)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_58_5 = 0x466636
ExceptionList = sub_45f888(arg2)
return ReleaseDC(ExceptionList, eax_8)
