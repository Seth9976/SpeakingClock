// 函数: sub_42f9e4
// 地址: 0x42f9e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx

if (arg1[1] == 0)
    return arg1

sub_42c308(arg1)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HGDIOBJ h = arg1[0x17]

if (h != 0)
    SelectObject(arg1[1], h)

HPALETTE hPal = arg1[0x18]

if (hPal != 0)
    SelectPalette(arg1[1], hPal, 0xffffffff)

HDC hdc = arg1[1]
sub_42c7c4(arg1, 0)
DeleteDC(hdc)
void* ebp_1 = sub_41a4d0(data_4aaf00)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_42fa7f
return sub_42c608(*(ebp_1 - 4))
