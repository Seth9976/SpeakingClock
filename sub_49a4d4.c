// 函数: sub_49a4d4
// 地址: 0x49a4d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (sub_49a970(arg1) != 0)
    (*(*arg1 + 0x44))()
    void var_3c
    int32_t* result
    int32_t* ebp_1
    result, ebp_1 = sub_49a844(arg1, arg1[0x94], &var_3c)
    *ebp_1
    return result

HBRUSH eax_6 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
HBRUSH ho = CreateSolidBrush(GetSysColor(COLOR_WINDOW))
HBRUSH eax_9 = CreateSolidBrush(GetSysColor(COLOR_WINDOWFRAME))
HBRUSH ho_1 = CreateSolidBrush(GetSysColor(COLOR_BTNSHADOW))
HDC eax_13 = GetWindowDC(sub_45f888(arg1))
int32_t* var_40_9 = &var_4
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
RECT var_2c
GetWindowRect(sub_45f888(arg1), &var_2c)
OffsetRect(&var_2c, neg.d(var_2c.left), neg.d(var_2c.top))

if (*(arg1 + 0x1d9) == 0)
    FrameRect(eax_13, &var_2c, eax_9)
else
    var_2c.left += 1
    var_2c.top += 1
    FrameRect(eax_13, &var_2c, eax_9)
    var_2c.top -= 1
    var_2c.left -= 1
    var_2c.bottom -= 1
    var_2c.right -= 1
    FrameRect(eax_13, &var_2c, eax_6)
    var_2c.right += 1
    var_2c.bottom += 1
    DrawEdge(eax_13, &var_2c, BDR_SUNKENOUTER, 0x200f)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_40_10 = 0x49a64b
ExceptionList = sub_45f888(arg1)
ReleaseDC(ExceptionList, eax_13)
DeleteObject(ho)
DeleteObject(eax_6)
DeleteObject(eax_9)
return DeleteObject(ho_1)
