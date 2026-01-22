// 函数: sub_42da04
// 地址: 0x42da04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
sub_42d8b0(arg1, arg3, arg4)
HPALETTE ExceptionList_1 = nullptr
HDC hdc = CreateCompatibleDC(nullptr)
int32_t* var_20_1 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    ExceptionList_1 = SelectPalette(hdc, arg2, 0)
    RealizePalette(hdc)

bool var_5 = GetDIBits(hdc, arg1, 0, arg3[2], arg5, arg3, DIB_RGB_COLORS) != 0
fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_20_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42daa8

if (ExceptionList_1 != 0)
    BOOL bForceBkgd = 0
    ExceptionList = ExceptionList_1
    SelectPalette(hdc, ExceptionList, bForceBkgd)

return DeleteDC(hdc)
