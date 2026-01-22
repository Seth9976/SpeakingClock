// 函数: sub_4313e4
// 地址: 0x4313e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)()
int32_t (* var_4)() = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_b4 = ebx
int32_t esi
int32_t var_b8 = esi
int32_t edi
int32_t var_bc = edi
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = arg1
int32_t var_34 = 0
HDC ExceptionList = nullptr
int32_t var_3c = 0
(*(*arg2 + 0xc))()
int32_t var_24
bool var_25 = var_24 == 0xc

if (var_25 != 0)
    var_24 = 0x28

int16_t* eax_4 = sub_402ea8(var_24 + 0x40c)
int32_t* arg_c = &var_4
int32_t (* arg_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_4 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_4
__return_addr = &var_4
var_4 = j_sub_404188
ExceptionList_3 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_3
int16_t hdc
int32_t esi_2

if (var_25 == 0)
    int32_t ecx_4
    int32_t edx_6
    edx_6, ecx_4 = (*(*arg2 + 0xc))()
    esi_2 = arg3 - var_24
    int32_t eax_11 = *(eax_4 + 0x10)
    
    if (eax_11 != 3 && eax_11 != 0)
        edx_6.b = 1
        int32_t* eax_13 = sub_403c38(ecx_4, edx_6)
        
        if (ExceptionList_4 == 0)
            int16_t var_ae
            sub_403578(&var_ae, 0xe, 0)
            var_ae = 0x4d42
            int32_t var_ac_1 = var_24 + esi_2
            ExceptionList_4 = &var_ae
        
        (*(*eax_13 + 0x10))()
        (*(*eax_13 + 0x10))()
        int32_t var_10_1 = esi_2
        int32_t ecx_10
        ecx_10, ebp_1 = sub_41cb10(eax_13, nullptr, (*(*eax_13 + 0x10))())
        ecx_10.w = 2
        (*(*ebp_1[-0xe] + 0x14))()
        ebp_1[-2] = ebp_1[-0xe]
else
    (*(*arg2 + 0xc))()
    sub_403578(eax_4, 0x28, 0)
    int16_t var_48
    *(eax_4 + 4) = zx.d(var_48)
    int16_t var_46
    *(eax_4 + 8) = zx.d(var_46)
    eax_4[6] = hdc
    int16_t var_42
    eax_4[7] = var_42
    esi_2 = arg3 - 0xc

int32_t* ebx_9 = ebp_1[-0xf]
*ebx_9 = ebp_1[-8]
ebp_1[-7] = ebp_1[-6] + ebp_1[-8]

if (ebx_9[3].w != 1)
    sub_42ca20()

if (ebp_1[-8] == 0x28)
    int16_t eax_27 = *(ebx_9 + 0xe)
    
    if ((eax_27 == 0x10 || eax_27 == 0x20) && ebx_9[4] == 3)
        sub_41caa0(ebp_1[-2], ebp_1[-7], 0xc)
        ebp_1[-7] += 0xc
        esi_2 -= 0xc

if (ebx_9[8] == 0)
    ebx_9[8] = sub_42ccb0(*(ebx_9 + 0xe))

uint32_t edi_1 = zx.d(*(ebp_1 - 0x21))
sub_41caa0(ebp_1[-2], ebp_1[-7], ebx_9[8] * zx.d(*(edi_1 + 0x4aaf04)))
int32_t esi_3 = esi_2 - ebx_9[8] * zx.d(*(edi_1 + 0x4aaf04))

if (ebx_9[5] == 0 || ebx_9[4] == 0)
    int32_t eax_36 = sub_42ccd0(ebx_9[1], zx.d(*(ebx_9 + 0xe)), 0x20)
    int32_t eax_38
    int32_t edx_16
    edx_16:eax_38 = sx.q(ebx_9[2])
    ebx_9[5] = eax_36 * ((eax_38 ^ edx_16) - edx_16)

int32_t eax_41 = ebx_9[5]

if (esi_3 u> eax_41)
    esi_3 = eax_41

if (*(ebp_1 - 0x21) != 0)
    sub_42cf7c(ebp_1[-7])

HDC eax_43 = GetDC(nullptr)
sub_42cb40(eax_43)
ebp_1[-3] = eax_43
int32_t* var_c_2 = ebp_1
int32_t (* var_10_2)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t eax_45 = *(ebp_1[-0xf] + 0x10)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1

if ((eax_45 == 0 || eax_45 == 3) && data_4aac70 == 0)
    uint32_t offset = 0
    HANDLE hSection = nullptr
    ExceptionList_1 = &ebp_1[-5]
    enum DIB_USAGE usage = DIB_RGB_COLORS
    BITMAPINFO* pbmi = ebp_1[-6]
    ExceptionList = ebp_1[-3]
    ebp_1[-0xa] = CreateDIBSection(ExceptionList, pbmi, usage, ExceptionList_1, hSection, offset)
    
    if (ebp_1[-0xa] == 0 || ebp_1[-5] == 0)
        if (GetLastError() != NO_ERROR)
            sub_40e584()
        else
            sub_42ca20()
    
    int32_t* var_18_1 = ebp_1
    int32_t (* var_1c_2)() = j_sub_404188
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_41caa0(ebp_1[-2], ebp_1[-5], esi_3)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    fsbase->NtTib.ExceptionList = ExceptionList_2
    int32_t var_c_3 = 0x43185a
    HDC hDC = ebp_1[-3]
    ExceptionList_2 = nullptr
    return ReleaseDC(ExceptionList_2, hDC)

ebp_1[-4] = 0
ebp_1[-5] = sub_402ea8(esi_3)
int32_t* var_18 = ebp_1
int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41caa0(ebp_1[-2], ebp_1[-5], esi_3)
HDC eax_50 = CreateCompatibleDC(ebp_1[-3])
sub_42cb40(eax_50)
ebp_1[-4] = eax_50
int32_t cy = 1
int32_t cx = 1
ExceptionList = ebp_1[-3]
HBITMAP h = CreateCompatibleBitmap(ExceptionList, cx, cy)
ebp_1[-0xb] = SelectObject(ebp_1[-4], h)
ebp_1[-0xd] = 0
void* eax_55 = *(ebp_1[-0xf] + 0x20)

if (eax_55 u> 0)
    ebp_1[-0xc] = sub_42d238(nullptr, ebp_1[-7], eax_55)
    BOOL bForceBkgd_1 = 0
    HPALETTE hPal = ebp_1[-0xc]
    ExceptionList = ebp_1[-4]
    ebp_1[-0xd] = SelectPalette(ExceptionList, hPal, bForceBkgd_1)
    RealizePalette(ebp_1[-4])

int32_t* var_24_4 = ebp_1
int32_t (* var_28_2)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
BITMAPINFO* eax_60 = ebp_1[-6]
hdc.d = ebp_1[-4]
ebp_1[-0xa] = CreateDIBitmap(hdc, eax_60, 4, ebp_1[-5], eax_60, DIB_RGB_COLORS)

if (ebp_1[-0xa] == 0)
    if (GetLastError() != NO_ERROR)
        sub_40e584()
    else
        sub_42ca20()

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_5)(void* arg1 @ ebp, int32_t arg2, HGDIOBJ arg3, void* arg4, int32_t arg5, 
    int32_t arg6, int32_t* arg7, void* arg8) = sub_431796

if (ebp_1[-0xd] != 0)
    BOOL bForceBkgd = 0xffffffff
    ExceptionList = ebp_1[-0xd]
    SelectPalette(ebp_1[-4], ExceptionList, bForceBkgd)

HGDIOBJ h_1 = ebp_1[-0xb]
ExceptionList = ebp_1[-4]
return DeleteObject(SelectObject(ExceptionList, h_1))
