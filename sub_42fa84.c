// 函数: sub_42fa84
// 地址: 0x42fa84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (*(arg1 + 0x58) == 0)
    return arg1

sub_42c308(arg1)
int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_430e98(*(arg1 + 0x58))
void* ebp = sub_42f900(*(*(*(arg1 + 0x58) + 0x28) + 8))
sub_43107c(*(*(ebp - 4) + 0x58))
HDC hdc = CreateCompatibleDC(nullptr)
HGDIOBJ h = *(*(*(*(ebp - 4) + 0x58) + 0x28) + 8)

if (h == 0)
    *(*(ebp - 4) + 0x5c) = 0
else
    *(*(ebp - 4) + 0x5c) = SelectObject(hdc, h)

HPALETTE hPal = *(*(*(*(ebp - 4) + 0x58) + 0x28) + 0x10)

if (hPal == 0)
    *(*(ebp - 4) + 0x60) = 0
else
    *(*(ebp - 4) + 0x60) = SelectPalette(hdc, hPal, 0xffffffff)
    RealizePalette(hdc)

struct _EXCEPTION_REGISTRATION_RECORD* ecx_1 = sub_42c7c4(*(ebp - 4), hdc)
sub_41a434(data_4aaf00, *(ebp - 4), ecx_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_1 = 0x42fb6a
return sub_42c608(*(ebp - 4))
