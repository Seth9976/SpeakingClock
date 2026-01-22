// 函数: sub_42d40a
// 地址: 0x42d40a
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 - 0x14) += *(*(arg1 - 4) + 0x14)
*(*(arg1 - 4) + 0xe) = 1
*(*(arg1 - 4) + 0x14) = sub_42ccd0(*(*(arg1 - 4) + 4), 1, 0x20) * *(*(arg1 - 4) + 8)
*(*(arg1 - 4) + 0x20) = 2
*(*(arg1 - 4) + 0x24) = 2
int32_t* eax_9 = *(arg1 - 4) + 0x28
*eax_9 = 0
eax_9[1] = 0xffffff
enum DIB_USAGE iUsage = DIB_RGB_COLORS
BITMAPINFO* ebx = *(arg1 - 4)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = *(arg1 - 0x14)
HBITMAP eax_12 = CreateDIBitmap(*(arg1 - 0x10), ebx, 4, ExceptionList, ebx, iUsage)
sub_42cb40(eax_12)
*(arg1 - 0xc) = eax_12
void* var_4 = arg1
int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_14
void* ebp
eax_14, ebp = sub_42cb50(*(arg1 - 0xc), *(arg1 + 8), 1)
**(ebp - 8) = eax_14
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_4_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) =
    sub_42d4c4
return DeleteObject(*(ebp - 0xc))
