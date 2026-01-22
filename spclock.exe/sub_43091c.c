// 函数: sub_43091c
// 地址: 0x43091c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL bForceBkgd_2
BOOL bForceBkgd_1 = bForceBkgd_2
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
void* esi_1 = arg1
sub_42c818(arg2, 0xf)
sub_43107c(arg1)
int32_t var_c = 0
char var_d = 0
HPALETTE hPal = *(esi_1 + 0x10)
HDC ExceptionList

if (hPal != 0)
    BOOL bForceBkgd = 0xffffffff
    ExceptionList = arg2[1]
    HPALETTE var_c_1 = SelectPalette(ExceptionList, hPal, bForceBkgd)
    RealizePalette(arg2[1])
    var_d = 1

int32_t eax_9 = GetDeviceCaps(arg2[1], 0xc)
int32_t index = 0xe
ExceptionList = arg2[1]
int32_t eax_14 = eax_9 * GetDeviceCaps(ExceptionList, index)

if (eax_14 s> 8 || eax_14 s>= zx.d(*(esi_1 + 0x2a)) * zx.d(*(esi_1 + 0x28)))
    eax_14 = 0
else
    eax_14.b = 1

HDC var_18
HDC ExceptionList_1
int32_t y

if (eax_14.b == 0)
    if (sub_430ca8(arg1) == 0)
        SetStretchBltMode(sub_42c73c(arg2), COLORONCOLOR)
else
    GetBrushOrgEx(arg2[1], &var_18:3)
    SetStretchBltMode(arg2[1], HALFTONE)
    void* lppt = &var_18:3
    ExceptionList = ExceptionList_1
    SetBrushOrgEx(arg2[1], ExceptionList, y, lppt)

int32_t* var_30_7 = &bForceBkgd_1
int32_t (* var_34_7)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((*(arg1->unused + 0x28))(ExceptionList, var_34_7, var_30_7) != 0)
    sub_43101c(arg1)

sub_42c818(sub_430bec(arg1), 0xf)

if ((*(arg1->unused + 0x28))(arg2) == 0)
    HPALETTE eax_53 = arg2[8]
    y = *(esi_1 + 0x20)
    ExceptionList_1 = *(esi_1 + 0x1c)
    var_18 = nullptr
    int32_t xSrc = 0
    HDC hdcSrc = *(sub_430bec(arg1) + 4)
    StretchBlt(arg2[1], *arg3, arg3[1], arg3[2] - *arg3, arg3[3] - arg3[1], hdcSrc, xSrc, var_18)
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_430b61
    
    if (var_d == 0)
        return nullptr
    
    bForceBkgd_1 = 0xffffffff
    return SelectPalette(eax_53, eax_53, bForceBkgd_1)

int32_t var_20 = 0
int32_t var_1c = 0
int32_t* var_c_2 = &bForceBkgd_1
y = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1:1
var_18 = nullptr
HDC hdc = CreateCompatibleDC(var_18)
sub_42cb40(hdc)
var_18 = *(esi_1 + 0xc)
HGDIOBJ var_20_1 = SelectObject(hdc, var_18)
var_18 = arg3[2] - *arg3
int32_t eax_40 = arg3[3] - arg3[1]
HDC eax_43 = *(sub_430bec(arg1) + 4)
int32_t var_24_1 = 0
int32_t var_28_1 = 0
int32_t eax_44 = *(esi_1 + 0x1c)
int32_t eax_45 = *(esi_1 + 0x20)
HDC var_34_8 = eax_40
ExceptionList = nullptr
void* ebp = sub_42ccf0(arg2[1], *arg3, arg3[1], 0, ExceptionList, var_34_8, eax_45, eax_44, 
    var_28_1, var_24_1, eax_43, eax_40, var_18)
HGDIOBJ result = nullptr
fsbase->NtTib.ExceptionList = 0
int32_t var_34_9 = 0x430b34

if (*(ebp - 0x1c) != 0)
    ExceptionList = *(ebp - 0x1c)
    result = SelectObject(*(ebp - 0x18), ExceptionList)

if (*(ebp - 0x18) == 0)
    return result

ExceptionList = *(ebp - 0x18)
return DeleteDC(ExceptionList)
