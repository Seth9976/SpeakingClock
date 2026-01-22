// 函数: sub_4583d4
// 地址: 0x4583d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HDC ebp
HDC var_4 = ebp
HDC ebx
HDC var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t eax_1 = (*(*arg2 + 0x38))()
HDC hdc
void* const esi_12

if (arg1 == 0)
    int32_t var_24_1 = arg2[0x13]
    HDC* edi_5 = &hdc
    void* esi_8 = &arg2[0x14]
    *edi_5 = *esi_8
    void* edi_6 = &edi_5[1]
    void* esi_9 = esi_8 + 4
    *edi_6 = *esi_9
    *(edi_6 + 4) = *(esi_9 + 4)
    esi_12 = arg2
else
    int32_t var_24 = arg2[0x19]
    int32_t* edi_1 = &hdc
    void* esi_3 = &arg2[0x1a]
    *edi_1 = *esi_3
    void* edi_2 = &edi_1[1]
    void* esi_4 = esi_3 + 4
    *edi_2 = *esi_4
    *(edi_2 + 4) = *(esi_4 + 4)
    esi_12 = arg2

HWND ExceptionList_1 = GetDesktopWindow()
var_4 = nullptr
HWND ExceptionList = ExceptionList_1
HDC var_10 = GetDCEx(ExceptionList, var_4, DCX_CACHE | DCX_LOCKWINDOWUPDATE)
__return_addr = &var_4
var_4 = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HGDIOBJ h
void* ebp_1
h, ebp_1 = sub_42bc04(*(esi_12 + 0x48))
*(ebp_1 - 0x10) = SelectObject(*(ebp_1 - 0xc), h)
enum ROP_CODE rop = PATINVERT
int32_t x_1 = *(ebp_1 - 0x20)
int32_t w = *(ebp_1 - 0x18) - x_1 - eax_1
int32_t y_1 = *(ebp_1 - 0x1c)
hdc = *(ebp_1 - 0xc)
PatBlt(hdc, x_1 + eax_1, y_1, w, eax_1, rop)
enum ROP_CODE rop_1 = PATINVERT
int32_t h_1 = *(ebp_1 - 0x14) - y_1 - eax_1
int32_t x = *(ebp_1 - 0x18) - eax_1
hdc = *(ebp_1 - 0xc)
PatBlt(hdc, x, y_1 + eax_1, eax_1, h_1, rop_1)
enum ROP_CODE rop_2 = PATINVERT
int32_t w_1 = *(ebp_1 - 0x18) - *(ebp_1 - 0x20) - eax_1
int32_t y = *(ebp_1 - 0x14) - eax_1
hdc = *(ebp_1 - 0xc)
PatBlt(hdc, x_1, y, w_1, eax_1, rop_2)
enum ROP_CODE rop_3 = PATINVERT
int32_t h_2 = *(ebp_1 - 0x14) - *(ebp_1 - 0x1c) - eax_1
hdc = *(ebp_1 - 0xc)
PatBlt(hdc, x_1, y_1, eax_1, h_2, rop_3)
SelectObject(*(ebp_1 - 0xc), *(ebp_1 - 0x10))
fsbase->NtTib.ExceptionList = ExceptionList
var_4 = *(ebp_1 - 0xc)
ExceptionList = *(ebp_1 - 8)
return ReleaseDC(ExceptionList, var_4)
